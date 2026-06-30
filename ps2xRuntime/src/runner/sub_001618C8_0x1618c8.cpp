#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001618C8
// Address: 0x1618c8 - 0x161948
void sub_001618C8_0x1618c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001618C8_0x1618c8");
#endif

    switch (ctx->pc) {
        case 0x161908u: goto label_161908;
        case 0x161918u: goto label_161918;
        case 0x161920u: goto label_161920;
        default: break;
    }

    ctx->pc = 0x1618c8u;

    // 0x1618c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1618c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1618cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1618ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1618d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1618d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1618d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1618d8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1618D8u;
    {
        const bool branch_taken_0x1618d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1618DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1618D8u;
            // 0x1618dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618d8) {
            ctx->pc = 0x161900u;
            goto label_161900;
        }
    }
    ctx->pc = 0x1618E0u;
    // 0x1618e0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1618e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1618e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1618e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1618e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1618e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1618ec: 0x24842758  addiu       $a0, $a0, 0x2758
    ctx->pc = 0x1618ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10072));
    // 0x1618f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1618f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1618f4: 0x805856c  j           func_1615B0
    ctx->pc = 0x1618F4u;
    ctx->pc = 0x1618F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1618F4u;
            // 0x1618f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1618FCu;
    // 0x1618fc: 0x0  nop
    ctx->pc = 0x1618fcu;
    // NOP
label_161900:
    // 0x161900: 0xc058560  jal         func_161580
    ctx->pc = 0x161900u;
    SET_GPR_U32(ctx, 31, 0x161908u);
    ctx->pc = 0x161904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161900u;
            // 0x161904: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161580u;
    if (runtime->hasFunction(0x161580u)) {
        auto targetFn = runtime->lookupFunction(0x161580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161908u; }
        if (ctx->pc != 0x161908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161580_0x161580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161908u; }
        if (ctx->pc != 0x161908u) { return; }
    }
    ctx->pc = 0x161908u;
label_161908:
    // 0x161908: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x161908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16190c: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16190Cu;
    {
        const bool branch_taken_0x16190c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16190c) {
            ctx->pc = 0x161910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16190Cu;
            // 0x161910: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161934u;
            goto label_161934;
        }
    }
    ctx->pc = 0x161914u;
    // 0x161914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161918:
    // 0x161918: 0xc058652  jal         func_161948
    ctx->pc = 0x161918u;
    SET_GPR_U32(ctx, 31, 0x161920u);
    ctx->pc = 0x16191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161918u;
            // 0x16191c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161948u;
    if (runtime->hasFunction(0x161948u)) {
        auto targetFn = runtime->lookupFunction(0x161948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161920u; }
        if (ctx->pc != 0x161920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161948_0x161948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161920u; }
        if (ctx->pc != 0x161920u) { return; }
    }
    ctx->pc = 0x161920u;
label_161920:
    // 0x161920: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x161920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x161924: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x161924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161928: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x161928u;
    {
        const bool branch_taken_0x161928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161928u;
            // 0x16192c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161928) {
            ctx->pc = 0x161918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161918;
        }
    }
    ctx->pc = 0x161930u;
    // 0x161930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161934:
    // 0x161934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16193c: 0x8058566  j           func_161598
    ctx->pc = 0x16193Cu;
    ctx->pc = 0x161940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16193Cu;
            // 0x161940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161598u;
    {
        auto targetFn = runtime->lookupFunction(0x161598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x161944u;
    // 0x161944: 0x0  nop
    ctx->pc = 0x161944u;
    // NOP
}
