#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030BA70
// Address: 0x30ba70 - 0x30bcf0
void sub_0030BA70_0x30ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BA70_0x30ba70");
#endif

    switch (ctx->pc) {
        case 0x30bb20u: goto label_30bb20;
        case 0x30bb3cu: goto label_30bb3c;
        case 0x30bb58u: goto label_30bb58;
        case 0x30bb88u: goto label_30bb88;
        case 0x30bba4u: goto label_30bba4;
        case 0x30bbc0u: goto label_30bbc0;
        case 0x30bc20u: goto label_30bc20;
        case 0x30bc3cu: goto label_30bc3c;
        case 0x30bc58u: goto label_30bc58;
        case 0x30bc88u: goto label_30bc88;
        case 0x30bca4u: goto label_30bca4;
        case 0x30bcc0u: goto label_30bcc0;
        default: break;
    }

    ctx->pc = 0x30ba70u;

label_30ba70:
    // 0x30ba70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30ba74: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x30ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30ba78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30ba7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x30ba7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ba80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30ba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30ba84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30ba84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30ba88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30ba8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30ba90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ba94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ba94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ba98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30ba98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba9c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x30ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30baa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30baa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30baa4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x30baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30baa8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30baac: 0x8c64f2d0  lw          $a0, -0xD30($v1)
    ctx->pc = 0x30baacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963920)));
    // 0x30bab0: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x30bab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x30bab4: 0x84c50008  lh          $a1, 0x8($a2)
    ctx->pc = 0x30bab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x30bab8: 0x84d3000a  lh          $s3, 0xA($a2)
    ctx->pc = 0x30bab8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x30babc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30babcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30bac0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30bac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30bac4: 0x10a7003e  beq         $a1, $a3, . + 4 + (0x3E << 2)
    ctx->pc = 0x30BAC4u;
    {
        const bool branch_taken_0x30bac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x30BAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BAC4u;
            // 0x30bac8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bac4) {
            ctx->pc = 0x30BBC0u;
            goto label_30bbc0;
        }
    }
    ctx->pc = 0x30BACCu;
    // 0x30bacc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x30baccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30bad0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30bad4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x30bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30bad8: 0x8c64f2d0  lw          $a0, -0xD30($v1)
    ctx->pc = 0x30bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963920)));
    // 0x30badc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x30badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30bae0: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x30bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30bae4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30bae8: 0x84a60008  lh          $a2, 0x8($a1)
    ctx->pc = 0x30bae8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30baec: 0x84b2000a  lh          $s2, 0xA($a1)
    ctx->pc = 0x30baecu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x30baf0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30baf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30baf4: 0x10c70018  beq         $a2, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x30BAF4u;
    {
        const bool branch_taken_0x30baf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x30BAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BAF4u;
            // 0x30baf8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30baf4) {
            ctx->pc = 0x30BB58u;
            goto label_30bb58;
        }
    }
    ctx->pc = 0x30BAFCu;
    // 0x30bafc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x30bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30bb00: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30bb04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30bb08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30bb0c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30bb10: 0x84950008  lh          $s5, 0x8($a0)
    ctx->pc = 0x30bb10u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30bb14: 0x8494000a  lh          $s4, 0xA($a0)
    ctx->pc = 0x30bb14u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30bb18: 0xc0c2f3c  jal         func_30BCF0
    ctx->pc = 0x30BB18u;
    SET_GPR_U32(ctx, 31, 0x30BB20u);
    ctx->pc = 0x30BB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB18u;
            // 0x30bb1c: 0x24a5f2d0  addiu       $a1, $a1, -0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BCF0u;
    if (runtime->hasFunction(0x30BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x30BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB20u; }
        if (ctx->pc != 0x30BB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BCF0_0x30bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB20u; }
        if (ctx->pc != 0x30BB20u) { return; }
    }
    ctx->pc = 0x30BB20u;
label_30bb20:
    // 0x30bb20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30bb24: 0x52a30006  beql        $s5, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BB24u;
    {
        const bool branch_taken_0x30bb24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bb24) {
            ctx->pc = 0x30BB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB24u;
            // 0x30bb28: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BB40u;
            goto label_30bb40;
        }
    }
    ctx->pc = 0x30BB2Cu;
    // 0x30bb2c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x30bb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb34: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30BB34u;
    SET_GPR_U32(ctx, 31, 0x30BB3Cu);
    ctx->pc = 0x30BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB34u;
            // 0x30bb38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    goto label_30ba70;
    ctx->pc = 0x30BB3Cu;
label_30bb3c:
    // 0x30bb3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30bb40:
    // 0x30bb40: 0x52830006  beql        $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BB40u;
    {
        const bool branch_taken_0x30bb40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bb40) {
            ctx->pc = 0x30BB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB40u;
            // 0x30bb44: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BB5Cu;
            goto label_30bb5c;
        }
    }
    ctx->pc = 0x30BB48u;
    // 0x30bb48: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x30bb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb50: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30BB50u;
    SET_GPR_U32(ctx, 31, 0x30BB58u);
    ctx->pc = 0x30BB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB50u;
            // 0x30bb54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    goto label_30ba70;
    ctx->pc = 0x30BB58u;
label_30bb58:
    // 0x30bb58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30bb5c:
    // 0x30bb5c: 0x52430019  beql        $s2, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x30BB5Cu;
    {
        const bool branch_taken_0x30bb5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bb5c) {
            ctx->pc = 0x30BB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB5Cu;
            // 0x30bb60: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BBC4u;
            goto label_30bbc4;
        }
    }
    ctx->pc = 0x30BB64u;
    // 0x30bb64: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x30bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x30bb68: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30bb6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30bb70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30bb74: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30bb78: 0x84940008  lh          $s4, 0x8($a0)
    ctx->pc = 0x30bb78u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30bb7c: 0x8492000a  lh          $s2, 0xA($a0)
    ctx->pc = 0x30bb7cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30bb80: 0xc0c2f3c  jal         func_30BCF0
    ctx->pc = 0x30BB80u;
    SET_GPR_U32(ctx, 31, 0x30BB88u);
    ctx->pc = 0x30BB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB80u;
            // 0x30bb84: 0x24a5f2d0  addiu       $a1, $a1, -0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BCF0u;
    if (runtime->hasFunction(0x30BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x30BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB88u; }
        if (ctx->pc != 0x30BB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BCF0_0x30bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BB88u; }
        if (ctx->pc != 0x30BB88u) { return; }
    }
    ctx->pc = 0x30BB88u;
label_30bb88:
    // 0x30bb88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30bb8c: 0x52830006  beql        $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BB8Cu;
    {
        const bool branch_taken_0x30bb8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bb8c) {
            ctx->pc = 0x30BB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB8Cu;
            // 0x30bb90: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BBA8u;
            goto label_30bba8;
        }
    }
    ctx->pc = 0x30BB94u;
    // 0x30bb94: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x30bb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb9c: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30BB9Cu;
    SET_GPR_U32(ctx, 31, 0x30BBA4u);
    ctx->pc = 0x30BBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BB9Cu;
            // 0x30bba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    goto label_30ba70;
    ctx->pc = 0x30BBA4u;
label_30bba4:
    // 0x30bba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30bba8:
    // 0x30bba8: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BBA8u;
    {
        const bool branch_taken_0x30bba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bba8) {
            ctx->pc = 0x30BBC0u;
            goto label_30bbc0;
        }
    }
    ctx->pc = 0x30BBB0u;
    // 0x30bbb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30bbb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbb8: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30BBB8u;
    SET_GPR_U32(ctx, 31, 0x30BBC0u);
    ctx->pc = 0x30BBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBB8u;
            // 0x30bbbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    goto label_30ba70;
    ctx->pc = 0x30BBC0u;
label_30bbc0:
    // 0x30bbc0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x30bbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30bbc4:
    // 0x30bbc4: 0x5267003f  beql        $s3, $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x30BBC4u;
    {
        const bool branch_taken_0x30bbc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x30bbc4) {
            ctx->pc = 0x30BBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBC4u;
            // 0x30bbc8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BCC4u;
            goto label_30bcc4;
        }
    }
    ctx->pc = 0x30BBCCu;
    // 0x30bbcc: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x30bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x30bbd0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30bbd4: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x30bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x30bbd8: 0x8c64f2d0  lw          $a0, -0xD30($v1)
    ctx->pc = 0x30bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963920)));
    // 0x30bbdc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x30bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30bbe0: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x30bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30bbe4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30bbe8: 0x84a60008  lh          $a2, 0x8($a1)
    ctx->pc = 0x30bbe8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30bbec: 0x84b2000a  lh          $s2, 0xA($a1)
    ctx->pc = 0x30bbecu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x30bbf0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30bbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30bbf4: 0x10c70018  beq         $a2, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x30BBF4u;
    {
        const bool branch_taken_0x30bbf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x30BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BBF4u;
            // 0x30bbf8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbf4) {
            ctx->pc = 0x30BC58u;
            goto label_30bc58;
        }
    }
    ctx->pc = 0x30BBFCu;
    // 0x30bbfc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x30bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30bc00: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30bc04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30bc08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30bc0c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30bc10: 0x84940008  lh          $s4, 0x8($a0)
    ctx->pc = 0x30bc10u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30bc14: 0x8493000a  lh          $s3, 0xA($a0)
    ctx->pc = 0x30bc14u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30bc18: 0xc0c2f3c  jal         func_30BCF0
    ctx->pc = 0x30BC18u;
    SET_GPR_U32(ctx, 31, 0x30BC20u);
    ctx->pc = 0x30BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC18u;
            // 0x30bc1c: 0x24a5f2d0  addiu       $a1, $a1, -0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BCF0u;
    if (runtime->hasFunction(0x30BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x30BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC20u; }
        if (ctx->pc != 0x30BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BCF0_0x30bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC20u; }
        if (ctx->pc != 0x30BC20u) { return; }
    }
    ctx->pc = 0x30BC20u;
label_30bc20:
    // 0x30bc20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30bc24: 0x52830006  beql        $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BC24u;
    {
        const bool branch_taken_0x30bc24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bc24) {
            ctx->pc = 0x30BC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC24u;
            // 0x30bc28: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BC40u;
            goto label_30bc40;
        }
    }
    ctx->pc = 0x30BC2Cu;
    // 0x30bc2c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x30bc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc34: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30BC34u;
    SET_GPR_U32(ctx, 31, 0x30BC3Cu);
    ctx->pc = 0x30BC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC34u;
            // 0x30bc38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    goto label_30ba70;
    ctx->pc = 0x30BC3Cu;
label_30bc3c:
    // 0x30bc3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30bc40:
    // 0x30bc40: 0x52630006  beql        $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BC40u;
    {
        const bool branch_taken_0x30bc40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bc40) {
            ctx->pc = 0x30BC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC40u;
            // 0x30bc44: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BC5Cu;
            goto label_30bc5c;
        }
    }
    ctx->pc = 0x30BC48u;
    // 0x30bc48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30bc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc50: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30BC50u;
    SET_GPR_U32(ctx, 31, 0x30BC58u);
    ctx->pc = 0x30BC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC50u;
            // 0x30bc54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    goto label_30ba70;
    ctx->pc = 0x30BC58u;
label_30bc58:
    // 0x30bc58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30bc5c:
    // 0x30bc5c: 0x12430018  beq         $s2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x30BC5Cu;
    {
        const bool branch_taken_0x30bc5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bc5c) {
            ctx->pc = 0x30BCC0u;
            goto label_30bcc0;
        }
    }
    ctx->pc = 0x30BC64u;
    // 0x30bc64: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x30bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x30bc68: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30bc6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30bc70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30bc74: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30bc78: 0x84930008  lh          $s3, 0x8($a0)
    ctx->pc = 0x30bc78u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30bc7c: 0x8492000a  lh          $s2, 0xA($a0)
    ctx->pc = 0x30bc7cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30bc80: 0xc0c2f3c  jal         func_30BCF0
    ctx->pc = 0x30BC80u;
    SET_GPR_U32(ctx, 31, 0x30BC88u);
    ctx->pc = 0x30BC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC80u;
            // 0x30bc84: 0x24a5f2d0  addiu       $a1, $a1, -0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BCF0u;
    if (runtime->hasFunction(0x30BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x30BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC88u; }
        if (ctx->pc != 0x30BC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BCF0_0x30bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BC88u; }
        if (ctx->pc != 0x30BC88u) { return; }
    }
    ctx->pc = 0x30BC88u;
label_30bc88:
    // 0x30bc88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30bc8c: 0x52630006  beql        $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BC8Cu;
    {
        const bool branch_taken_0x30bc8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bc8c) {
            ctx->pc = 0x30BC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC8Cu;
            // 0x30bc90: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BCA8u;
            goto label_30bca8;
        }
    }
    ctx->pc = 0x30BC94u;
    // 0x30bc94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30bc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc9c: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30BC9Cu;
    SET_GPR_U32(ctx, 31, 0x30BCA4u);
    ctx->pc = 0x30BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BC9Cu;
            // 0x30bca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    goto label_30ba70;
    ctx->pc = 0x30BCA4u;
label_30bca4:
    // 0x30bca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30bca8:
    // 0x30bca8: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BCA8u;
    {
        const bool branch_taken_0x30bca8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bca8) {
            ctx->pc = 0x30BCC0u;
            goto label_30bcc0;
        }
    }
    ctx->pc = 0x30BCB0u;
    // 0x30bcb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30bcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcb8: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30BCB8u;
    SET_GPR_U32(ctx, 31, 0x30BCC0u);
    ctx->pc = 0x30BCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BCB8u;
            // 0x30bcbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    goto label_30ba70;
    ctx->pc = 0x30BCC0u;
label_30bcc0:
    // 0x30bcc0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30bcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_30bcc4:
    // 0x30bcc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30bcc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30bcc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30bcc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30bccc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30bcccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30bcd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30bcd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bcd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bcd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bcd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bcd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x30BCDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BCDCu;
            // 0x30bce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BCE4u;
    // 0x30bce4: 0x0  nop
    ctx->pc = 0x30bce4u;
    // NOP
    // 0x30bce8: 0x0  nop
    ctx->pc = 0x30bce8u;
    // NOP
    // 0x30bcec: 0x0  nop
    ctx->pc = 0x30bcecu;
    // NOP
}
