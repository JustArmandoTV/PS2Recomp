#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188250
// Address: 0x188250 - 0x1882b8
void sub_00188250_0x188250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188250_0x188250");
#endif

    switch (ctx->pc) {
        case 0x18827cu: goto label_18827c;
        case 0x188290u: goto label_188290;
        case 0x188298u: goto label_188298;
        default: break;
    }

    ctx->pc = 0x188250u;

    // 0x188250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18825c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x188260: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x188260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188264: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x188264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x188268: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x188268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18826c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18826cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x188270: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x188270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x188274: 0xc061f74  jal         func_187DD0
    ctx->pc = 0x188274u;
    SET_GPR_U32(ctx, 31, 0x18827Cu);
    ctx->pc = 0x188278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188274u;
            // 0x188278: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18827Cu; }
        if (ctx->pc != 0x18827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18827Cu; }
        if (ctx->pc != 0x18827Cu) { return; }
    }
    ctx->pc = 0x18827Cu;
label_18827c:
    // 0x18827c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18827cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188284: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x188284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188288: 0xc0620ae  jal         func_1882B8
    ctx->pc = 0x188288u;
    SET_GPR_U32(ctx, 31, 0x188290u);
    ctx->pc = 0x18828Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188288u;
            // 0x18828c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1882B8u;
    if (runtime->hasFunction(0x1882B8u)) {
        auto targetFn = runtime->lookupFunction(0x1882B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188290u; }
        if (ctx->pc != 0x188290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001882B8_0x1882b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188290u; }
        if (ctx->pc != 0x188290u) { return; }
    }
    ctx->pc = 0x188290u;
label_188290:
    // 0x188290: 0xc061f7a  jal         func_187DE8
    ctx->pc = 0x188290u;
    SET_GPR_U32(ctx, 31, 0x188298u);
    ctx->pc = 0x188294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188290u;
            // 0x188294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188298u; }
        if (ctx->pc != 0x188298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DE8_0x187de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188298u; }
        if (ctx->pc != 0x188298u) { return; }
    }
    ctx->pc = 0x188298u;
label_188298:
    // 0x188298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x188298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18829c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18829cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1882a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1882a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1882a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1882a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1882a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1882ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1882acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1882b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1882B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1882B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882B0u;
            // 0x1882b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1882B8u;
}
