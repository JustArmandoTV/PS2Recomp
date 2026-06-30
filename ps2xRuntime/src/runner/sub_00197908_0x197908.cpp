#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197908
// Address: 0x197908 - 0x197968
void sub_00197908_0x197908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197908_0x197908");
#endif

    switch (ctx->pc) {
        case 0x19792cu: goto label_19792c;
        case 0x197940u: goto label_197940;
        case 0x19794cu: goto label_19794c;
        default: break;
    }

    ctx->pc = 0x197908u;

    // 0x197908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19790c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x197910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197918: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x197918u;
    {
        const bool branch_taken_0x197918 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19791Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197918u;
            // 0x19791c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197918) {
            ctx->pc = 0x197938u;
            goto label_197938;
        }
    }
    ctx->pc = 0x197920u;
    // 0x197920: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x197924: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x197924u;
    SET_GPR_U32(ctx, 31, 0x19792Cu);
    ctx->pc = 0x197928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197924u;
            // 0x197928: 0x24848568  addiu       $a0, $a0, -0x7A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19792Cu; }
        if (ctx->pc != 0x19792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19792Cu; }
        if (ctx->pc != 0x19792Cu) { return; }
    }
    ctx->pc = 0x19792Cu;
label_19792c:
    // 0x19792c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19792Cu;
    {
        const bool branch_taken_0x19792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19792Cu;
            // 0x197930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19792c) {
            ctx->pc = 0x197950u;
            goto label_197950;
        }
    }
    ctx->pc = 0x197934u;
    // 0x197934: 0x0  nop
    ctx->pc = 0x197934u;
    // NOP
label_197938:
    // 0x197938: 0xc065dfe  jal         func_1977F8
    ctx->pc = 0x197938u;
    SET_GPR_U32(ctx, 31, 0x197940u);
    ctx->pc = 0x1977F8u;
    if (runtime->hasFunction(0x1977F8u)) {
        auto targetFn = runtime->lookupFunction(0x1977F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197940u; }
        if (ctx->pc != 0x197940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001977F8_0x1977f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197940u; }
        if (ctx->pc != 0x197940u) { return; }
    }
    ctx->pc = 0x197940u;
label_197940:
    // 0x197940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197944: 0xc065e2c  jal         func_1978B0
    ctx->pc = 0x197944u;
    SET_GPR_U32(ctx, 31, 0x19794Cu);
    ctx->pc = 0x197948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197944u;
            // 0x197948: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1978B0u;
    if (runtime->hasFunction(0x1978B0u)) {
        auto targetFn = runtime->lookupFunction(0x1978B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19794Cu; }
        if (ctx->pc != 0x19794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001978B0_0x1978b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19794Cu; }
        if (ctx->pc != 0x19794Cu) { return; }
    }
    ctx->pc = 0x19794Cu;
label_19794c:
    // 0x19794c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_197950:
    // 0x197950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197958: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19795c: 0x3e00008  jr          $ra
    ctx->pc = 0x19795Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19795Cu;
            // 0x197960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197964u;
    // 0x197964: 0x0  nop
    ctx->pc = 0x197964u;
    // NOP
}
