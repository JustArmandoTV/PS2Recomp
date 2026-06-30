#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D360
// Address: 0x13d360 - 0x13d550
void sub_0013D360_0x13d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D360_0x13d360");
#endif

    switch (ctx->pc) {
        case 0x13d398u: goto label_13d398;
        case 0x13d3a4u: goto label_13d3a4;
        case 0x13d3b0u: goto label_13d3b0;
        case 0x13d3c4u: goto label_13d3c4;
        case 0x13d3ccu: goto label_13d3cc;
        case 0x13d3d4u: goto label_13d3d4;
        case 0x13d3ecu: goto label_13d3ec;
        case 0x13d414u: goto label_13d414;
        case 0x13d41cu: goto label_13d41c;
        case 0x13d424u: goto label_13d424;
        case 0x13d444u: goto label_13d444;
        case 0x13d464u: goto label_13d464;
        case 0x13d488u: goto label_13d488;
        case 0x13d4acu: goto label_13d4ac;
        case 0x13d4d0u: goto label_13d4d0;
        case 0x13d4e4u: goto label_13d4e4;
        case 0x13d4f0u: goto label_13d4f0;
        case 0x13d50cu: goto label_13d50c;
        case 0x13d538u: goto label_13d538;
        case 0x13d544u: goto label_13d544;
        default: break;
    }

    ctx->pc = 0x13d360u;

    // 0x13d360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13d364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d368: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x13d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
    // 0x13d36c: 0x54600076  bnel        $v1, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x13D36Cu;
    {
        const bool branch_taken_0x13d36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d36c) {
            ctx->pc = 0x13D370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D36Cu;
            // 0x13d370: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D548u;
            goto label_13d548;
        }
    }
    ctx->pc = 0x13D374u;
    // 0x13d374: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x13d374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x13d378: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x13d378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x13d37c: 0x8c631220  lw          $v1, 0x1220($v1)
    ctx->pc = 0x13d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4640)));
    // 0x13d380: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x13d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x13d384: 0x8c4511e8  lw          $a1, 0x11E8($v0)
    ctx->pc = 0x13d384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4584)));
    // 0x13d388: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x13d388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x13d38c: 0x8f868024  lw          $a2, -0x7FDC($gp)
    ctx->pc = 0x13d38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934564)));
    // 0x13d390: 0xc043c12  jal         func_10F048
    ctx->pc = 0x13D390u;
    SET_GPR_U32(ctx, 31, 0x13D398u);
    ctx->pc = 0x13D394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D390u;
            // 0x13d394: 0xaf83815c  sw          $v1, -0x7EA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934876), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D398u; }
        if (ctx->pc != 0x13D398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D398u; }
        if (ctx->pc != 0x13D398u) { return; }
    }
    ctx->pc = 0x13D398u;
label_13d398:
    // 0x13d398: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x13d398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x13d39c: 0xc043c12  jal         func_10F048
    ctx->pc = 0x13D39Cu;
    SET_GPR_U32(ctx, 31, 0x13D3A4u);
    ctx->pc = 0x13D3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D39Cu;
            // 0x13d3a0: 0x24841280  addiu       $a0, $a0, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3A4u; }
        if (ctx->pc != 0x13D3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3A4u; }
        if (ctx->pc != 0x13D3A4u) { return; }
    }
    ctx->pc = 0x13D3A4u;
label_13d3a4:
    // 0x13d3a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d3a8: 0xc057250  jal         func_15C940
    ctx->pc = 0x13D3A8u;
    SET_GPR_U32(ctx, 31, 0x13D3B0u);
    ctx->pc = 0x13D3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3A8u;
            // 0x13d3ac: 0xaf808194  sw          $zero, -0x7E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3B0u; }
        if (ctx->pc != 0x13D3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3B0u; }
        if (ctx->pc != 0x13D3B0u) { return; }
    }
    ctx->pc = 0x13D3B0u;
label_13d3b0:
    // 0x13d3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d3b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d3b8: 0xac435848  sw          $v1, 0x5848($v0)
    ctx->pc = 0x13d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 3));
    // 0x13d3bc: 0xc052644  jal         func_149910
    ctx->pc = 0x13D3BCu;
    SET_GPR_U32(ctx, 31, 0x13D3C4u);
    ctx->pc = 0x13D3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3BCu;
            // 0x13d3c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149910u;
    if (runtime->hasFunction(0x149910u)) {
        auto targetFn = runtime->lookupFunction(0x149910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3C4u; }
        if (ctx->pc != 0x13D3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149910_0x149910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3C4u; }
        if (ctx->pc != 0x13D3C4u) { return; }
    }
    ctx->pc = 0x13D3C4u;
label_13d3c4:
    // 0x13d3c4: 0xc04e828  jal         func_13A0A0
    ctx->pc = 0x13D3C4u;
    SET_GPR_U32(ctx, 31, 0x13D3CCu);
    ctx->pc = 0x13A0A0u;
    if (runtime->hasFunction(0x13A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3CCu; }
        if (ctx->pc != 0x13D3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A0A0_0x13a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3CCu; }
        if (ctx->pc != 0x13D3CCu) { return; }
    }
    ctx->pc = 0x13D3CCu;
label_13d3cc:
    // 0x13d3cc: 0xc0517c0  jal         func_145F00
    ctx->pc = 0x13D3CCu;
    SET_GPR_U32(ctx, 31, 0x13D3D4u);
    ctx->pc = 0x13D3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3CCu;
            // 0x13d3d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F00u;
    if (runtime->hasFunction(0x145F00u)) {
        auto targetFn = runtime->lookupFunction(0x145F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3D4u; }
        if (ctx->pc != 0x13D3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F00_0x145f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3D4u; }
        if (ctx->pc != 0x13D3D4u) { return; }
    }
    ctx->pc = 0x13D3D4u;
label_13d3d4:
    // 0x13d3d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13d3d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13d3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13d3dc: 0x0  nop
    ctx->pc = 0x13d3dcu;
    // NOP
    // 0x13d3e0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x13d3e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x13d3e4: 0xc0517cc  jal         func_145F30
    ctx->pc = 0x13D3E4u;
    SET_GPR_U32(ctx, 31, 0x13D3ECu);
    ctx->pc = 0x13D3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D3E4u;
            // 0x13d3e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F30u;
    if (runtime->hasFunction(0x145F30u)) {
        auto targetFn = runtime->lookupFunction(0x145F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3ECu; }
        if (ctx->pc != 0x13D3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F30_0x145f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3ECu; }
        if (ctx->pc != 0x13D3ECu) { return; }
    }
    ctx->pc = 0x13D3ECu;
label_13d3ec:
    // 0x13d3ec: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x13d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x13d3f0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x13d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x13d3f4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x13d3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x13d3f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13d3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13d3fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13d400: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13d400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13d404: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x13d404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x13d408: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x13d408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x13d40c: 0xc05182c  jal         func_1460B0
    ctx->pc = 0x13D40Cu;
    SET_GPR_U32(ctx, 31, 0x13D414u);
    ctx->pc = 0x1460B0u;
    if (runtime->hasFunction(0x1460B0u)) {
        auto targetFn = runtime->lookupFunction(0x1460B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D414u; }
        if (ctx->pc != 0x13D414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001460B0_0x1460b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D414u; }
        if (ctx->pc != 0x13D414u) { return; }
    }
    ctx->pc = 0x13D414u;
label_13d414:
    // 0x13d414: 0xc0513cc  jal         func_144F30
    ctx->pc = 0x13D414u;
    SET_GPR_U32(ctx, 31, 0x13D41Cu);
    ctx->pc = 0x144F30u;
    if (runtime->hasFunction(0x144F30u)) {
        auto targetFn = runtime->lookupFunction(0x144F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D41Cu; }
        if (ctx->pc != 0x13D41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144F30_0x144f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D41Cu; }
        if (ctx->pc != 0x13D41Cu) { return; }
    }
    ctx->pc = 0x13D41Cu;
label_13d41c:
    // 0x13d41c: 0xc053504  jal         func_14D410
    ctx->pc = 0x13D41Cu;
    SET_GPR_U32(ctx, 31, 0x13D424u);
    ctx->pc = 0x14D410u;
    if (runtime->hasFunction(0x14D410u)) {
        auto targetFn = runtime->lookupFunction(0x14D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D424u; }
        if (ctx->pc != 0x13D424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D410_0x14d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D424u; }
        if (ctx->pc != 0x13D424u) { return; }
    }
    ctx->pc = 0x13D424u;
label_13d424:
    // 0x13d424: 0x8f858194  lw          $a1, -0x7E6C($gp)
    ctx->pc = 0x13d424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d428: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d42c: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d430: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x13d430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13d434: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x13d434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13d438: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13d43c: 0xc057540  jal         func_15D500
    ctx->pc = 0x13D43Cu;
    SET_GPR_U32(ctx, 31, 0x13D444u);
    ctx->pc = 0x13D440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D43Cu;
            // 0x13d440: 0xaf828194  sw          $v0, -0x7E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D444u; }
        if (ctx->pc != 0x13D444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D444u; }
        if (ctx->pc != 0x13D444u) { return; }
    }
    ctx->pc = 0x13D444u;
label_13d444:
    // 0x13d444: 0x8f858194  lw          $a1, -0x7E6C($gp)
    ctx->pc = 0x13d444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d448: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d44c: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d450: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x13d450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x13d454: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x13d454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13d458: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13d458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13d45c: 0xc057540  jal         func_15D500
    ctx->pc = 0x13D45Cu;
    SET_GPR_U32(ctx, 31, 0x13D464u);
    ctx->pc = 0x13D460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D45Cu;
            // 0x13d460: 0xaf828194  sw          $v0, -0x7E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D464u; }
        if (ctx->pc != 0x13D464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D464u; }
        if (ctx->pc != 0x13D464u) { return; }
    }
    ctx->pc = 0x13D464u;
label_13d464:
    // 0x13d464: 0x8f858194  lw          $a1, -0x7E6C($gp)
    ctx->pc = 0x13d464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d468: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x13d468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x13d46c: 0x3447000d  ori         $a3, $v0, 0xD
    ctx->pc = 0x13d46cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x13d470: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d474: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d478: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x13d478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13d47c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13d480: 0xc057540  jal         func_15D500
    ctx->pc = 0x13D480u;
    SET_GPR_U32(ctx, 31, 0x13D488u);
    ctx->pc = 0x13D484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D480u;
            // 0x13d484: 0xaf828194  sw          $v0, -0x7E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D488u; }
        if (ctx->pc != 0x13D488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D488u; }
        if (ctx->pc != 0x13D488u) { return; }
    }
    ctx->pc = 0x13D488u;
label_13d488:
    // 0x13d488: 0x8f858194  lw          $a1, -0x7E6C($gp)
    ctx->pc = 0x13d488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d48c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x13d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x13d490: 0x3447000d  ori         $a3, $v0, 0xD
    ctx->pc = 0x13d490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x13d494: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d498: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d49c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x13d49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x13d4a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13d4a4: 0xc057540  jal         func_15D500
    ctx->pc = 0x13D4A4u;
    SET_GPR_U32(ctx, 31, 0x13D4ACu);
    ctx->pc = 0x13D4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D4A4u;
            // 0x13d4a8: 0xaf828194  sw          $v0, -0x7E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4ACu; }
        if (ctx->pc != 0x13D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4ACu; }
        if (ctx->pc != 0x13D4ACu) { return; }
    }
    ctx->pc = 0x13D4ACu;
label_13d4ac:
    // 0x13d4ac: 0x8f858194  lw          $a1, -0x7E6C($gp)
    ctx->pc = 0x13d4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d4b0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x13d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13d4b4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x13d4b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13d4b8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d4bc: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d4c0: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x13d4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x13d4c4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13d4c8: 0xc057540  jal         func_15D500
    ctx->pc = 0x13D4C8u;
    SET_GPR_U32(ctx, 31, 0x13D4D0u);
    ctx->pc = 0x13D4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D4C8u;
            // 0x13d4cc: 0xaf828194  sw          $v0, -0x7E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4D0u; }
        if (ctx->pc != 0x13D4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4D0u; }
        if (ctx->pc != 0x13D4D0u) { return; }
    }
    ctx->pc = 0x13D4D0u;
label_13d4d0:
    // 0x13d4d0: 0x8f868194  lw          $a2, -0x7E6C($gp)
    ctx->pc = 0x13d4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d4d4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d4d8: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d4dc: 0xc05750c  jal         func_15D430
    ctx->pc = 0x13D4DCu;
    SET_GPR_U32(ctx, 31, 0x13D4E4u);
    ctx->pc = 0x13D4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D4DCu;
            // 0x13d4e0: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4E4u; }
        if (ctx->pc != 0x13D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4E4u; }
        if (ctx->pc != 0x13D4E4u) { return; }
    }
    ctx->pc = 0x13D4E4u;
label_13d4e4:
    // 0x13d4e4: 0xaf828190  sw          $v0, -0x7E70($gp)
    ctx->pc = 0x13d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934928), GPR_U32(ctx, 2));
    // 0x13d4e8: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x13D4E8u;
    SET_GPR_U32(ctx, 31, 0x13D4F0u);
    ctx->pc = 0x13D4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D4E8u;
            // 0x13d4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4F0u; }
        if (ctx->pc != 0x13D4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4F0u; }
        if (ctx->pc != 0x13D4F0u) { return; }
    }
    ctx->pc = 0x13D4F0u;
label_13d4f0:
    // 0x13d4f0: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13d4f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13d4f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13d4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13d4fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13d4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13d500: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13d500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13d504: 0xc052774  jal         func_149DD0
    ctx->pc = 0x13D504u;
    SET_GPR_U32(ctx, 31, 0x13D50Cu);
    ctx->pc = 0x149DD0u;
    if (runtime->hasFunction(0x149DD0u)) {
        auto targetFn = runtime->lookupFunction(0x149DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D50Cu; }
        if (ctx->pc != 0x13D50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DD0_0x149dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D50Cu; }
        if (ctx->pc != 0x13D50Cu) { return; }
    }
    ctx->pc = 0x13D50Cu;
label_13d50c:
    // 0x13d50c: 0x3c023faa  lui         $v0, 0x3FAA
    ctx->pc = 0x13d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16298 << 16));
    // 0x13d510: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13d510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13d514: 0x3444aaab  ori         $a0, $v0, 0xAAAB
    ctx->pc = 0x13d514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x13d518: 0x24051fff  addiu       $a1, $zero, 0x1FFF
    ctx->pc = 0x13d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x13d51c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13d520: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13d520u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13d524: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13d524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13d528: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x13d528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13d52c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x13d52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x13d530: 0xc04f408  jal         func_13D020
    ctx->pc = 0x13D530u;
    SET_GPR_U32(ctx, 31, 0x13D538u);
    ctx->pc = 0x13D534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D530u;
            // 0x13d534: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D020u;
    if (runtime->hasFunction(0x13D020u)) {
        auto targetFn = runtime->lookupFunction(0x13D020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D538u; }
        if (ctx->pc != 0x13D538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D020_0x13d020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D538u; }
        if (ctx->pc != 0x13D538u) { return; }
    }
    ctx->pc = 0x13D538u;
label_13d538:
    // 0x13d538: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13d538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13d53c: 0xc04f674  jal         func_13D9D0
    ctx->pc = 0x13D53Cu;
    SET_GPR_U32(ctx, 31, 0x13D544u);
    ctx->pc = 0x13D540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D53Cu;
            // 0x13d540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D544u; }
        if (ctx->pc != 0x13D544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D544u; }
        if (ctx->pc != 0x13D544u) { return; }
    }
    ctx->pc = 0x13D544u;
label_13d544:
    // 0x13d544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d548:
    // 0x13d548: 0x3e00008  jr          $ra
    ctx->pc = 0x13D548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D548u;
            // 0x13d54c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D550u;
}
