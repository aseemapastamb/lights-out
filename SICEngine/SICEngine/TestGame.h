/*
 * © 2022 DigiPen (USA) Corporation
 * Course: GAM541, Spring 2022
 * Professor: Eric Fleegal
 * Primary Author: - Dylan Bier
 * Additional Authors: -
 */
 

#pragma once

#include "Application.h"
#include "StringId.h"

namespace TestGame {

	class TestGame : public sic::Application
	{
	public:
		TestGame() = default;
		~TestGame() = default;

		virtual void Initialize(void) override;
		virtual void Shutdown(void) override {}
		virtual void Update(sic::f32 dt) override;
		virtual void MenuUpdate(sic::f32 dt) override;
		virtual void Render(void) override;
		virtual void ImGuiRender(void) override {}
	};
}

