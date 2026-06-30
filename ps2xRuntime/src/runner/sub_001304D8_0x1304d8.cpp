#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001304D8
// Address: 0x1304d8 - 0x130580
void sub_001304D8_0x1304d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001304D8_0x1304d8");
#endif

    switch (ctx->pc) {
        case 0x130518u: goto label_130518;
        case 0x130568u: goto label_130568;
        default: break;
    }

    ctx->pc = 0x1304d8u;

    // 0x1304d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1304d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1304dc: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x1304dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x1304e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1304e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1304e4: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x1304e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x1304e8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1304e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304ec: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1304ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x1304f0: 0x8dec1ad8  lw          $t4, 0x1AD8($t7)
    ctx->pc = 0x1304f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x1304f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1304f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304f8: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x1304f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x1304fc: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x1304fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x130500: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x130500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x130504: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x130504u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x130508: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x130508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x13050c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x13050cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x130510: 0xc04b792  jal         func_12DE48
    ctx->pc = 0x130510u;
    SET_GPR_U32(ctx, 31, 0x130518u);
    ctx->pc = 0x130514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130510u;
            // 0x130514: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE48u;
    if (runtime->hasFunction(0x12DE48u)) {
        auto targetFn = runtime->lookupFunction(0x12DE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130518u; }
        if (ctx->pc != 0x130518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DE48_0x12de48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130518u; }
        if (ctx->pc != 0x130518u) { return; }
    }
    ctx->pc = 0x130518u;
label_130518:
    // 0x130518: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x130518u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13051c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13051cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130520: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x130520u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x130524: 0x3e00008  jr          $ra
    ctx->pc = 0x130524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130524u;
            // 0x130528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13052Cu;
    // 0x13052c: 0x0  nop
    ctx->pc = 0x13052cu;
    // NOP
    // 0x130530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x130530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x130534: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x130534u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x130538: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x130538u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13053c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13053cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x130540: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x130540u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x130544: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x130544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x130548: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x130548u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x13054c: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x13054cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x130550: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x130550u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x130554: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x130554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130558: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x130558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x13055c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x13055cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x130560: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x130560u;
    SET_GPR_U32(ctx, 31, 0x130568u);
    ctx->pc = 0x130564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130560u;
            // 0x130564: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130568u; }
        if (ctx->pc != 0x130568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DEC0_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130568u; }
        if (ctx->pc != 0x130568u) { return; }
    }
    ctx->pc = 0x130568u;
label_130568:
    // 0x130568: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x130568u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13056c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130570: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x130570u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x130574: 0x3e00008  jr          $ra
    ctx->pc = 0x130574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130574u;
            // 0x130578: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13057Cu;
    // 0x13057c: 0x0  nop
    ctx->pc = 0x13057cu;
    // NOP
}
