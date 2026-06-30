#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9DD0
// Address: 0x1a9dd0 - 0x1a9e60
void sub_001A9DD0_0x1a9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9DD0_0x1a9dd0");
#endif

    switch (ctx->pc) {
        case 0x1a9e0cu: goto label_1a9e0c;
        case 0x1a9e24u: goto label_1a9e24;
        case 0x1a9e3cu: goto label_1a9e3c;
        default: break;
    }

    ctx->pc = 0x1a9dd0u;

    // 0x1a9dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9dd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9ddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9de0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9de4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a9de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9de8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a9dec: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1a9decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a9df0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a9df4: 0x26301fe4  addiu       $s0, $s1, 0x1FE4
    ctx->pc = 0x1a9df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8164));
    // 0x1a9df8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a9dfc: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9DFCu;
    {
        const bool branch_taken_0x1a9dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A9E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DFCu;
            // 0x1a9e00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dfc) {
            ctx->pc = 0x1A9E10u;
            goto label_1a9e10;
        }
    }
    ctx->pc = 0x1A9E04u;
    // 0x1a9e04: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1A9E04u;
    SET_GPR_U32(ctx, 31, 0x1A9E0Cu);
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E0Cu; }
        if (ctx->pc != 0x1A9E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E0Cu; }
        if (ctx->pc != 0x1A9E0Cu) { return; }
    }
    ctx->pc = 0x1A9E0Cu;
label_1a9e0c:
    // 0x1a9e0c: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x1a9e0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a9e10:
    // 0x1a9e10: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1a9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a9e14: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9E14u;
    {
        const bool branch_taken_0x1a9e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x1a9e14) {
            ctx->pc = 0x1A9E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E14u;
            // 0x1a9e18: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E2Cu;
            goto label_1a9e2c;
        }
    }
    ctx->pc = 0x1A9E1Cu;
    // 0x1a9e1c: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1A9E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A9E24u);
    ctx->pc = 0x1A9E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E1Cu;
            // 0x1a9e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E24u; }
        if (ctx->pc != 0x1A9E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E24u; }
        if (ctx->pc != 0x1A9E24u) { return; }
    }
    ctx->pc = 0x1A9E24u;
label_1a9e24:
    // 0x1a9e24: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x1a9e24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1a9e28: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a9e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9e2c:
    // 0x1a9e2c: 0x10b30005  beq         $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9E2Cu;
    {
        const bool branch_taken_0x1a9e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A9E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E2Cu;
            // 0x1a9e30: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e2c) {
            ctx->pc = 0x1A9E44u;
            goto label_1a9e44;
        }
    }
    ctx->pc = 0x1A9E34u;
    // 0x1a9e34: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1A9E34u;
    SET_GPR_U32(ctx, 31, 0x1A9E3Cu);
    ctx->pc = 0x1A9E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E34u;
            // 0x1a9e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E3Cu; }
        if (ctx->pc != 0x1A9E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E3Cu; }
        if (ctx->pc != 0x1A9E3Cu) { return; }
    }
    ctx->pc = 0x1A9E3Cu;
label_1a9e3c:
    // 0x1a9e3c: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x1a9e3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1a9e40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a9e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9e44:
    // 0x1a9e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9e48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9e4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9e50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9e54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9e58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E58u;
            // 0x1a9e5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9E60u;
}
