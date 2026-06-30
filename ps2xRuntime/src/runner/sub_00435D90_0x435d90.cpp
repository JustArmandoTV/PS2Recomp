#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00435D90
// Address: 0x435d90 - 0x435e00
void sub_00435D90_0x435d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435D90_0x435d90");
#endif

    switch (ctx->pc) {
        case 0x435dd0u: goto label_435dd0;
        case 0x435de8u: goto label_435de8;
        default: break;
    }

    ctx->pc = 0x435d90u;

    // 0x435d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x435d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x435d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x435d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x435d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x435d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x435d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x435d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x435da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x435da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435da4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x435DA4u;
    {
        const bool branch_taken_0x435da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x435DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435DA4u;
            // 0x435da8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435da4) {
            ctx->pc = 0x435DE8u;
            goto label_435de8;
        }
    }
    ctx->pc = 0x435DACu;
    // 0x435dac: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x435DACu;
    {
        const bool branch_taken_0x435dac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x435dac) {
            ctx->pc = 0x435DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435DACu;
            // 0x435db0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435DD4u;
            goto label_435dd4;
        }
    }
    ctx->pc = 0x435DB4u;
    // 0x435db4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x435DB4u;
    {
        const bool branch_taken_0x435db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x435db4) {
            ctx->pc = 0x435DD0u;
            goto label_435dd0;
        }
    }
    ctx->pc = 0x435DBCu;
    // 0x435dbc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x435dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x435dc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x435DC0u;
    {
        const bool branch_taken_0x435dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x435dc0) {
            ctx->pc = 0x435DD0u;
            goto label_435dd0;
        }
    }
    ctx->pc = 0x435DC8u;
    // 0x435dc8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x435DC8u;
    SET_GPR_U32(ctx, 31, 0x435DD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435DD0u; }
        if (ctx->pc != 0x435DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435DD0u; }
        if (ctx->pc != 0x435DD0u) { return; }
    }
    ctx->pc = 0x435DD0u;
label_435dd0:
    // 0x435dd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x435dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_435dd4:
    // 0x435dd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x435dd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x435dd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x435DD8u;
    {
        const bool branch_taken_0x435dd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x435dd8) {
            ctx->pc = 0x435DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435DD8u;
            // 0x435ddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435DECu;
            goto label_435dec;
        }
    }
    ctx->pc = 0x435DE0u;
    // 0x435de0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x435DE0u;
    SET_GPR_U32(ctx, 31, 0x435DE8u);
    ctx->pc = 0x435DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435DE0u;
            // 0x435de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435DE8u; }
        if (ctx->pc != 0x435DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435DE8u; }
        if (ctx->pc != 0x435DE8u) { return; }
    }
    ctx->pc = 0x435DE8u;
label_435de8:
    // 0x435de8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x435de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_435dec:
    // 0x435dec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x435decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x435df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435df8: 0x3e00008  jr          $ra
    ctx->pc = 0x435DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435DF8u;
            // 0x435dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435E00u;
}
