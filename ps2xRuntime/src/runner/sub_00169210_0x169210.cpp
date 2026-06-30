#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169210
// Address: 0x169210 - 0x169670
void sub_00169210_0x169210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169210_0x169210");
#endif

    switch (ctx->pc) {
        case 0x169268u: goto label_169268;
        case 0x1692a4u: goto label_1692a4;
        case 0x169314u: goto label_169314;
        case 0x169380u: goto label_169380;
        case 0x169468u: goto label_169468;
        case 0x169470u: goto label_169470;
        case 0x1694a0u: goto label_1694a0;
        case 0x169534u: goto label_169534;
        case 0x1695acu: goto label_1695ac;
        case 0x1695bcu: goto label_1695bc;
        case 0x1695dcu: goto label_1695dc;
        case 0x1695ecu: goto label_1695ec;
        case 0x169600u: goto label_169600;
        case 0x16964cu: goto label_16964c;
        case 0x169654u: goto label_169654;
        case 0x16965cu: goto label_16965c;
        default: break;
    }

    ctx->pc = 0x169210u;

    // 0x169210: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x169210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x169214: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x169214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x169218: 0x8c437be4  lw          $v1, 0x7BE4($v0)
    ctx->pc = 0x169218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31716)));
    // 0x16921c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x169220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169224: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x169224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x169228: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x169228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16922c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x16922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x169230: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x169230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169234: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x169234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x169238: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x169238u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16923c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x169240: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x169240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x169244: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x169244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x169248: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x169248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x16924c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x16924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x169250: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x169250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x169254: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169254u;
    {
        const bool branch_taken_0x169254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169254u;
            // 0x169258: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169254) {
            ctx->pc = 0x169270u;
            goto label_169270;
        }
    }
    ctx->pc = 0x16925Cu;
    // 0x16925c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x169260: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x169260u;
    SET_GPR_U32(ctx, 31, 0x169268u);
    ctx->pc = 0x169264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169260u;
            // 0x169264: 0x248434f0  addiu       $a0, $a0, 0x34F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169268u; }
        if (ctx->pc != 0x169268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169268u; }
        if (ctx->pc != 0x169268u) { return; }
    }
    ctx->pc = 0x169268u;
label_169268:
    // 0x169268: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x169268u;
    {
        const bool branch_taken_0x169268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169268u;
            // 0x16926c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169268) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x169270u;
label_169270:
    // 0x169270: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x169270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x169274: 0x8c627be0  lw          $v0, 0x7BE0($v1)
    ctx->pc = 0x169274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31712)));
    // 0x169278: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169278u;
    {
        const bool branch_taken_0x169278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169278u;
            // 0x16927c: 0x3c05005d  lui         $a1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169278) {
            ctx->pc = 0x169298u;
            goto label_169298;
        }
    }
    ctx->pc = 0x169280u;
    // 0x169280: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x169280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169284: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169284u;
    {
        const bool branch_taken_0x169284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x169288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169284u;
            // 0x169288: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169284) {
            ctx->pc = 0x169298u;
            goto label_169298;
        }
    }
    ctx->pc = 0x16928Cu;
    // 0x16928c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x16928Cu;
    {
        const bool branch_taken_0x16928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16928Cu;
            // 0x169290: 0x8c627be8  lw          $v0, 0x7BE8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16928c) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x169294u;
    // 0x169294: 0x0  nop
    ctx->pc = 0x169294u;
    // NOP
label_169298:
    // 0x169298: 0x3c16005d  lui         $s6, 0x5D
    ctx->pc = 0x169298u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)93 << 16));
    // 0x16929c: 0xc05abec  jal         func_16AFB0
    ctx->pc = 0x16929Cu;
    SET_GPR_U32(ctx, 31, 0x1692A4u);
    ctx->pc = 0x1692A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16929Cu;
            // 0x1692a0: 0x8ca47be0  lw          $a0, 0x7BE0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFB0u;
    if (runtime->hasFunction(0x16AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x16AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692A4u; }
        if (ctx->pc != 0x1692A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AFB0_0x16afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692A4u; }
        if (ctx->pc != 0x1692A4u) { return; }
    }
    ctx->pc = 0x1692A4u;
label_1692a4:
    // 0x1692a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1692a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1692a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692ac: 0x146400d6  bne         $v1, $a0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x1692ACu;
    {
        const bool branch_taken_0x1692ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1692B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1692ACu;
            // 0x1692b0: 0xaec37be8  sw          $v1, 0x7BE8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 31720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692ac) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x1692B4u;
    // 0x1692b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1692b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1692b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1692b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1692bc: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x1692bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x1692c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1692c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1692c4: 0x8e1076b0  lw          $s0, 0x76B0($s0)
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30384)));
    // 0x1692c8: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1692cc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1692CCu;
    {
        const bool branch_taken_0x1692cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1692D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1692CCu;
            // 0x1692d0: 0x2602011a  addiu       $v0, $s0, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692cc) {
            ctx->pc = 0x1692E0u;
            goto label_1692e0;
        }
    }
    ctx->pc = 0x1692D4u;
    // 0x1692d4: 0x26140118  addiu       $s4, $s0, 0x118
    ctx->pc = 0x1692d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x1692d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1692D8u;
    {
        const bool branch_taken_0x1692d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1692D8u;
            // 0x1692dc: 0x261e011c  addiu       $fp, $s0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692d8) {
            ctx->pc = 0x1692E8u;
            goto label_1692e8;
        }
    }
    ctx->pc = 0x1692E0u;
label_1692e0:
    // 0x1692e0: 0x26150118  addiu       $s5, $s0, 0x118
    ctx->pc = 0x1692e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x1692e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1692e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1692e8:
    // 0x1692e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1692e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1692ec: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1692ECu;
    {
        const bool branch_taken_0x1692ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1692F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1692ECu;
            // 0x1692f0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692ec) {
            ctx->pc = 0x169478u;
            goto label_169478;
        }
    }
    ctx->pc = 0x1692F4u;
    // 0x1692f4: 0x3c17005d  lui         $s7, 0x5D
    ctx->pc = 0x1692f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)93 << 16));
    // 0x1692f8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1692f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1692fc: 0x26f17bf0  addiu       $s1, $s7, 0x7BF0
    ctx->pc = 0x1692fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 31728));
    // 0x169300: 0x24a53528  addiu       $a1, $a1, 0x3528
    ctx->pc = 0x169300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13608));
    // 0x169304: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x169304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169308: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x169308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16930c: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x16930Cu;
    SET_GPR_U32(ctx, 31, 0x169314u);
    ctx->pc = 0x169310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16930Cu;
            // 0x169310: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169314u; }
        if (ctx->pc != 0x169314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169314u; }
        if (ctx->pc != 0x169314u) { return; }
    }
    ctx->pc = 0x169314u;
label_169314:
    // 0x169314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169314u;
    {
        const bool branch_taken_0x169314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169314u;
            // 0x169318: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169314) {
            ctx->pc = 0x169328u;
            goto label_169328;
        }
    }
    ctx->pc = 0x16931Cu;
    // 0x16931c: 0x26d07be8  addiu       $s0, $s6, 0x7BE8
    ctx->pc = 0x16931cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 31720));
    // 0x169320: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x169320u;
    {
        const bool branch_taken_0x169320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169320u;
            // 0x169324: 0x24843530  addiu       $a0, $a0, 0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169320) {
            ctx->pc = 0x1695D4u;
            goto label_1695d4;
        }
    }
    ctx->pc = 0x169328u;
label_169328:
    // 0x169328: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x169328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16932c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x16932cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169330: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x169330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x169334: 0x24480005  addiu       $t0, $v0, 0x5
    ctx->pc = 0x169334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x169338: 0x90450007  lbu         $a1, 0x7($v0)
    ctx->pc = 0x169338u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x16933c: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x16933cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x169340: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x169340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x169344: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x169344u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x169348: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x169348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x16934c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x16934cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x169350: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x169350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x169354: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x169354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x169358: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x169358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16935c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x169360: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169364: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x169364u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x169368: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x169368u;
    {
        const bool branch_taken_0x169368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169368u;
            // 0x16936c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169368) {
            ctx->pc = 0x169388u;
            goto label_169388;
        }
    }
    ctx->pc = 0x169370u;
    // 0x169370: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x169370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x169374: 0x26d07be8  addiu       $s0, $s6, 0x7BE8
    ctx->pc = 0x169374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 31720));
    // 0x169378: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x169378u;
    SET_GPR_U32(ctx, 31, 0x169380u);
    ctx->pc = 0x16937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169378u;
            // 0x16937c: 0x24843568  addiu       $a0, $a0, 0x3568 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169380u; }
        if (ctx->pc != 0x169380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169380u; }
        if (ctx->pc != 0x169380u) { return; }
    }
    ctx->pc = 0x169380u;
label_169380:
    // 0x169380: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x169380u;
    {
        const bool branch_taken_0x169380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169380u;
            // 0x169384: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169380) {
            ctx->pc = 0x1695E4u;
            goto label_1695e4;
        }
    }
    ctx->pc = 0x169388u;
label_169388:
    // 0x169388: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x169388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16938c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x16938cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x169390: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x169390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x169394: 0x8204000f  lb          $a0, 0xF($s0)
    ctx->pc = 0x169394u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x169398: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x169398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16939c: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x16939cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1693a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1693a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693a4: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x1693a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1693a8: 0x14910005  bne         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1693A8u;
    {
        const bool branch_taken_0x1693a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x1693ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1693A8u;
            // 0x1693ac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693a8) {
            ctx->pc = 0x1693C0u;
            goto label_1693c0;
        }
    }
    ctx->pc = 0x1693B0u;
    // 0x1693b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1693b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1693b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1693B4u;
    {
        const bool branch_taken_0x1693b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1693B4u;
            // 0x1693b8: 0x24420120  addiu       $v0, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693b4) {
            ctx->pc = 0x1693D0u;
            goto label_1693d0;
        }
    }
    ctx->pc = 0x1693BCu;
    // 0x1693bc: 0x0  nop
    ctx->pc = 0x1693bcu;
    // NOP
label_1693c0:
    // 0x1693c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1693c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1693c4: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x1693c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1693c8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1693c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1693cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1693ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1693d0:
    // 0x1693d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1693d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1693d4: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1693d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1693d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1693dc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1693dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1693e0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1693E0u;
    {
        const bool branch_taken_0x1693e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1693E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1693E0u;
            // 0x1693e4: 0x8e637bf0  lw          $v1, 0x7BF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693e0) {
            ctx->pc = 0x169420u;
            goto label_169420;
        }
    }
    ctx->pc = 0x1693E8u;
    // 0x1693e8: 0x8e627bf0  lw          $v0, 0x7BF0($s3)
    ctx->pc = 0x1693e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31728)));
    // 0x1693ec: 0x90460009  lbu         $a2, 0x9($v0)
    ctx->pc = 0x1693ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1693f0: 0x9045000b  lbu         $a1, 0xB($v0)
    ctx->pc = 0x1693f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1693f4: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x1693f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1693f8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1693f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1693fc: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x1693fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x169400: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x169400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x169404: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x169404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x169408: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x169408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x16940c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x16940cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x169410: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x169410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x169414: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x169414u;
    {
        const bool branch_taken_0x169414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169414u;
            // 0x169418: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169414) {
            ctx->pc = 0x16945Cu;
            goto label_16945c;
        }
    }
    ctx->pc = 0x16941Cu;
    // 0x16941c: 0x0  nop
    ctx->pc = 0x16941cu;
    // NOP
label_169420:
    // 0x169420: 0x90660009  lbu         $a2, 0x9($v1)
    ctx->pc = 0x169420u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x169424: 0x9065000b  lbu         $a1, 0xB($v1)
    ctx->pc = 0x169424u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x169428: 0x9064000a  lbu         $a0, 0xA($v1)
    ctx->pc = 0x169428u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x16942c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x16942cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x169430: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x169430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x169434: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x169434u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x169438: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x169438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16943c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x169440: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x169440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x169444: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x169444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x169448: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x169448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x16944c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x16944cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x169450: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x169450u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x169454: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x169454u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x169458: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x169458u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_16945c:
    // 0x16945c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16945Cu;
    {
        const bool branch_taken_0x16945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16945Cu;
            // 0x169460: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16945c) {
            ctx->pc = 0x16947Cu;
            goto label_16947c;
        }
    }
    ctx->pc = 0x169464u;
    // 0x169464: 0x0  nop
    ctx->pc = 0x169464u;
    // NOP
label_169468:
    // 0x169468: 0xc05a43c  jal         func_1690F0
    ctx->pc = 0x169468u;
    SET_GPR_U32(ctx, 31, 0x169470u);
    ctx->pc = 0x16946Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169468u;
            // 0x16946c: 0xaec27be8  sw          $v0, 0x7BE8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 31720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1690F0u;
    if (runtime->hasFunction(0x1690F0u)) {
        auto targetFn = runtime->lookupFunction(0x1690F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169470u; }
        if (ctx->pc != 0x169470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001690F0_0x1690f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169470u; }
        if (ctx->pc != 0x169470u) { return; }
    }
    ctx->pc = 0x169470u;
label_169470:
    // 0x169470: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x169470u;
    {
        const bool branch_taken_0x169470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169470) {
            ctx->pc = 0x169588u;
            goto label_169588;
        }
    }
    ctx->pc = 0x169478u;
label_169478:
    // 0x169478: 0x3c17005d  lui         $s7, 0x5D
    ctx->pc = 0x169478u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)93 << 16));
label_16947c:
    // 0x16947c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16947cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x169480: 0x8c627bf4  lw          $v0, 0x7BF4($v1)
    ctx->pc = 0x169480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31732)));
    // 0x169484: 0x2a240  sll         $s4, $v0, 9
    ctx->pc = 0x169484u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x169488: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x169488u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x16948c: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x16948Cu;
    {
        const bool branch_taken_0x16948c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x169490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16948Cu;
            // 0x169490: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16948c) {
            ctx->pc = 0x169598u;
            goto label_169598;
        }
    }
    ctx->pc = 0x169494u;
    // 0x169494: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x169494u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
    // 0x169498: 0x26b27bdc  addiu       $s2, $s5, 0x7BDC
    ctx->pc = 0x169498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 31708));
    // 0x16949c: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x16949cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1694a0:
    // 0x1694a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1694a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1694a4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1694A4u;
    {
        const bool branch_taken_0x1694a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1694A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694A4u;
            // 0x1694a8: 0x8ee37bf0  lw          $v1, 0x7BF0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694a4) {
            ctx->pc = 0x169500u;
            goto label_169500;
        }
    }
    ctx->pc = 0x1694ACu;
    // 0x1694ac: 0x8ee27bf0  lw          $v0, 0x7BF0($s7)
    ctx->pc = 0x1694acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31728)));
    // 0x1694b0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1694b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1694b4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1694b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1694b8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1694b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1694bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1694c0: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x1694c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1694c4: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1694c8: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1694c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1694cc: 0xfe3821  addu        $a3, $a3, $fp
    ctx->pc = 0x1694ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x1694d0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1694d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1694d4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1694d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1694d8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1694d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1694dc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1694dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1694e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1694e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1694e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1694e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1694e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1694ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1694ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1694f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1694f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1694f4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1694f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1694f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1694F8u;
    {
        const bool branch_taken_0x1694f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694F8u;
            // 0x1694fc: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694f8) {
            ctx->pc = 0x169564u;
            goto label_169564;
        }
    }
    ctx->pc = 0x169500u;
label_169500:
    // 0x169500: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x169500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x169504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169508: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x169508u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x16950c: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x16950cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x169510: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x169510u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x169514: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x169518: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x169518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16951c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x16951cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x169520: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x169520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x169524: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x169524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x169528: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x169528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x16952c: 0xc05adba  jal         func_16B6E8
    ctx->pc = 0x16952Cu;
    SET_GPR_U32(ctx, 31, 0x169534u);
    ctx->pc = 0x169530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16952Cu;
            // 0x169530: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B6E8u;
    if (runtime->hasFunction(0x16B6E8u)) {
        auto targetFn = runtime->lookupFunction(0x16B6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169534u; }
        if (ctx->pc != 0x169534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B6E8_0x16b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169534u; }
        if (ctx->pc != 0x169534u) { return; }
    }
    ctx->pc = 0x169534u;
label_169534:
    // 0x169534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169538: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x169538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16953c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x169540: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x169540u;
    {
        const bool branch_taken_0x169540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169540u;
            // 0x169544: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169540) {
            ctx->pc = 0x1695C8u;
            goto label_1695c8;
        }
    }
    ctx->pc = 0x169548u;
    // 0x169548: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16954c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16954cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169550: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x169550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x169554: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x169558: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x169558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16955c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x16955cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x169560: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x169560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_169564:
    // 0x169564: 0x8d227bdc  lw          $v0, 0x7BDC($t1)
    ctx->pc = 0x169564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 31708)));
    // 0x169568: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x169568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16956c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x16956cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x169570: 0x5040ffbd  beql        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x169570u;
    {
        const bool branch_taken_0x169570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169570) {
            ctx->pc = 0x169574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169570u;
            // 0x169574: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_169468;
        }
    }
    ctx->pc = 0x169578u;
    // 0x169578: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x169578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x16957c: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x16957cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x169580: 0x5660ffc7  bnel        $s3, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x169580u;
    {
        const bool branch_taken_0x169580 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x169580) {
            ctx->pc = 0x169584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169580u;
            // 0x169584: 0x8203000f  lb          $v1, 0xF($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1694A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1694a0;
        }
    }
    ctx->pc = 0x169588u;
label_169588:
    // 0x169588: 0x1660001f  bnez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x169588u;
    {
        const bool branch_taken_0x169588 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x16958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169588u;
            // 0x16958c: 0x8ec27be8  lw          $v0, 0x7BE8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169588) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x169590u;
    // 0x169590: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x169594: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x169594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_169598:
    // 0x169598: 0x24517be0  addiu       $s1, $v0, 0x7BE0
    ctx->pc = 0x169598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 31712));
    // 0x16959c: 0x8c657bf4  lw          $a1, 0x7BF4($v1)
    ctx->pc = 0x16959cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31732)));
    // 0x1695a0: 0x8ee67bf0  lw          $a2, 0x7BF0($s7)
    ctx->pc = 0x1695a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31728)));
    // 0x1695a4: 0xc05a9a8  jal         func_16A6A0
    ctx->pc = 0x1695A4u;
    SET_GPR_U32(ctx, 31, 0x1695ACu);
    ctx->pc = 0x1695A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1695A4u;
            // 0x1695a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A6A0u;
    if (runtime->hasFunction(0x16A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x16A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695ACu; }
        if (ctx->pc != 0x1695ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A6A0_0x16a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695ACu; }
        if (ctx->pc != 0x1695ACu) { return; }
    }
    ctx->pc = 0x1695ACu;
label_1695ac:
    // 0x1695ac: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1695ACu;
    {
        const bool branch_taken_0x1695ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1695B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1695ACu;
            // 0x1695b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695ac) {
            ctx->pc = 0x1695F8u;
            goto label_1695f8;
        }
    }
    ctx->pc = 0x1695B4u;
    // 0x1695b4: 0xc05a43c  jal         func_1690F0
    ctx->pc = 0x1695B4u;
    SET_GPR_U32(ctx, 31, 0x1695BCu);
    ctx->pc = 0x1695B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1695B4u;
            // 0x1695b8: 0xaec27be8  sw          $v0, 0x7BE8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 31720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1690F0u;
    if (runtime->hasFunction(0x1690F0u)) {
        auto targetFn = runtime->lookupFunction(0x1690F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695BCu; }
        if (ctx->pc != 0x1695BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001690F0_0x1690f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695BCu; }
        if (ctx->pc != 0x1695BCu) { return; }
    }
    ctx->pc = 0x1695BCu;
label_1695bc:
    // 0x1695bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1695BCu;
    {
        const bool branch_taken_0x1695bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1695BCu;
            // 0x1695c0: 0x8ec27be8  lw          $v0, 0x7BE8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695bc) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x1695C4u;
    // 0x1695c4: 0x0  nop
    ctx->pc = 0x1695c4u;
    // NOP
label_1695c8:
    // 0x1695c8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1695c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1695cc: 0x26d07be8  addiu       $s0, $s6, 0x7BE8
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 31720));
    // 0x1695d0: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x1695d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
label_1695d4:
    // 0x1695d4: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x1695D4u;
    SET_GPR_U32(ctx, 31, 0x1695DCu);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695DCu; }
        if (ctx->pc != 0x1695DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695DCu; }
        if (ctx->pc != 0x1695DCu) { return; }
    }
    ctx->pc = 0x1695DCu;
label_1695dc:
    // 0x1695dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1695e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1695e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1695e4:
    // 0x1695e4: 0xc05a43c  jal         func_1690F0
    ctx->pc = 0x1695E4u;
    SET_GPR_U32(ctx, 31, 0x1695ECu);
    ctx->pc = 0x1690F0u;
    if (runtime->hasFunction(0x1690F0u)) {
        auto targetFn = runtime->lookupFunction(0x1690F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695ECu; }
        if (ctx->pc != 0x1695ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001690F0_0x1690f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695ECu; }
        if (ctx->pc != 0x1695ECu) { return; }
    }
    ctx->pc = 0x1695ECu;
label_1695ec:
    // 0x1695ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1695ECu;
    {
        const bool branch_taken_0x1695ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1695ECu;
            // 0x1695f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695ec) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x1695F4u;
    // 0x1695f4: 0x0  nop
    ctx->pc = 0x1695f4u;
    // NOP
label_1695f8:
    // 0x1695f8: 0xc05abec  jal         func_16AFB0
    ctx->pc = 0x1695F8u;
    SET_GPR_U32(ctx, 31, 0x169600u);
    ctx->pc = 0x1695FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1695F8u;
            // 0x1695fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFB0u;
    if (runtime->hasFunction(0x16AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x16AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169600u; }
        if (ctx->pc != 0x169600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AFB0_0x16afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169600u; }
        if (ctx->pc != 0x169600u) { return; }
    }
    ctx->pc = 0x169600u;
label_169600:
    // 0x169600: 0xaec27be8  sw          $v0, 0x7BE8($s6)
    ctx->pc = 0x169600u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 31720), GPR_U32(ctx, 2));
    // 0x169604: 0x8ec27be8  lw          $v0, 0x7BE8($s6)
    ctx->pc = 0x169604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31720)));
label_169608:
    // 0x169608: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x169608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16960c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16960cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169610: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x169610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169614: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x169614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169618: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x169618u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16961c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16961cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x169620: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x169620u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169624: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x169624u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x169628: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x169628u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16962c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16962cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x169630: 0x3e00008  jr          $ra
    ctx->pc = 0x169630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169630u;
            // 0x169634: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169638u;
    // 0x169638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16963c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169640: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169644: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x169644u;
    SET_GPR_U32(ctx, 31, 0x16964Cu);
    ctx->pc = 0x169648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169644u;
            // 0x169648: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16964Cu; }
        if (ctx->pc != 0x16964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16964Cu; }
        if (ctx->pc != 0x16964Cu) { return; }
    }
    ctx->pc = 0x16964Cu;
label_16964c:
    // 0x16964c: 0xc05a59c  jal         func_169670
    ctx->pc = 0x16964Cu;
    SET_GPR_U32(ctx, 31, 0x169654u);
    ctx->pc = 0x169650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16964Cu;
            // 0x169650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169670u;
    if (runtime->hasFunction(0x169670u)) {
        auto targetFn = runtime->lookupFunction(0x169670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169654u; }
        if (ctx->pc != 0x169654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169670_0x169670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169654u; }
        if (ctx->pc != 0x169654u) { return; }
    }
    ctx->pc = 0x169654u;
label_169654:
    // 0x169654: 0xc05adca  jal         func_16B728
    ctx->pc = 0x169654u;
    SET_GPR_U32(ctx, 31, 0x16965Cu);
    ctx->pc = 0x169658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169654u;
            // 0x169658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16965Cu; }
        if (ctx->pc != 0x16965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16965Cu; }
        if (ctx->pc != 0x16965Cu) { return; }
    }
    ctx->pc = 0x16965Cu;
label_16965c:
    // 0x16965c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16965cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169660: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169668: 0x3e00008  jr          $ra
    ctx->pc = 0x169668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169668u;
            // 0x16966c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169670u;
}
