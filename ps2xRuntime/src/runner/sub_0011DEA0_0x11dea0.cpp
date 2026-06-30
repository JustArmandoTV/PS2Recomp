#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DEA0
// Address: 0x11dea0 - 0x11df58
void sub_0011DEA0_0x11dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DEA0_0x11dea0");
#endif

    switch (ctx->pc) {
        case 0x11ded0u: goto label_11ded0;
        case 0x11ded8u: goto label_11ded8;
        case 0x11dedcu: goto label_11dedc;
        case 0x11deecu: goto label_11deec;
        case 0x11df0cu: goto label_11df0c;
        case 0x11df14u: goto label_11df14;
        case 0x11df3cu: goto label_11df3c;
        case 0x11df50u: goto label_11df50;
        default: break;
    }

    ctx->pc = 0x11dea0u;

    // 0x11dea0: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11dea0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11dea4: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11dea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11dea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11dea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11deac: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11deacu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11deb0: 0x3c0e3f49  lui         $t6, 0x3F49
    ctx->pc = 0x11deb0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16201 << 16));
    // 0x11deb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11deb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11deb8: 0x35ce0fd8  ori         $t6, $t6, 0xFD8
    ctx->pc = 0x11deb8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4056);
    // 0x11debc: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11debcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11dec0: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11dec0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11dec4: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DEC4u;
    {
        const bool branch_taken_0x11dec4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEC4u;
            // 0x11dec8: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dec4) {
            ctx->pc = 0x11DEE4u;
            goto label_11dee4;
        }
    }
    ctx->pc = 0x11DECCu;
    // 0x11decc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ded0:
    // 0x11ded0: 0xc0472b2  jal         func_11CAC8
    ctx->pc = 0x11DED0u;
    SET_GPR_U32(ctx, 31, 0x11DED8u);
    ctx->pc = 0x11CAC8u;
    if (runtime->hasFunction(0x11CAC8u)) {
        auto targetFn = runtime->lookupFunction(0x11CAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DED8u; }
        if (ctx->pc != 0x11DED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CAC8_0x11cac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DED8u; }
        if (ctx->pc != 0x11DED8u) { return; }
    }
    ctx->pc = 0x11DED8u;
label_11ded8:
    // 0x11ded8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ded8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11dedc:
    // 0x11dedc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEDCu;
            // 0x11dee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DEE4u;
label_11dee4:
    // 0x11dee4: 0xc046ba0  jal         func_11AE80
    ctx->pc = 0x11DEE4u;
    SET_GPR_U32(ctx, 31, 0x11DEECu);
    ctx->pc = 0x11DEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEE4u;
            // 0x11dee8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AE80u;
    if (runtime->hasFunction(0x11AE80u)) {
        auto targetFn = runtime->lookupFunction(0x11AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEECu; }
        if (ctx->pc != 0x11DEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AE80_0x11ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DEECu; }
        if (ctx->pc != 0x11DEECu) { return; }
    }
    ctx->pc = 0x11DEECu;
label_11deec:
    // 0x11deec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11def0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11def0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11def4: 0x104f0013  beq         $v0, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x11DEF4u;
    {
        const bool branch_taken_0x11def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11DEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEF4u;
            // 0x11def8: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11def4) {
            ctx->pc = 0x11DF44u;
            goto label_11df44;
        }
    }
    ctx->pc = 0x11DEFCu;
    // 0x11defc: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11DEFCu;
    {
        const bool branch_taken_0x11defc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEFCu;
            // 0x11df00: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11defc) {
            ctx->pc = 0x11DF28u;
            goto label_11df28;
        }
    }
    ctx->pc = 0x11DF04u;
    // 0x11df04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DF04u;
    {
        const bool branch_taken_0x11df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF04u;
            // 0x11df08: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df04) {
            ctx->pc = 0x11DF1Cu;
            goto label_11df1c;
        }
    }
    ctx->pc = 0x11DF0Cu;
label_11df0c:
    // 0x11df0c: 0xc047056  jal         func_11C158
    ctx->pc = 0x11DF0Cu;
    SET_GPR_U32(ctx, 31, 0x11DF14u);
    ctx->pc = 0x11DF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF0Cu;
            // 0x11df10: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C158u;
    if (runtime->hasFunction(0x11C158u)) {
        auto targetFn = runtime->lookupFunction(0x11C158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF14u; }
        if (ctx->pc != 0x11DF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C158_0x11c158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF14u; }
        if (ctx->pc != 0x11DF14u) { return; }
    }
    ctx->pc = 0x11DF14u;
label_11df14:
    // 0x11df14: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x11DF14u;
    {
        const bool branch_taken_0x11df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF14u;
            // 0x11df18: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df14) {
            ctx->pc = 0x11DED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ded8;
        }
    }
    ctx->pc = 0x11DF1Cu;
label_11df1c:
    // 0x11df1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11df20: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x11DF20u;
    {
        const bool branch_taken_0x11df20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF20u;
            // 0x11df24: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df20) {
            ctx->pc = 0x11DED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ded0;
        }
    }
    ctx->pc = 0x11DF28u;
label_11df28:
    // 0x11df28: 0x144ffff8  bne         $v0, $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11DF28u;
    {
        const bool branch_taken_0x11df28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11DF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF28u;
            // 0x11df2c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df28) {
            ctx->pc = 0x11DF0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11df0c;
        }
    }
    ctx->pc = 0x11DF30u;
    // 0x11df30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11df34: 0xc0472b2  jal         func_11CAC8
    ctx->pc = 0x11DF34u;
    SET_GPR_U32(ctx, 31, 0x11DF3Cu);
    ctx->pc = 0x11DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF34u;
            // 0x11df38: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CAC8u;
    if (runtime->hasFunction(0x11CAC8u)) {
        auto targetFn = runtime->lookupFunction(0x11CAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF3Cu; }
        if (ctx->pc != 0x11DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CAC8_0x11cac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF3Cu; }
        if (ctx->pc != 0x11DF3Cu) { return; }
    }
    ctx->pc = 0x11DF3Cu;
label_11df3c:
    // 0x11df3c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11DF3Cu;
    {
        const bool branch_taken_0x11df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF3Cu;
            // 0x11df40: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df3c) {
            ctx->pc = 0x11DED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ded8;
        }
    }
    ctx->pc = 0x11DF44u;
label_11df44:
    // 0x11df44: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11df48: 0xc047056  jal         func_11C158
    ctx->pc = 0x11DF48u;
    SET_GPR_U32(ctx, 31, 0x11DF50u);
    ctx->pc = 0x11DF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF48u;
            // 0x11df4c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C158u;
    if (runtime->hasFunction(0x11C158u)) {
        auto targetFn = runtime->lookupFunction(0x11C158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF50u; }
        if (ctx->pc != 0x11DF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C158_0x11c158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF50u; }
        if (ctx->pc != 0x11DF50u) { return; }
    }
    ctx->pc = 0x11DF50u;
label_11df50:
    // 0x11df50: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x11DF50u;
    {
        const bool branch_taken_0x11df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF50u;
            // 0x11df54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df50) {
            ctx->pc = 0x11DEDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11dedc;
        }
    }
    ctx->pc = 0x11DF58u;
}
