#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001713F0
// Address: 0x1713f0 - 0x1716e8
void sub_001713F0_0x1713f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001713F0_0x1713f0");
#endif

    switch (ctx->pc) {
        case 0x171458u: goto label_171458;
        case 0x171460u: goto label_171460;
        case 0x17146cu: goto label_17146c;
        case 0x171474u: goto label_171474;
        case 0x17149cu: goto label_17149c;
        case 0x1714b8u: goto label_1714b8;
        case 0x1714d0u: goto label_1714d0;
        case 0x171510u: goto label_171510;
        case 0x171544u: goto label_171544;
        case 0x171558u: goto label_171558;
        case 0x17158cu: goto label_17158c;
        case 0x171594u: goto label_171594;
        case 0x1715b0u: goto label_1715b0;
        case 0x171618u: goto label_171618;
        case 0x171624u: goto label_171624;
        case 0x171640u: goto label_171640;
        case 0x171654u: goto label_171654;
        case 0x171670u: goto label_171670;
        default: break;
    }

    ctx->pc = 0x1713f0u;

    // 0x1713f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1713f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1713f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1713f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1713f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1713f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1713fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171400: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171404: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x171404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x171408: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x171408u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17140c: 0x5440009d  bnel        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x17140Cu;
    {
        const bool branch_taken_0x17140c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17140c) {
            ctx->pc = 0x171410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17140Cu;
            // 0x171410: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171684u;
            goto label_171684;
        }
    }
    ctx->pc = 0x171414u;
    // 0x171414: 0x8203004c  lb          $v1, 0x4C($s0)
    ctx->pc = 0x171414u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x171418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17141c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17141Cu;
    {
        const bool branch_taken_0x17141c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17141c) {
            ctx->pc = 0x171420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17141Cu;
            // 0x171420: 0x8203004a  lb          $v1, 0x4A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17143Cu;
            goto label_17143c;
        }
    }
    ctx->pc = 0x171424u;
    // 0x171424: 0x8202004b  lb          $v0, 0x4B($s0)
    ctx->pc = 0x171424u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x171428: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x171428u;
    {
        const bool branch_taken_0x171428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17142Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171428u;
            // 0x17142c: 0xa200004c  sb          $zero, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171428) {
            ctx->pc = 0x171434u;
            goto label_171434;
        }
    }
    ctx->pc = 0x171430u;
    // 0x171430: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x171430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_171434:
    // 0x171434: 0x8203004a  lb          $v1, 0x4A($s0)
    ctx->pc = 0x171434u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x171438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17143c:
    // 0x17143c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17143Cu;
    {
        const bool branch_taken_0x17143c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17143c) {
            ctx->pc = 0x17146Cu;
            goto label_17146c;
        }
    }
    ctx->pc = 0x171444u;
    // 0x171444: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x171444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171448: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171448u;
    {
        const bool branch_taken_0x171448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x171448) {
            ctx->pc = 0x171458u;
            goto label_171458;
        }
    }
    ctx->pc = 0x171450u;
    // 0x171450: 0xc05e320  jal         func_178C80
    ctx->pc = 0x171450u;
    SET_GPR_U32(ctx, 31, 0x171458u);
    ctx->pc = 0x171454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171450u;
            // 0x171454: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178C80u;
    if (runtime->hasFunction(0x178C80u)) {
        auto targetFn = runtime->lookupFunction(0x178C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171458u; }
        if (ctx->pc != 0x171458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C80_0x178c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171458u; }
        if (ctx->pc != 0x171458u) { return; }
    }
    ctx->pc = 0x171458u;
label_171458:
    // 0x171458: 0xc05c834  jal         func_1720D0
    ctx->pc = 0x171458u;
    SET_GPR_U32(ctx, 31, 0x171460u);
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171460u; }
        if (ctx->pc != 0x171460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171460u; }
        if (ctx->pc != 0x171460u) { return; }
    }
    ctx->pc = 0x171460u;
label_171460:
    // 0x171460: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x171460u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x171464: 0xc05c83a  jal         func_1720E8
    ctx->pc = 0x171464u;
    SET_GPR_U32(ctx, 31, 0x17146Cu);
    ctx->pc = 0x171468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171464u;
            // 0x171468: 0xa200004d  sb          $zero, 0x4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17146Cu; }
        if (ctx->pc != 0x17146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17146Cu; }
        if (ctx->pc != 0x17146Cu) { return; }
    }
    ctx->pc = 0x17146Cu;
label_17146c:
    // 0x17146c: 0xc05c834  jal         func_1720D0
    ctx->pc = 0x17146Cu;
    SET_GPR_U32(ctx, 31, 0x171474u);
    ctx->pc = 0x171470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17146Cu;
            // 0x171470: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171474u; }
        if (ctx->pc != 0x171474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171474u; }
        if (ctx->pc != 0x171474u) { return; }
    }
    ctx->pc = 0x171474u;
label_171474:
    // 0x171474: 0x82040049  lb          $a0, 0x49($s0)
    ctx->pc = 0x171474u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x171478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17147c: 0x1482007a  bne         $a0, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x17147Cu;
    {
        const bool branch_taken_0x17147c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17147c) {
            ctx->pc = 0x171668u;
            goto label_171668;
        }
    }
    ctx->pc = 0x171484u;
    // 0x171484: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x171484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x171488: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x171488u;
    {
        const bool branch_taken_0x171488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17148Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171488u;
            // 0x17148c: 0x9203004d  lbu         $v1, 0x4D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171488) {
            ctx->pc = 0x1714ECu;
            goto label_1714ec;
        }
    }
    ctx->pc = 0x171490u;
    // 0x171490: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x171490u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x171494: 0xc05c83a  jal         func_1720E8
    ctx->pc = 0x171494u;
    SET_GPR_U32(ctx, 31, 0x17149Cu);
    ctx->pc = 0x171498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171494u;
            // 0x171498: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17149Cu; }
        if (ctx->pc != 0x17149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17149Cu; }
        if (ctx->pc != 0x17149Cu) { return; }
    }
    ctx->pc = 0x17149Cu;
label_17149c:
    // 0x17149c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1714a0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1714A0u;
    {
        const bool branch_taken_0x1714a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1714a0) {
            ctx->pc = 0x1714A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1714A0u;
            // 0x1714a4: 0x9203004d  lbu         $v1, 0x4D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1714ECu;
            goto label_1714ec;
        }
    }
    ctx->pc = 0x1714A8u;
    // 0x1714a8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1714a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1714ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1714acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714b0: 0xc05e24c  jal         func_178930
    ctx->pc = 0x1714B0u;
    SET_GPR_U32(ctx, 31, 0x1714B8u);
    ctx->pc = 0x1714B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1714B0u;
            // 0x1714b4: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178930u;
    if (runtime->hasFunction(0x178930u)) {
        auto targetFn = runtime->lookupFunction(0x178930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714B8u; }
        if (ctx->pc != 0x1714B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178930_0x178930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714B8u; }
        if (ctx->pc != 0x1714B8u) { return; }
    }
    ctx->pc = 0x1714B8u;
label_1714b8:
    // 0x1714b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1714B8u;
    {
        const bool branch_taken_0x1714b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1714B8u;
            // 0x1714bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714b8) {
            ctx->pc = 0x1714E8u;
            goto label_1714e8;
        }
    }
    ctx->pc = 0x1714C0u;
    // 0x1714c0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1714c4: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x1714c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1714c8: 0xc059f6c  jal         func_167DB0
    ctx->pc = 0x1714C8u;
    SET_GPR_U32(ctx, 31, 0x1714D0u);
    ctx->pc = 0x1714CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1714C8u;
            // 0x1714cc: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714D0u; }
        if (ctx->pc != 0x1714D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714D0u; }
        if (ctx->pc != 0x1714D0u) { return; }
    }
    ctx->pc = 0x1714D0u;
label_1714d0:
    // 0x1714d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1714d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1714d4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1714d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1714d8: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x1714d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x1714dc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1714DCu;
    {
        const bool branch_taken_0x1714dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1714DCu;
            // 0x1714e0: 0xa200004d  sb          $zero, 0x4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714dc) {
            ctx->pc = 0x1716D0u;
            goto label_1716d0;
        }
    }
    ctx->pc = 0x1714E4u;
    // 0x1714e4: 0x0  nop
    ctx->pc = 0x1714e4u;
    // NOP
label_1714e8:
    // 0x1714e8: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x1714e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_1714ec:
    // 0x1714ec: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1714ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1714f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1714f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1714f4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1714f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1714f8: 0x5443005e  bnel        $v0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1714F8u;
    {
        const bool branch_taken_0x1714f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1714f8) {
            ctx->pc = 0x1714FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1714F8u;
            // 0x1714fc: 0x8203004b  lb          $v1, 0x4B($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171674u;
            goto label_171674;
        }
    }
    ctx->pc = 0x171500u;
    // 0x171500: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x171500u;
    {
        const bool branch_taken_0x171500 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x171500) {
            ctx->pc = 0x171504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171500u;
            // 0x171504: 0xde020048  ld          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171514u;
            goto label_171514;
        }
    }
    ctx->pc = 0x171508u;
    // 0x171508: 0xc05c83a  jal         func_1720E8
    ctx->pc = 0x171508u;
    SET_GPR_U32(ctx, 31, 0x171510u);
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171510u; }
        if (ctx->pc != 0x171510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171510u; }
        if (ctx->pc != 0x171510u) { return; }
    }
    ctx->pc = 0x171510u;
label_171510:
    // 0x171510: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x171510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
label_171514:
    // 0x171514: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x171518: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x171518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x17151c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x17151cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x171520: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x171520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x171524: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x171524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x171528: 0x5044006a  beql        $v0, $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x171528u;
    {
        const bool branch_taken_0x171528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x171528) {
            ctx->pc = 0x17152Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171528u;
            // 0x17152c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1716D4u;
            goto label_1716d4;
        }
    }
    ctx->pc = 0x171530u;
    // 0x171530: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x171530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x171534: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x171534u;
    {
        const bool branch_taken_0x171534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171534) {
            ctx->pc = 0x171538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171534u;
            // 0x171538: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171580u;
            goto label_171580;
        }
    }
    ctx->pc = 0x17153Cu;
    // 0x17153c: 0xc05e8be  jal         func_17A2F8
    ctx->pc = 0x17153Cu;
    SET_GPR_U32(ctx, 31, 0x171544u);
    ctx->pc = 0x171540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17153Cu;
            // 0x171540: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A2F8u;
    if (runtime->hasFunction(0x17A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x17A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171544u; }
        if (ctx->pc != 0x171544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A2F8_0x17a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171544u; }
        if (ctx->pc != 0x171544u) { return; }
    }
    ctx->pc = 0x171544u;
label_171544:
    // 0x171544: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x171544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171548: 0x6430005  bgezl       $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x171548u;
    {
        const bool branch_taken_0x171548 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x171548) {
            ctx->pc = 0x17154Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171548u;
            // 0x17154c: 0x664207ff  daddiu      $v0, $s2, 0x7FF (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)2047);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171560u;
            goto label_171560;
        }
    }
    ctx->pc = 0x171550u;
    // 0x171550: 0xc05e408  jal         func_179020
    ctx->pc = 0x171550u;
    SET_GPR_U32(ctx, 31, 0x171558u);
    ctx->pc = 0x171554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171550u;
            // 0x171554: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179020u;
    if (runtime->hasFunction(0x179020u)) {
        auto targetFn = runtime->lookupFunction(0x179020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171558u; }
        if (ctx->pc != 0x171558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179020_0x179020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171558u; }
        if (ctx->pc != 0x171558u) { return; }
    }
    ctx->pc = 0x171558u;
label_171558:
    // 0x171558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x171558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17155c: 0x664207ff  daddiu      $v0, $s2, 0x7FF
    ctx->pc = 0x17155cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)2047);
label_171560:
    // 0x171560: 0x66440ffe  daddiu      $a0, $s2, 0xFFE
    ctx->pc = 0x171560u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4094);
    // 0x171564: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x171564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x171568: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x171568u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x17156c: 0x28d78  dsll        $s1, $v0, 21
    ctx->pc = 0x17156cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 21);
    // 0x171570: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x171570u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x171574: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x171574u;
    {
        const bool branch_taken_0x171574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171574u;
            // 0x171578: 0xde030010  ld          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171574) {
            ctx->pc = 0x1715B4u;
            goto label_1715b4;
        }
    }
    ctx->pc = 0x17157Cu;
    // 0x17157c: 0x0  nop
    ctx->pc = 0x17157cu;
    // NOP
label_171580:
    // 0x171580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171584: 0xc05e358  jal         func_178D60
    ctx->pc = 0x171584u;
    SET_GPR_U32(ctx, 31, 0x17158Cu);
    ctx->pc = 0x171588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171584u;
            // 0x171588: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178D60u;
    if (runtime->hasFunction(0x178D60u)) {
        auto targetFn = runtime->lookupFunction(0x178D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17158Cu; }
        if (ctx->pc != 0x17158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178D60_0x178d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17158Cu; }
        if (ctx->pc != 0x17158Cu) { return; }
    }
    ctx->pc = 0x17158Cu;
label_17158c:
    // 0x17158c: 0xc05e33e  jal         func_178CF8
    ctx->pc = 0x17158Cu;
    SET_GPR_U32(ctx, 31, 0x171594u);
    ctx->pc = 0x171590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17158Cu;
            // 0x171590: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178CF8u;
    if (runtime->hasFunction(0x178CF8u)) {
        auto targetFn = runtime->lookupFunction(0x178CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171594u; }
        if (ctx->pc != 0x171594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178CF8_0x178cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171594u; }
        if (ctx->pc != 0x171594u) { return; }
    }
    ctx->pc = 0x171594u;
label_171594:
    // 0x171594: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x171594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x171598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17159c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17159cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715a0: 0x1112c0  sll         $v0, $s1, 11
    ctx->pc = 0x1715a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x1715a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1715a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715a8: 0xc05e358  jal         func_178D60
    ctx->pc = 0x1715A8u;
    SET_GPR_U32(ctx, 31, 0x1715B0u);
    ctx->pc = 0x1715ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1715A8u;
            // 0x1715ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178D60u;
    if (runtime->hasFunction(0x178D60u)) {
        auto targetFn = runtime->lookupFunction(0x178D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1715B0u; }
        if (ctx->pc != 0x1715B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178D60_0x178d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1715B0u; }
        if (ctx->pc != 0x1715B0u) { return; }
    }
    ctx->pc = 0x1715B0u;
label_1715b0:
    // 0x1715b0: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x1715b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1715b4:
    // 0x1715b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1715b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1715b8: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x1715b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x1715bc: 0x215ba  dsrl        $v0, $v0, 22
    ctx->pc = 0x1715bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 22);
    // 0x1715c0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1715C0u;
    {
        const bool branch_taken_0x1715c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1715c0) {
            ctx->pc = 0x1715C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1715C0u;
            // 0x1715c4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1715D4u;
            goto label_1715d4;
        }
    }
    ctx->pc = 0x1715C8u;
    // 0x1715c8: 0xfe120010  sd          $s2, 0x10($s0)
    ctx->pc = 0x1715c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 18));
    // 0x1715cc: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x1715ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x1715d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1715d4:
    // 0x1715d4: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1715d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1715d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1715D8u;
    {
        const bool branch_taken_0x1715d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1715d8) {
            ctx->pc = 0x1715DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1715D8u;
            // 0x1715dc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1715ECu;
            goto label_1715ec;
        }
    }
    ctx->pc = 0x1715E0u;
    // 0x1715e0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1715e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1715e4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1715e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1715e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1715ec:
    // 0x1715ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1715ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1715f0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1715f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1715f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1715F4u;
    {
        const bool branch_taken_0x1715f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1715F4u;
            // 0x1715f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715f4) {
            ctx->pc = 0x171610u;
            goto label_171610;
        }
    }
    ctx->pc = 0x1715FCu;
    // 0x1715fc: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x1715fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x171600: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x171600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171604: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x171604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x171608: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x171608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x17160c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x17160cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_171610:
    // 0x171610: 0xc05c2f2  jal         func_170BC8
    ctx->pc = 0x171610u;
    SET_GPR_U32(ctx, 31, 0x171618u);
    ctx->pc = 0x171614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171610u;
            // 0x171614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171618u; }
        if (ctx->pc != 0x171618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171618u; }
        if (ctx->pc != 0x171618u) { return; }
    }
    ctx->pc = 0x171618u;
label_171618:
    // 0x171618: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x171618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x17161c: 0xc05e3ee  jal         func_178FB8
    ctx->pc = 0x17161Cu;
    SET_GPR_U32(ctx, 31, 0x171624u);
    ctx->pc = 0x171620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17161Cu;
            // 0x171620: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178FB8u;
    if (runtime->hasFunction(0x178FB8u)) {
        auto targetFn = runtime->lookupFunction(0x178FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171624u; }
        if (ctx->pc != 0x171624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178FB8_0x178fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171624u; }
        if (ctx->pc != 0x171624u) { return; }
    }
    ctx->pc = 0x171624u;
label_171624:
    // 0x171624: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x171628: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x171628u;
    {
        const bool branch_taken_0x171628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x171628) {
            ctx->pc = 0x17162Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171628u;
            // 0x17162c: 0x8203004b  lb          $v1, 0x4B($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171674u;
            goto label_171674;
        }
    }
    ctx->pc = 0x171630u;
    // 0x171630: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x171630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x171634: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x171634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x171638: 0xc059f6c  jal         func_167DB0
    ctx->pc = 0x171638u;
    SET_GPR_U32(ctx, 31, 0x171640u);
    ctx->pc = 0x17163Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171638u;
            // 0x17163c: 0x24844020  addiu       $a0, $a0, 0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171640u; }
        if (ctx->pc != 0x171640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171640u; }
        if (ctx->pc != 0x171640u) { return; }
    }
    ctx->pc = 0x171640u;
label_171640:
    // 0x171640: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x171640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171644: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x171644u;
    {
        const bool branch_taken_0x171644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x171648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171644u;
            // 0x171648: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171644) {
            ctx->pc = 0x171658u;
            goto label_171658;
        }
    }
    ctx->pc = 0x17164Cu;
    // 0x17164c: 0xc05e320  jal         func_178C80
    ctx->pc = 0x17164Cu;
    SET_GPR_U32(ctx, 31, 0x171654u);
    ctx->pc = 0x171650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17164Cu;
            // 0x171650: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178C80u;
    if (runtime->hasFunction(0x178C80u)) {
        auto targetFn = runtime->lookupFunction(0x178C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171654u; }
        if (ctx->pc != 0x171654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C80_0x178c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171654u; }
        if (ctx->pc != 0x171654u) { return; }
    }
    ctx->pc = 0x171654u;
label_171654:
    // 0x171654: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x171654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_171658:
    // 0x171658: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x171658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x17165c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x17165cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x171660: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x171660u;
    {
        const bool branch_taken_0x171660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171660u;
            // 0x171664: 0xa200004d  sb          $zero, 0x4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171660) {
            ctx->pc = 0x1716D0u;
            goto label_1716d0;
        }
    }
    ctx->pc = 0x171668u;
label_171668:
    // 0x171668: 0xc05c83a  jal         func_1720E8
    ctx->pc = 0x171668u;
    SET_GPR_U32(ctx, 31, 0x171670u);
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171670u; }
        if (ctx->pc != 0x171670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171670u; }
        if (ctx->pc != 0x171670u) { return; }
    }
    ctx->pc = 0x171670u;
label_171670:
    // 0x171670: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x171670u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
label_171674:
    // 0x171674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171678: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x171678u;
    {
        const bool branch_taken_0x171678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x171678) {
            ctx->pc = 0x17167Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171678u;
            // 0x17167c: 0xa200004b  sb          $zero, 0x4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171680u;
            goto label_171680;
        }
    }
    ctx->pc = 0x171680u;
label_171680:
    // 0x171680: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x171680u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_171684:
    // 0x171684: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171688: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x171688u;
    {
        const bool branch_taken_0x171688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171688) {
            ctx->pc = 0x17168Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171688u;
            // 0x17168c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1716D4u;
            goto label_1716d4;
        }
    }
    ctx->pc = 0x171690u;
    // 0x171690: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x171690u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x171694: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x171694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x171698: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x171698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17169c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x17169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1716a0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1716a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1716a4: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x1716a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x1716a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1716a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1716ac: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1716ACu;
    {
        const bool branch_taken_0x1716ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1716ac) {
            ctx->pc = 0x1716B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1716ACu;
            // 0x1716b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1716D4u;
            goto label_1716d4;
        }
    }
    ctx->pc = 0x1716B4u;
    // 0x1716b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1716b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1716b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1716bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1716bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1716c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1716c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1716c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1716c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1716c8: 0x805c3ea  j           func_170FA8
    ctx->pc = 0x1716C8u;
    ctx->pc = 0x1716CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1716C8u;
            // 0x1716cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170FA8u;
    {
        auto targetFn = runtime->lookupFunction(0x170FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1716D0u;
label_1716d0:
    // 0x1716d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1716d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1716d4:
    // 0x1716d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1716d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1716d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1716d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1716dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1716dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1716e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1716E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1716E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1716E0u;
            // 0x1716e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1716E8u;
}
