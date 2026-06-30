#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015DEA8
// Address: 0x15dea8 - 0x15df78
void sub_0015DEA8_0x15dea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DEA8_0x15dea8");
#endif

    switch (ctx->pc) {
        case 0x15deb8u: goto label_15deb8;
        case 0x15ded0u: goto label_15ded0;
        case 0x15def8u: goto label_15def8;
        case 0x15df20u: goto label_15df20;
        case 0x15df38u: goto label_15df38;
        case 0x15df60u: goto label_15df60;
        default: break;
    }

    ctx->pc = 0x15dea8u;

    // 0x15dea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15deac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15deacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15deb0: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x15DEB0u;
    SET_GPR_U32(ctx, 31, 0x15DEB8u);
    ctx->pc = 0x15DCB0u;
    if (runtime->hasFunction(0x15DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DEB8u; }
        if (ctx->pc != 0x15DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCB0_0x15dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DEB8u; }
        if (ctx->pc != 0x15DEB8u) { return; }
    }
    ctx->pc = 0x15DEB8u;
label_15deb8:
    // 0x15deb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DEB8u;
    {
        const bool branch_taken_0x15deb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEB8u;
            // 0x15debc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15deb8) {
            ctx->pc = 0x15DEC8u;
            goto label_15dec8;
        }
    }
    ctx->pc = 0x15DEC0u;
    // 0x15dec0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15DEC0u;
    {
        const bool branch_taken_0x15dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEC0u;
            // 0x15dec4: 0x90425966  lbu         $v0, 0x5966($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22886)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dec0) {
            ctx->pc = 0x15DF04u;
            goto label_15df04;
        }
    }
    ctx->pc = 0x15DEC8u;
label_15dec8:
    // 0x15dec8: 0xc043104  jal         func_10C410
    ctx->pc = 0x15DEC8u;
    SET_GPR_U32(ctx, 31, 0x15DED0u);
    ctx->pc = 0x15DECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEC8u;
            // 0x15decc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DED0u; }
        if (ctx->pc != 0x15DED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DED0u; }
        if (ctx->pc != 0x15DED0u) { return; }
    }
    ctx->pc = 0x15DED0u;
label_15ded0:
    // 0x15ded0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ded4: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x15ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x15ded8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x15ded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15dedc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DEDCu;
    {
        const bool branch_taken_0x15dedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEDCu;
            // 0x15dee0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dedc) {
            ctx->pc = 0x15DEECu;
            goto label_15deec;
        }
    }
    ctx->pc = 0x15DEE4u;
    // 0x15dee4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15DEE4u;
    {
        const bool branch_taken_0x15dee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEE4u;
            // 0x15dee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dee4) {
            ctx->pc = 0x15DF04u;
            goto label_15df04;
        }
    }
    ctx->pc = 0x15DEECu;
label_15deec:
    // 0x15deec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15deecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15def0: 0xc04319c  jal         func_10C670
    ctx->pc = 0x15DEF0u;
    SET_GPR_U32(ctx, 31, 0x15DEF8u);
    ctx->pc = 0x15DEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEF0u;
            // 0x15def4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C670u;
    if (runtime->hasFunction(0x10C670u)) {
        auto targetFn = runtime->lookupFunction(0x10C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DEF8u; }
        if (ctx->pc != 0x15DEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C670_0x10c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DEF8u; }
        if (ctx->pc != 0x15DEF8u) { return; }
    }
    ctx->pc = 0x15DEF8u;
label_15def8:
    // 0x15def8: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x15def8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15defc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x15defcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x15df00: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x15df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_15df04:
    // 0x15df04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15df04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15df08: 0x3e00008  jr          $ra
    ctx->pc = 0x15DF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF08u;
            // 0x15df0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DF10u;
    // 0x15df10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15df10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15df14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15df18: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x15DF18u;
    SET_GPR_U32(ctx, 31, 0x15DF20u);
    ctx->pc = 0x15DCB0u;
    if (runtime->hasFunction(0x15DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF20u; }
        if (ctx->pc != 0x15DF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCB0_0x15dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF20u; }
        if (ctx->pc != 0x15DF20u) { return; }
    }
    ctx->pc = 0x15DF20u;
label_15df20:
    // 0x15df20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DF20u;
    {
        const bool branch_taken_0x15df20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF20u;
            // 0x15df24: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df20) {
            ctx->pc = 0x15DF30u;
            goto label_15df30;
        }
    }
    ctx->pc = 0x15DF28u;
    // 0x15df28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15DF28u;
    {
        const bool branch_taken_0x15df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF28u;
            // 0x15df2c: 0x90425967  lbu         $v0, 0x5967($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22887)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df28) {
            ctx->pc = 0x15DF6Cu;
            goto label_15df6c;
        }
    }
    ctx->pc = 0x15DF30u;
label_15df30:
    // 0x15df30: 0xc043104  jal         func_10C410
    ctx->pc = 0x15DF30u;
    SET_GPR_U32(ctx, 31, 0x15DF38u);
    ctx->pc = 0x15DF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF30u;
            // 0x15df34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF38u; }
        if (ctx->pc != 0x15DF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF38u; }
        if (ctx->pc != 0x15DF38u) { return; }
    }
    ctx->pc = 0x15DF38u;
label_15df38:
    // 0x15df38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15df3c: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x15df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x15df40: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x15df40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15df44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DF44u;
    {
        const bool branch_taken_0x15df44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF44u;
            // 0x15df48: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df44) {
            ctx->pc = 0x15DF54u;
            goto label_15df54;
        }
    }
    ctx->pc = 0x15DF4Cu;
    // 0x15df4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15DF4Cu;
    {
        const bool branch_taken_0x15df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF4Cu;
            // 0x15df50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df4c) {
            ctx->pc = 0x15DF6Cu;
            goto label_15df6c;
        }
    }
    ctx->pc = 0x15DF54u;
label_15df54:
    // 0x15df54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15df54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df58: 0xc04319c  jal         func_10C670
    ctx->pc = 0x15DF58u;
    SET_GPR_U32(ctx, 31, 0x15DF60u);
    ctx->pc = 0x15DF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF58u;
            // 0x15df5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C670u;
    if (runtime->hasFunction(0x10C670u)) {
        auto targetFn = runtime->lookupFunction(0x10C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF60u; }
        if (ctx->pc != 0x15DF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C670_0x10c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF60u; }
        if (ctx->pc != 0x15DF60u) { return; }
    }
    ctx->pc = 0x15DF60u;
label_15df60:
    // 0x15df60: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x15df60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15df64: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x15df64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x15df68: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x15df68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_15df6c:
    // 0x15df6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15df6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15df70: 0x3e00008  jr          $ra
    ctx->pc = 0x15DF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF70u;
            // 0x15df74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DF78u;
}
