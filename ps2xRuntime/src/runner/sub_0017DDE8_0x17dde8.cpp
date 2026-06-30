#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DDE8
// Address: 0x17dde8 - 0x17dec8
void sub_0017DDE8_0x17dde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DDE8_0x17dde8");
#endif

    switch (ctx->pc) {
        case 0x17de10u: goto label_17de10;
        case 0x17de34u: goto label_17de34;
        case 0x17de48u: goto label_17de48;
        case 0x17de6cu: goto label_17de6c;
        case 0x17deacu: goto label_17deac;
        default: break;
    }

    ctx->pc = 0x17dde8u;

    // 0x17dde8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17dde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ddec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17ddecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17ddf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ddf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddf4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17ddf8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ddfc: 0x248460f0  addiu       $a0, $a0, 0x60F0
    ctx->pc = 0x17ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24816));
    // 0x17de00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17de00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17de08: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x17DE08u;
    SET_GPR_U32(ctx, 31, 0x17DE10u);
    ctx->pc = 0x17DE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE08u;
            // 0x17de0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE10u; }
        if (ctx->pc != 0x17DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE10u; }
        if (ctx->pc != 0x17DE10u) { return; }
    }
    ctx->pc = 0x17DE10u;
label_17de10:
    // 0x17de10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17de10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de14: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17DE14u;
    {
        const bool branch_taken_0x17de14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE14u;
            // 0x17de18: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de14) {
            ctx->pc = 0x17DE40u;
            goto label_17de40;
        }
    }
    ctx->pc = 0x17DE1Cu;
    // 0x17de1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17de20: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17de20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17de24: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17de24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17de28: 0x248460f8  addiu       $a0, $a0, 0x60F8
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24824));
    // 0x17de2c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17DE2Cu;
    SET_GPR_U32(ctx, 31, 0x17DE34u);
    ctx->pc = 0x17DE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE2Cu;
            // 0x17de30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE34u; }
        if (ctx->pc != 0x17DE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE34u; }
        if (ctx->pc != 0x17DE34u) { return; }
    }
    ctx->pc = 0x17DE34u;
label_17de34:
    // 0x17de34: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17DE34u;
    {
        const bool branch_taken_0x17de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE34u;
            // 0x17de38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de34) {
            ctx->pc = 0x17DEB0u;
            goto label_17deb0;
        }
    }
    ctx->pc = 0x17DE3Cu;
    // 0x17de3c: 0x0  nop
    ctx->pc = 0x17de3cu;
    // NOP
label_17de40:
    // 0x17de40: 0xc05f73a  jal         func_17DCE8
    ctx->pc = 0x17DE40u;
    SET_GPR_U32(ctx, 31, 0x17DE48u);
    ctx->pc = 0x17DCE8u;
    if (runtime->hasFunction(0x17DCE8u)) {
        auto targetFn = runtime->lookupFunction(0x17DCE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE48u; }
        if (ctx->pc != 0x17DE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DCE8_0x17dce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE48u; }
        if (ctx->pc != 0x17DE48u) { return; }
    }
    ctx->pc = 0x17DE48u;
label_17de48:
    // 0x17de48: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17de48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17de4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17de4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17de50: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x17de54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17de58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de5c: 0x1447000a  bne         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x17DE5Cu;
    {
        const bool branch_taken_0x17de5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x17DE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE5Cu;
            // 0x17de60: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de5c) {
            ctx->pc = 0x17DE88u;
            goto label_17de88;
        }
    }
    ctx->pc = 0x17DE64u;
    // 0x17de64: 0xc05f74a  jal         func_17DD28
    ctx->pc = 0x17DE64u;
    SET_GPR_U32(ctx, 31, 0x17DE6Cu);
    ctx->pc = 0x17DD28u;
    if (runtime->hasFunction(0x17DD28u)) {
        auto targetFn = runtime->lookupFunction(0x17DD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE6Cu; }
        if (ctx->pc != 0x17DE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DD28_0x17dd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE6Cu; }
        if (ctx->pc != 0x17DE6Cu) { return; }
    }
    ctx->pc = 0x17DE6Cu;
label_17de6c:
    // 0x17de6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17de6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de70: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x17de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17de74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17de74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de78: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x17de78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x17de7c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x17de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x17de80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17DE80u;
    {
        const bool branch_taken_0x17de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE80u;
            // 0x17de84: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de80) {
            ctx->pc = 0x17DEB0u;
            goto label_17deb0;
        }
    }
    ctx->pc = 0x17DE88u;
label_17de88:
    // 0x17de88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17de88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17de8c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17de90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17de94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DE94u;
    {
        const bool branch_taken_0x17de94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE94u;
            // 0x17de98: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de94) {
            ctx->pc = 0x17DEACu;
            goto label_17deac;
        }
    }
    ctx->pc = 0x17DE9Cu;
    // 0x17de9c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x17de9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17dea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dea4: 0xc05f6fe  jal         func_17DBF8
    ctx->pc = 0x17DEA4u;
    SET_GPR_U32(ctx, 31, 0x17DEACu);
    ctx->pc = 0x17DEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DEA4u;
            // 0x17dea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DBF8u;
    if (runtime->hasFunction(0x17DBF8u)) {
        auto targetFn = runtime->lookupFunction(0x17DBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEACu; }
        if (ctx->pc != 0x17DEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DBF8_0x17dbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEACu; }
        if (ctx->pc != 0x17DEACu) { return; }
    }
    ctx->pc = 0x17DEACu;
label_17deac:
    // 0x17deac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17deacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17deb0:
    // 0x17deb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17deb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17deb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17deb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17deb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17deb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17debc: 0x3e00008  jr          $ra
    ctx->pc = 0x17DEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DEBCu;
            // 0x17dec0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DEC4u;
    // 0x17dec4: 0x0  nop
    ctx->pc = 0x17dec4u;
    // NOP
}
