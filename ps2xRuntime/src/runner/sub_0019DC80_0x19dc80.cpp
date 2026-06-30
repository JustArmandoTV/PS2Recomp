#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019DC80
// Address: 0x19dc80 - 0x19e0a0
void sub_0019DC80_0x19dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DC80_0x19dc80");
#endif

    switch (ctx->pc) {
        case 0x19dcb8u: goto label_19dcb8;
        case 0x19dcfcu: goto label_19dcfc;
        case 0x19dd0cu: goto label_19dd0c;
        case 0x19dd18u: goto label_19dd18;
        case 0x19ddccu: goto label_19ddcc;
        case 0x19de00u: goto label_19de00;
        case 0x19de0cu: goto label_19de0c;
        case 0x19de44u: goto label_19de44;
        case 0x19de5cu: goto label_19de5c;
        case 0x19de7cu: goto label_19de7c;
        case 0x19de88u: goto label_19de88;
        case 0x19de94u: goto label_19de94;
        case 0x19deecu: goto label_19deec;
        case 0x19df54u: goto label_19df54;
        case 0x19df6cu: goto label_19df6c;
        default: break;
    }

    ctx->pc = 0x19dc80u;

    // 0x19dc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dc88: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19dc88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dc8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19dc90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19dc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19dc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19dc98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19dc98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19dca0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19dca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dca4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19dca8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19dcac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19dcb0: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19DCB0u;
    SET_GPR_U32(ctx, 31, 0x19DCB8u);
    ctx->pc = 0x19DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCB0u;
            // 0x19dcb4: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCB8u; }
        if (ctx->pc != 0x19DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCB8u; }
        if (ctx->pc != 0x19DCB8u) { return; }
    }
    ctx->pc = 0x19DCB8u;
label_19dcb8:
    // 0x19dcb8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19dcbc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19dcbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcc0: 0x12900009  beq         $s4, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DCC0u;
    {
        const bool branch_taken_0x19dcc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x19DCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCC0u;
            // 0x19dcc4: 0x24849b60  addiu       $a0, $a0, -0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcc0) {
            ctx->pc = 0x19DCE8u;
            goto label_19dce8;
        }
    }
    ctx->pc = 0x19DCC8u;
    // 0x19dcc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19dcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19dcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19dcd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19dcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dcd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19dcd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19dcd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19dcd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dcdc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19dcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19dce0: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19DCE0u;
    ctx->pc = 0x19DCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCE0u;
            // 0x19dce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19DCE8u;
label_19dce8:
    // 0x19dce8: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x19dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x19dcec: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x19DCECu;
    {
        const bool branch_taken_0x19dcec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCECu;
            // 0x19dcf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcec) {
            ctx->pc = 0x19DD2Cu;
            goto label_19dd2c;
        }
    }
    ctx->pc = 0x19DCF4u;
    // 0x19dcf4: 0xc06db48  jal         func_1B6D20
    ctx->pc = 0x19DCF4u;
    SET_GPR_U32(ctx, 31, 0x19DCFCu);
    ctx->pc = 0x19DCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCF4u;
            // 0x19dcf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D20u;
    if (runtime->hasFunction(0x1B6D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCFCu; }
        if (ctx->pc != 0x19DCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D20_0x1b6d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCFCu; }
        if (ctx->pc != 0x19DCFCu) { return; }
    }
    ctx->pc = 0x19DCFCu;
label_19dcfc:
    // 0x19dcfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DCFCu;
    {
        const bool branch_taken_0x19dcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCFCu;
            // 0x19dd00: 0x2404fecb  addiu       $a0, $zero, -0x135 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966987));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcfc) {
            ctx->pc = 0x19DD18u;
            goto label_19dd18;
        }
    }
    ctx->pc = 0x19DD04u;
    // 0x19dd04: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19DD04u;
    SET_GPR_U32(ctx, 31, 0x19DD0Cu);
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD0Cu; }
        if (ctx->pc != 0x19DD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD0Cu; }
        if (ctx->pc != 0x19DD0Cu) { return; }
    }
    ctx->pc = 0x19DD0Cu;
label_19dd0c:
    // 0x19dd0c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19dd10: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19DD10u;
    SET_GPR_U32(ctx, 31, 0x19DD18u);
    ctx->pc = 0x19DD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD10u;
            // 0x19dd14: 0x24849b90  addiu       $a0, $a0, -0x6470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD18u; }
        if (ctx->pc != 0x19DD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD18u; }
        if (ctx->pc != 0x19DD18u) { return; }
    }
    ctx->pc = 0x19DD18u;
label_19dd18:
    // 0x19dd18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19dd1c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DD1Cu;
    {
        const bool branch_taken_0x19dd1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19DD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD1Cu;
            // 0x19dd20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd1c) {
            ctx->pc = 0x19DD30u;
            goto label_19dd30;
        }
    }
    ctx->pc = 0x19DD24u;
    // 0x19dd24: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19dd28: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x19dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_19dd2c:
    // 0x19dd2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19dd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19dd30:
    // 0x19dd30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19dd30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19dd34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19dd34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dd38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19dd38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19dd3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19dd3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dd40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19dd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19dd44: 0x3e00008  jr          $ra
    ctx->pc = 0x19DD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD44u;
            // 0x19dd48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DD4Cu;
    // 0x19dd4c: 0x0  nop
    ctx->pc = 0x19dd4cu;
    // NOP
    // 0x19dd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19dd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19dd54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19dd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dd5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19dd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd60: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DD60u;
    {
        const bool branch_taken_0x19dd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD60u;
            // 0x19dd64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd60) {
            ctx->pc = 0x19DD6Cu;
            goto label_19dd6c;
        }
    }
    ctx->pc = 0x19DD68u;
    // 0x19dd68: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_19dd6c:
    // 0x19dd6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dd70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19dd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd74: 0x806ab74  j           func_1AADD0
    ctx->pc = 0x19DD74u;
    ctx->pc = 0x19DD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD74u;
            // 0x19dd78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AADD0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19DD7Cu;
    // 0x19dd7c: 0x0  nop
    ctx->pc = 0x19dd7cu;
    // NOP
    // 0x19dd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19dd84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19dd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dd8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19dd8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd90: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DD90u;
    {
        const bool branch_taken_0x19dd90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD90u;
            // 0x19dd94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd90) {
            ctx->pc = 0x19DD9Cu;
            goto label_19dd9c;
        }
    }
    ctx->pc = 0x19DD98u;
    // 0x19dd98: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x19dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_19dd9c:
    // 0x19dd9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dda0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19dda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dda4: 0x806ab74  j           func_1AADD0
    ctx->pc = 0x19DDA4u;
    ctx->pc = 0x19DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDA4u;
            // 0x19dda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AADD0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19DDACu;
    // 0x19ddac: 0x0  nop
    ctx->pc = 0x19ddacu;
    // NOP
    // 0x19ddb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ddb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ddb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ddb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ddc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ddc4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19DDC4u;
    SET_GPR_U32(ctx, 31, 0x19DDCCu);
    ctx->pc = 0x19DDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDC4u;
            // 0x19ddc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDCCu; }
        if (ctx->pc != 0x19DDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DDCCu; }
        if (ctx->pc != 0x19DDCCu) { return; }
    }
    ctx->pc = 0x19DDCCu;
label_19ddcc:
    // 0x19ddcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ddd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ddd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddd4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19DDD4u;
    {
        const bool branch_taken_0x19ddd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19DDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDD4u;
            // 0x19ddd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddd4) {
            ctx->pc = 0x19DDF8u;
            goto label_19ddf8;
        }
    }
    ctx->pc = 0x19DDDCu;
    // 0x19dddc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19dde0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19dde0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dde4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19dde4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19dde8: 0x24849bb8  addiu       $a0, $a0, -0x6448
    ctx->pc = 0x19dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941624));
    // 0x19ddec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ddecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ddf0: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19DDF0u;
    ctx->pc = 0x19DDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDF0u;
            // 0x19ddf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19DDF8u;
label_19ddf8:
    // 0x19ddf8: 0xc067264  jal         func_19C990
    ctx->pc = 0x19DDF8u;
    SET_GPR_U32(ctx, 31, 0x19DE00u);
    ctx->pc = 0x19C990u;
    if (runtime->hasFunction(0x19C990u)) {
        auto targetFn = runtime->lookupFunction(0x19C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE00u; }
        if (ctx->pc != 0x19DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C990_0x19c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE00u; }
        if (ctx->pc != 0x19DE00u) { return; }
    }
    ctx->pc = 0x19DE00u;
label_19de00:
    // 0x19de00: 0x260404f8  addiu       $a0, $s0, 0x4F8
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
    // 0x19de04: 0xc0684e8  jal         func_1A13A0
    ctx->pc = 0x19DE04u;
    SET_GPR_U32(ctx, 31, 0x19DE0Cu);
    ctx->pc = 0x19DE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE04u;
            // 0x19de08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A13A0u;
    if (runtime->hasFunction(0x1A13A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A13A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE0Cu; }
        if (ctx->pc != 0x19DE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A13A0_0x1a13a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE0Cu; }
        if (ctx->pc != 0x19DE0Cu) { return; }
    }
    ctx->pc = 0x19DE0Cu;
label_19de0c:
    // 0x19de0c: 0x2604051c  addiu       $a0, $s0, 0x51C
    ctx->pc = 0x19de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
    // 0x19de10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19de10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19de14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19de18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19de18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19de1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19de1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19de20: 0x80684e8  j           func_1A13A0
    ctx->pc = 0x19DE20u;
    ctx->pc = 0x19DE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE20u;
            // 0x19de24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A13A0u;
    if (runtime->hasFunction(0x1A13A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A13A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A13A0_0x1a13a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19DE28u;
    // 0x19de28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19de2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19de30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19de34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19de38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19de3c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19DE3Cu;
    SET_GPR_U32(ctx, 31, 0x19DE44u);
    ctx->pc = 0x19DE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE3Cu;
            // 0x19de40: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE44u; }
        if (ctx->pc != 0x19DE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE44u; }
        if (ctx->pc != 0x19DE44u) { return; }
    }
    ctx->pc = 0x19DE44u;
label_19de44:
    // 0x19de44: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19de44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19de48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19de48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19de4c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DE4Cu;
    {
        const bool branch_taken_0x19de4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19DE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE4Cu;
            // 0x19de50: 0x24849be8  addiu       $a0, $a0, -0x6418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de4c) {
            ctx->pc = 0x19DE68u;
            goto label_19de68;
        }
    }
    ctx->pc = 0x19DE54u;
    // 0x19de54: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19DE54u;
    SET_GPR_U32(ctx, 31, 0x19DE5Cu);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE5Cu; }
        if (ctx->pc != 0x19DE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE5Cu; }
        if (ctx->pc != 0x19DE5Cu) { return; }
    }
    ctx->pc = 0x19DE5Cu;
label_19de5c:
    // 0x19de5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19DE5Cu;
    {
        const bool branch_taken_0x19de5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE5Cu;
            // 0x19de60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de5c) {
            ctx->pc = 0x19DEB0u;
            goto label_19deb0;
        }
    }
    ctx->pc = 0x19DE64u;
    // 0x19de64: 0x0  nop
    ctx->pc = 0x19de64u;
    // NOP
label_19de68:
    // 0x19de68: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x19de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x19de6c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19DE6Cu;
    {
        const bool branch_taken_0x19de6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE6Cu;
            // 0x19de70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de6c) {
            ctx->pc = 0x19DEB0u;
            goto label_19deb0;
        }
    }
    ctx->pc = 0x19DE74u;
    // 0x19de74: 0xc06726a  jal         func_19C9A8
    ctx->pc = 0x19DE74u;
    SET_GPR_U32(ctx, 31, 0x19DE7Cu);
    ctx->pc = 0x19DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE74u;
            // 0x19de78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C9A8u;
    if (runtime->hasFunction(0x19C9A8u)) {
        auto targetFn = runtime->lookupFunction(0x19C9A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE7Cu; }
        if (ctx->pc != 0x19DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C9A8_0x19c9a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE7Cu; }
        if (ctx->pc != 0x19DE7Cu) { return; }
    }
    ctx->pc = 0x19DE7Cu;
label_19de7c:
    // 0x19de7c: 0x264404f8  addiu       $a0, $s2, 0x4F8
    ctx->pc = 0x19de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1272));
    // 0x19de80: 0xc068500  jal         func_1A1400
    ctx->pc = 0x19DE80u;
    SET_GPR_U32(ctx, 31, 0x19DE88u);
    ctx->pc = 0x19DE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE80u;
            // 0x19de84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1400u;
    if (runtime->hasFunction(0x1A1400u)) {
        auto targetFn = runtime->lookupFunction(0x1A1400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE88u; }
        if (ctx->pc != 0x19DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1400_0x1a1400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE88u; }
        if (ctx->pc != 0x19DE88u) { return; }
    }
    ctx->pc = 0x19DE88u;
label_19de88:
    // 0x19de88: 0x2644051c  addiu       $a0, $s2, 0x51C
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1308));
    // 0x19de8c: 0xc068500  jal         func_1A1400
    ctx->pc = 0x19DE8Cu;
    SET_GPR_U32(ctx, 31, 0x19DE94u);
    ctx->pc = 0x19DE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE8Cu;
            // 0x19de90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1400u;
    if (runtime->hasFunction(0x1A1400u)) {
        auto targetFn = runtime->lookupFunction(0x1A1400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE94u; }
        if (ctx->pc != 0x19DE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1400_0x1a1400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE94u; }
        if (ctx->pc != 0x19DE94u) { return; }
    }
    ctx->pc = 0x19DE94u;
label_19de94:
    // 0x19de94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19de94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de98: 0x12300004  beq         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DE98u;
    {
        const bool branch_taken_0x19de98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x19DE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DE98u;
            // 0x19de9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de98) {
            ctx->pc = 0x19DEACu;
            goto label_19deac;
        }
    }
    ctx->pc = 0x19DEA0u;
    // 0x19dea0: 0x70800a  movz        $s0, $v1, $s0
    ctx->pc = 0x19dea0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x19dea4: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DEA4u;
    {
        const bool branch_taken_0x19dea4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x19DEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEA4u;
            // 0x19dea8: 0x202100a  movz        $v0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dea4) {
            ctx->pc = 0x19DEB0u;
            goto label_19deb0;
        }
    }
    ctx->pc = 0x19DEACu;
label_19deac:
    // 0x19deac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19deacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19deb0:
    // 0x19deb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19deb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19deb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19deb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19deb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19deb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19debc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19debcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19dec0: 0x3e00008  jr          $ra
    ctx->pc = 0x19DEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEC0u;
            // 0x19dec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DEC8u;
    // 0x19dec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19decc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ded0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ded0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ded4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ded8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19ded8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dedc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19dedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19dee0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19dee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19dee4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19DEE4u;
    SET_GPR_U32(ctx, 31, 0x19DEECu);
    ctx->pc = 0x19DEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEE4u;
            // 0x19dee8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEECu; }
        if (ctx->pc != 0x19DEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DEECu; }
        if (ctx->pc != 0x19DEECu) { return; }
    }
    ctx->pc = 0x19DEECu;
label_19deec:
    // 0x19deec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19def0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19def0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19def4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19def4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19def8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DEF8u;
    {
        const bool branch_taken_0x19def8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19DEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DEF8u;
            // 0x19defc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19def8) {
            ctx->pc = 0x19DF20u;
            goto label_19df20;
        }
    }
    ctx->pc = 0x19DF00u;
    // 0x19df00: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19df00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19df04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19df04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19df08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19df0c: 0x24849c18  addiu       $a0, $a0, -0x63E8
    ctx->pc = 0x19df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941720));
    // 0x19df10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19df10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19df14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19df14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19df18: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19DF18u;
    ctx->pc = 0x19DF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF18u;
            // 0x19df1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19DF20u;
label_19df20:
    // 0x19df20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19df20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19df24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19df28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19df28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19df2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19df2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19df30: 0x8067270  j           func_19C9C0
    ctx->pc = 0x19DF30u;
    ctx->pc = 0x19DF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF30u;
            // 0x19df34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C9C0u;
    {
        auto targetFn = runtime->lookupFunction(0x19C9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19DF38u;
    // 0x19df38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19df3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19df3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19df40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19df40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19df48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19df4c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19DF4Cu;
    SET_GPR_U32(ctx, 31, 0x19DF54u);
    ctx->pc = 0x19DF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF4Cu;
            // 0x19df50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF54u; }
        if (ctx->pc != 0x19DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF54u; }
        if (ctx->pc != 0x19DF54u) { return; }
    }
    ctx->pc = 0x19DF54u;
label_19df54:
    // 0x19df54: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19df54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19df58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19df58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19df5c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DF5Cu;
    {
        const bool branch_taken_0x19df5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19DF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF5Cu;
            // 0x19df60: 0x24849c48  addiu       $a0, $a0, -0x63B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df5c) {
            ctx->pc = 0x19DF78u;
            goto label_19df78;
        }
    }
    ctx->pc = 0x19DF64u;
    // 0x19df64: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19DF64u;
    SET_GPR_U32(ctx, 31, 0x19DF6Cu);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF6Cu; }
        if (ctx->pc != 0x19DF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF6Cu; }
        if (ctx->pc != 0x19DF6Cu) { return; }
    }
    ctx->pc = 0x19DF6Cu;
label_19df6c:
    // 0x19df6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19DF6Cu;
    {
        const bool branch_taken_0x19df6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF6Cu;
            // 0x19df70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df6c) {
            ctx->pc = 0x19DFA0u;
            goto label_19dfa0;
        }
    }
    ctx->pc = 0x19DF74u;
    // 0x19df74: 0x0  nop
    ctx->pc = 0x19df74u;
    // NOP
label_19df78:
    // 0x19df78: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x19df78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19df7c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19DF7Cu;
    {
        const bool branch_taken_0x19df7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF7Cu;
            // 0x19df80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df7c) {
            ctx->pc = 0x19DFA0u;
            goto label_19dfa0;
        }
    }
    ctx->pc = 0x19DF84u;
    // 0x19df84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19df84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19df88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19df8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19df90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19df94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19df94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19df98: 0x8067276  j           func_19C9D8
    ctx->pc = 0x19DF98u;
    ctx->pc = 0x19DF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF98u;
            // 0x19df9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C9D8u;
    {
        auto targetFn = runtime->lookupFunction(0x19C9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19DFA0u;
label_19dfa0:
    // 0x19dfa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19dfa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dfa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19dfa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19dfa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19dfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dfac: 0x3e00008  jr          $ra
    ctx->pc = 0x19DFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFACu;
            // 0x19dfb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DFB4u;
    // 0x19dfb4: 0x0  nop
    ctx->pc = 0x19dfb4u;
    // NOP
    // 0x19dfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19dfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19dfbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19dfbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfc0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19dfc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19dfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19dfc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dfcc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DFCCu;
    {
        const bool branch_taken_0x19dfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFCCu;
            // 0x19dfd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfcc) {
            ctx->pc = 0x19DFD8u;
            goto label_19dfd8;
        }
    }
    ctx->pc = 0x19DFD4u;
    // 0x19dfd4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x19dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_19dfd8:
    // 0x19dfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dfdc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DFDCu;
    {
        const bool branch_taken_0x19dfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19DFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFDCu;
            // 0x19dfe0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfdc) {
            ctx->pc = 0x19DFF0u;
            goto label_19dff0;
        }
    }
    ctx->pc = 0x19DFE4u;
    // 0x19dfe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19dfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dfe8: 0x806ab74  j           func_1AADD0
    ctx->pc = 0x19DFE8u;
    ctx->pc = 0x19DFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFE8u;
            // 0x19dfec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AADD0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19DFF0u;
label_19dff0:
    // 0x19dff0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19dff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19dff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dff8: 0x806ab74  j           func_1AADD0
    ctx->pc = 0x19DFF8u;
    ctx->pc = 0x19DFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFF8u;
            // 0x19dffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AADD0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E000u;
    // 0x19e000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e00c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E00Cu;
    {
        const bool branch_taken_0x19e00c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E00Cu;
            // 0x19e010: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e00c) {
            ctx->pc = 0x19E028u;
            goto label_19e028;
        }
    }
    ctx->pc = 0x19E014u;
    // 0x19e014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e018: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x19e018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x19e01c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e020: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E020u;
    ctx->pc = 0x19E024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E020u;
            // 0x19e024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E028u;
label_19e028:
    // 0x19e028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e02c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x19e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x19e030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19e030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e034: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E034u;
    ctx->pc = 0x19E038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E034u;
            // 0x19e038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E03Cu;
    // 0x19e03c: 0x0  nop
    ctx->pc = 0x19e03cu;
    // NOP
    // 0x19e040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e044: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E044u;
    {
        const bool branch_taken_0x19e044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E044u;
            // 0x19e048: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e044) {
            ctx->pc = 0x19E060u;
            goto label_19e060;
        }
    }
    ctx->pc = 0x19E04Cu;
    // 0x19e04c: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e054: 0x806d820  j           func_1B6080
    ctx->pc = 0x19E054u;
    ctx->pc = 0x19E058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E054u;
            // 0x19e058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6080u;
    {
        auto targetFn = runtime->lookupFunction(0x1B6080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E05Cu;
    // 0x19e05c: 0x0  nop
    ctx->pc = 0x19e05cu;
    // NOP
label_19e060:
    // 0x19e060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e064: 0x3e00008  jr          $ra
    ctx->pc = 0x19E064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E064u;
            // 0x19e068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E06Cu;
    // 0x19e06c: 0x0  nop
    ctx->pc = 0x19e06cu;
    // NOP
    // 0x19e070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e074: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E074u;
    {
        const bool branch_taken_0x19e074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E074u;
            // 0x19e078: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e074) {
            ctx->pc = 0x19E090u;
            goto label_19e090;
        }
    }
    ctx->pc = 0x19E07Cu;
    // 0x19e07c: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e084: 0x806d824  j           func_1B6090
    ctx->pc = 0x19E084u;
    ctx->pc = 0x19E088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E084u;
            // 0x19e088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6090u;
    {
        auto targetFn = runtime->lookupFunction(0x1B6090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E08Cu;
    // 0x19e08c: 0x0  nop
    ctx->pc = 0x19e08cu;
    // NOP
label_19e090:
    // 0x19e090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e094: 0x3e00008  jr          $ra
    ctx->pc = 0x19E094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E094u;
            // 0x19e098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E09Cu;
    // 0x19e09c: 0x0  nop
    ctx->pc = 0x19e09cu;
    // NOP
}
