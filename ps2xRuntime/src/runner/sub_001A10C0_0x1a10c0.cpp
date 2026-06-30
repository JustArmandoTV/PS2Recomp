#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A10C0
// Address: 0x1a10c0 - 0x1a1128
void sub_001A10C0_0x1a10c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A10C0_0x1a10c0");
#endif

    switch (ctx->pc) {
        case 0x1a10c0u: goto label_1a10c0;
        case 0x1a10c4u: goto label_1a10c4;
        case 0x1a10c8u: goto label_1a10c8;
        case 0x1a10ccu: goto label_1a10cc;
        case 0x1a10d0u: goto label_1a10d0;
        case 0x1a10d4u: goto label_1a10d4;
        case 0x1a10d8u: goto label_1a10d8;
        case 0x1a10dcu: goto label_1a10dc;
        case 0x1a10e0u: goto label_1a10e0;
        case 0x1a10e4u: goto label_1a10e4;
        case 0x1a10e8u: goto label_1a10e8;
        case 0x1a10ecu: goto label_1a10ec;
        case 0x1a10f0u: goto label_1a10f0;
        case 0x1a10f4u: goto label_1a10f4;
        case 0x1a10f8u: goto label_1a10f8;
        case 0x1a10fcu: goto label_1a10fc;
        case 0x1a1100u: goto label_1a1100;
        case 0x1a1104u: goto label_1a1104;
        case 0x1a1108u: goto label_1a1108;
        case 0x1a110cu: goto label_1a110c;
        case 0x1a1110u: goto label_1a1110;
        case 0x1a1114u: goto label_1a1114;
        case 0x1a1118u: goto label_1a1118;
        case 0x1a111cu: goto label_1a111c;
        case 0x1a1120u: goto label_1a1120;
        case 0x1a1124u: goto label_1a1124;
        default: break;
    }

    ctx->pc = 0x1a10c0u;

label_1a10c0:
    // 0x1a10c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a10c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a10c4:
    // 0x1a10c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a10c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a10c8:
    // 0x1a10c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a10c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a10cc:
    // 0x1a10cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a10ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a10d0:
    // 0x1a10d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a10d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a10d4:
    // 0x1a10d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a10d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a10d8:
    // 0x1a10d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a10dc:
    // 0x1a10dc: 0xc0685c8  jal         func_1A1720
label_1a10e0:
    if (ctx->pc == 0x1A10E0u) {
        ctx->pc = 0x1A10E0u;
            // 0x1a10e0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A10E4u;
        goto label_1a10e4;
    }
    ctx->pc = 0x1A10DCu;
    SET_GPR_U32(ctx, 31, 0x1A10E4u);
    ctx->pc = 0x1A10E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10DCu;
            // 0x1a10e0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1720u;
    if (runtime->hasFunction(0x1A1720u)) {
        auto targetFn = runtime->lookupFunction(0x1A1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10E4u; }
        if (ctx->pc != 0x1A10E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1720_0x1a1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10E4u; }
        if (ctx->pc != 0x1A10E4u) { return; }
    }
    ctx->pc = 0x1A10E4u;
label_1a10e4:
    // 0x1a10e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a10e8:
    if (ctx->pc == 0x1A10E8u) {
        ctx->pc = 0x1A10E8u;
            // 0x1a10e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A10ECu;
        goto label_1a10ec;
    }
    ctx->pc = 0x1A10E4u;
    {
        const bool branch_taken_0x1a10e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10E4u;
            // 0x1a10e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10e4) {
            ctx->pc = 0x1A1108u;
            goto label_1a1108;
        }
    }
    ctx->pc = 0x1A10ECu;
label_1a10ec:
    // 0x1a10ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a10f0:
    // 0x1a10f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a10f4:
    if (ctx->pc == 0x1A10F4u) {
        ctx->pc = 0x1A10F4u;
            // 0x1a10f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A10F8u;
        goto label_1a10f8;
    }
    ctx->pc = 0x1A10F0u;
    {
        const bool branch_taken_0x1a10f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10F0u;
            // 0x1a10f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10f0) {
            ctx->pc = 0x1A1108u;
            goto label_1a1108;
        }
    }
    ctx->pc = 0x1A10F8u;
label_1a10f8:
    // 0x1a10f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a10f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a10fc:
    // 0x1a10fc: 0x40f809  jalr        $v0
label_1a1100:
    if (ctx->pc == 0x1A1100u) {
        ctx->pc = 0x1A1100u;
            // 0x1a1100: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1104u;
        goto label_1a1104;
    }
    ctx->pc = 0x1A10FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1104u);
        ctx->pc = 0x1A1100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10FCu;
            // 0x1a1100: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1104u; }
            if (ctx->pc != 0x1A1104u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1104u;
label_1a1104:
    // 0x1a1104: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1108:
    // 0x1a1108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a110c:
    // 0x1a110c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a110cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a1110:
    // 0x1a1110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1114:
    // 0x1a1114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1118:
    // 0x1a1118: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a111c:
    // 0x1a111c: 0x3e00008  jr          $ra
label_1a1120:
    if (ctx->pc == 0x1A1120u) {
        ctx->pc = 0x1A1120u;
            // 0x1a1120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A1124u;
        goto label_1a1124;
    }
    ctx->pc = 0x1A111Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A111Cu;
            // 0x1a1120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1124u;
label_1a1124:
    // 0x1a1124: 0x0  nop
    ctx->pc = 0x1a1124u;
    // NOP
}
