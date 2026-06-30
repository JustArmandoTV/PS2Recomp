#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF330
// Address: 0x3bf330 - 0x3bf580
void sub_003BF330_0x3bf330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF330_0x3bf330");
#endif

    switch (ctx->pc) {
        case 0x3bf3b4u: goto label_3bf3b4;
        case 0x3bf3c8u: goto label_3bf3c8;
        case 0x3bf3dcu: goto label_3bf3dc;
        case 0x3bf3f0u: goto label_3bf3f0;
        case 0x3bf418u: goto label_3bf418;
        case 0x3bf464u: goto label_3bf464;
        case 0x3bf470u: goto label_3bf470;
        case 0x3bf480u: goto label_3bf480;
        case 0x3bf510u: goto label_3bf510;
        case 0x3bf52cu: goto label_3bf52c;
        case 0x3bf540u: goto label_3bf540;
        case 0x3bf554u: goto label_3bf554;
        case 0x3bf55cu: goto label_3bf55c;
        default: break;
    }

    ctx->pc = 0x3bf330u;

    // 0x3bf330: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3bf330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3bf334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bf334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3bf338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bf338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bf33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bf33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bf340: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bf340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bf344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bf348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bf348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf34c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3bf34cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bf350: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3bf350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3bf354: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF354u;
    {
        const bool branch_taken_0x3bf354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF354u;
            // 0x3bf358: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf354) {
            ctx->pc = 0x3BF364u;
            goto label_3bf364;
        }
    }
    ctx->pc = 0x3BF35Cu;
    // 0x3bf35c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x3BF35Cu;
    {
        const bool branch_taken_0x3bf35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF35Cu;
            // 0x3bf360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf35c) {
            ctx->pc = 0x3BF564u;
            goto label_3bf564;
        }
    }
    ctx->pc = 0x3BF364u;
label_3bf364:
    // 0x3bf364: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3bf364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3bf368: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3bf368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3bf36c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bf36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bf370: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF370u;
    {
        const bool branch_taken_0x3bf370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bf370) {
            ctx->pc = 0x3BF380u;
            goto label_3bf380;
        }
    }
    ctx->pc = 0x3BF378u;
    // 0x3bf378: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3BF378u;
    {
        const bool branch_taken_0x3bf378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF378u;
            // 0x3bf37c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf378) {
            ctx->pc = 0x3BF564u;
            goto label_3bf564;
        }
    }
    ctx->pc = 0x3BF380u;
label_3bf380:
    // 0x3bf380: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bf380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3bf384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bf388: 0xa7a20104  sh          $v0, 0x104($sp)
    ctx->pc = 0x3bf388u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 2));
    // 0x3bf38c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3bf38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3bf390: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3bf390u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3bf394: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x3bf394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x3bf398: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3bf398u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3bf39c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x3bf39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x3bf3a0: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x3bf3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x3bf3a4: 0xa7a00100  sh          $zero, 0x100($sp)
    ctx->pc = 0x3bf3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bf3a8: 0xa7a00102  sh          $zero, 0x102($sp)
    ctx->pc = 0x3bf3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 258), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bf3ac: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3BF3ACu;
    SET_GPR_U32(ctx, 31, 0x3BF3B4u);
    ctx->pc = 0x3BF3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF3ACu;
            // 0x3bf3b0: 0xa7a00106  sh          $zero, 0x106($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 262), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF3B4u; }
        if (ctx->pc != 0x3BF3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF3B4u; }
        if (ctx->pc != 0x3BF3B4u) { return; }
    }
    ctx->pc = 0x3BF3B4u;
label_3bf3b4:
    // 0x3bf3b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bf3b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf3b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3bf3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3bf3bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3bf3bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3bf3c0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3BF3C0u;
    SET_GPR_U32(ctx, 31, 0x3BF3C8u);
    ctx->pc = 0x3BF3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF3C0u;
            // 0x3bf3c4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF3C8u; }
        if (ctx->pc != 0x3BF3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF3C8u; }
        if (ctx->pc != 0x3BF3C8u) { return; }
    }
    ctx->pc = 0x3BF3C8u;
label_3bf3c8:
    // 0x3bf3c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bf3c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf3cc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3bf3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3bf3d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3bf3d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3bf3d4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3BF3D4u;
    SET_GPR_U32(ctx, 31, 0x3BF3DCu);
    ctx->pc = 0x3BF3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF3D4u;
            // 0x3bf3d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF3DCu; }
        if (ctx->pc != 0x3BF3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF3DCu; }
        if (ctx->pc != 0x3BF3DCu) { return; }
    }
    ctx->pc = 0x3BF3DCu;
label_3bf3dc:
    // 0x3bf3dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bf3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf3e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3bf3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3bf3e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3bf3e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3bf3e8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3BF3E8u;
    SET_GPR_U32(ctx, 31, 0x3BF3F0u);
    ctx->pc = 0x3BF3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF3E8u;
            // 0x3bf3ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF3F0u; }
        if (ctx->pc != 0x3BF3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF3F0u; }
        if (ctx->pc != 0x3BF3F0u) { return; }
    }
    ctx->pc = 0x3BF3F0u;
label_3bf3f0:
    // 0x3bf3f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bf3f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3bf3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3bf3f8: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3bf3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x3bf3fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3bf3fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf400: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3bf400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3bf404: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3bf404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x3bf408: 0x26070820  addiu       $a3, $s0, 0x820
    ctx->pc = 0x3bf408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x3bf40c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x3bf40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3bf410: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x3BF410u;
    SET_GPR_U32(ctx, 31, 0x3BF418u);
    ctx->pc = 0x3BF414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF410u;
            // 0x3bf414: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF418u; }
        if (ctx->pc != 0x3BF418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF418u; }
        if (ctx->pc != 0x3BF418u) { return; }
    }
    ctx->pc = 0x3BF418u;
label_3bf418:
    // 0x3bf418: 0x97a20106  lhu         $v0, 0x106($sp)
    ctx->pc = 0x3bf418u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 262)));
    // 0x3bf41c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3BF41Cu;
    {
        const bool branch_taken_0x3bf41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf41c) {
            ctx->pc = 0x3BF560u;
            goto label_3bf560;
        }
    }
    ctx->pc = 0x3BF424u;
    // 0x3bf424: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x3bf424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3bf428: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bf428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bf42c: 0x97a60102  lhu         $a2, 0x102($sp)
    ctx->pc = 0x3bf42cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 258)));
    // 0x3bf430: 0x97a30100  lhu         $v1, 0x100($sp)
    ctx->pc = 0x3bf430u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3bf434: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x3bf434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3bf438: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3bf438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3bf43c: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x3bf43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3bf440: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x3bf440u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3bf444: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x3bf444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x3bf448: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3bf448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3bf44c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3bf44cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3bf450: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x3bf450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3bf454: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x3bf454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3bf458: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3bf458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bf45c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3BF45Cu;
    SET_GPR_U32(ctx, 31, 0x3BF464u);
    ctx->pc = 0x3BF460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF45Cu;
            // 0x3bf460: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF464u; }
        if (ctx->pc != 0x3BF464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF464u; }
        if (ctx->pc != 0x3BF464u) { return; }
    }
    ctx->pc = 0x3BF464u;
label_3bf464:
    // 0x3bf464: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bf464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bf468: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3BF468u;
    SET_GPR_U32(ctx, 31, 0x3BF470u);
    ctx->pc = 0x3BF46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF468u;
            // 0x3bf46c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF470u; }
        if (ctx->pc != 0x3BF470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF470u; }
        if (ctx->pc != 0x3BF470u) { return; }
    }
    ctx->pc = 0x3BF470u;
label_3bf470:
    // 0x3bf470: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bf470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bf474: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3bf474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3bf478: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x3BF478u;
    SET_GPR_U32(ctx, 31, 0x3BF480u);
    ctx->pc = 0x3BF47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF478u;
            // 0x3bf47c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF480u; }
        if (ctx->pc != 0x3BF480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF480u; }
        if (ctx->pc != 0x3BF480u) { return; }
    }
    ctx->pc = 0x3BF480u;
label_3bf480:
    // 0x3bf480: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3bf480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3bf484: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3bf484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3bf488: 0xc44183f0  lwc1        $f1, -0x7C10($v0)
    ctx->pc = 0x3bf488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf48c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3bf48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bf490: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x3bf490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bf494: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3bf494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x3bf498: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x3bf498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bf49c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x3bf49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x3bf4a0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3bf4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3bf4a4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3bf4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x3bf4a8: 0xc44083f4  lwc1        $f0, -0x7C0C($v0)
    ctx->pc = 0x3bf4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf4ac: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x3bf4acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3bf4b0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x3bf4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bf4b4: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x3bf4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3bf4b8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3bf4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3bf4bc: 0xc44183f8  lwc1        $f1, -0x7C08($v0)
    ctx->pc = 0x3bf4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf4c0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x3bf4c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3bf4c4: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x3bf4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bf4c8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3bf4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3bf4cc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3bf4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3bf4d0: 0xc44083fc  lwc1        $f0, -0x7C04($v0)
    ctx->pc = 0x3bf4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf4d4: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x3bf4d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3bf4d8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x3bf4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf4dc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x3bf4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3bf4e0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3bf4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf4e4: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x3bf4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3bf4e8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x3bf4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf4ec: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3bf4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3bf4f0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3bf4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf4f4: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x3bf4f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3bf4f8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x3bf4f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3bf4fc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3bf4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3bf500: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3bf500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bf504: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3bf504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3bf508: 0xc04c994  jal         func_132650
    ctx->pc = 0x3BF508u;
    SET_GPR_U32(ctx, 31, 0x3BF510u);
    ctx->pc = 0x3BF50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF508u;
            // 0x3bf50c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF510u; }
        if (ctx->pc != 0x3BF510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF510u; }
        if (ctx->pc != 0x3BF510u) { return; }
    }
    ctx->pc = 0x3BF510u;
label_3bf510:
    // 0x3bf510: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3bf510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x3bf514: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3bf514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3bf518: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3bf518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3bf51c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3bf51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf520: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bf520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf524: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x3BF524u;
    SET_GPR_U32(ctx, 31, 0x3BF52Cu);
    ctx->pc = 0x3BF528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF524u;
            // 0x3bf528: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF52Cu; }
        if (ctx->pc != 0x3BF52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF52Cu; }
        if (ctx->pc != 0x3BF52Cu) { return; }
    }
    ctx->pc = 0x3BF52Cu;
label_3bf52c:
    // 0x3bf52c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x3bf52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3bf530: 0x260408f0  addiu       $a0, $s0, 0x8F0
    ctx->pc = 0x3bf530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2288));
    // 0x3bf534: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bf534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf538: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3BF538u;
    SET_GPR_U32(ctx, 31, 0x3BF540u);
    ctx->pc = 0x3BF53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF538u;
            // 0x3bf53c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF540u; }
        if (ctx->pc != 0x3BF540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF540u; }
        if (ctx->pc != 0x3BF540u) { return; }
    }
    ctx->pc = 0x3BF540u;
label_3bf540:
    // 0x3bf540: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bf540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf544: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x3bf544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x3bf548: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3bf548u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3bf54c: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3BF54Cu;
    SET_GPR_U32(ctx, 31, 0x3BF554u);
    ctx->pc = 0x3BF550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF54Cu;
            // 0x3bf550: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF554u; }
        if (ctx->pc != 0x3BF554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF554u; }
        if (ctx->pc != 0x3BF554u) { return; }
    }
    ctx->pc = 0x3BF554u;
label_3bf554:
    // 0x3bf554: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3BF554u;
    SET_GPR_U32(ctx, 31, 0x3BF55Cu);
    ctx->pc = 0x3BF558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF554u;
            // 0x3bf558: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF55Cu; }
        if (ctx->pc != 0x3BF55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF55Cu; }
        if (ctx->pc != 0x3BF55Cu) { return; }
    }
    ctx->pc = 0x3BF55Cu;
label_3bf55c:
    // 0x3bf55c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3bf55cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bf560:
    // 0x3bf560: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3bf560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bf564:
    // 0x3bf564: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bf564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bf568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bf568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bf56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bf56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bf570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf574: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF574u;
            // 0x3bf578: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF57Cu;
    // 0x3bf57c: 0x0  nop
    ctx->pc = 0x3bf57cu;
    // NOP
}
