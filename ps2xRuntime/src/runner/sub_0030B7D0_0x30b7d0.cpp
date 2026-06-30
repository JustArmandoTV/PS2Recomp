#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030B7D0
// Address: 0x30b7d0 - 0x30ba50
void sub_0030B7D0_0x30b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B7D0_0x30b7d0");
#endif

    switch (ctx->pc) {
        case 0x30b888u: goto label_30b888;
        case 0x30b8a4u: goto label_30b8a4;
        case 0x30b8c0u: goto label_30b8c0;
        case 0x30b8f0u: goto label_30b8f0;
        case 0x30b90cu: goto label_30b90c;
        case 0x30b928u: goto label_30b928;
        case 0x30b98cu: goto label_30b98c;
        case 0x30b9a8u: goto label_30b9a8;
        case 0x30b9c4u: goto label_30b9c4;
        case 0x30b9f4u: goto label_30b9f4;
        case 0x30ba10u: goto label_30ba10;
        case 0x30ba2cu: goto label_30ba2c;
        default: break;
    }

    ctx->pc = 0x30b7d0u;

label_30b7d0:
    // 0x30b7d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30b7d4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x30b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30b7d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30b7dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x30b7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b7e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30b7e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30b7e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30b7ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b7f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b7f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b7f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b7fc: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x30b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30b800: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30b800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b804: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30b804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30b808: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30b808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30b80c: 0x8c63f2d8  lw          $v1, -0xD28($v1)
    ctx->pc = 0x30b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963928)));
    // 0x30b810: 0x2043021  addu        $a2, $s0, $a0
    ctx->pc = 0x30b810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x30b814: 0x84c50008  lh          $a1, 0x8($a2)
    ctx->pc = 0x30b814u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x30b818: 0x84d3000a  lh          $s3, 0xA($a2)
    ctx->pc = 0x30b818u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x30b81c: 0x602027  not         $a0, $v1
    ctx->pc = 0x30b81cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x30b820: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30b824: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30b824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30b828: 0x10a7003f  beq         $a1, $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x30B828u;
    {
        const bool branch_taken_0x30b828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x30B82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B828u;
            // 0x30b82c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b828) {
            ctx->pc = 0x30B928u;
            goto label_30b928;
        }
    }
    ctx->pc = 0x30B830u;
    // 0x30b830: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x30b830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30b834: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30b834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30b838: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30b838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30b83c: 0x8c63f2d8  lw          $v1, -0xD28($v1)
    ctx->pc = 0x30b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963928)));
    // 0x30b840: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30b840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30b844: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x30b844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x30b848: 0x602027  not         $a0, $v1
    ctx->pc = 0x30b848u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x30b84c: 0x84a60008  lh          $a2, 0x8($a1)
    ctx->pc = 0x30b84cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30b850: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b854: 0x84b2000a  lh          $s2, 0xA($a1)
    ctx->pc = 0x30b854u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x30b858: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30b858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30b85c: 0x10c70018  beq         $a2, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x30B85Cu;
    {
        const bool branch_taken_0x30b85c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x30B860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B85Cu;
            // 0x30b860: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b85c) {
            ctx->pc = 0x30B8C0u;
            goto label_30b8c0;
        }
    }
    ctx->pc = 0x30B864u;
    // 0x30b864: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x30b864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30b868: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30b868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30b86c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30b870: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30b870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b874: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30b874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30b878: 0x84950008  lh          $s5, 0x8($a0)
    ctx->pc = 0x30b878u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30b87c: 0x8494000a  lh          $s4, 0xA($a0)
    ctx->pc = 0x30b87cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30b880: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x30B880u;
    SET_GPR_U32(ctx, 31, 0x30B888u);
    ctx->pc = 0x30B884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B880u;
            // 0x30b884: 0x24a5f2d8  addiu       $a1, $a1, -0xD28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (runtime->hasFunction(0x30BA50u)) {
        auto targetFn = runtime->lookupFunction(0x30BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B888u; }
        if (ctx->pc != 0x30B888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BA50_0x30ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B888u; }
        if (ctx->pc != 0x30B888u) { return; }
    }
    ctx->pc = 0x30B888u;
label_30b888:
    // 0x30b888: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b88c: 0x52a30006  beql        $s5, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B88Cu;
    {
        const bool branch_taken_0x30b88c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b88c) {
            ctx->pc = 0x30B890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B88Cu;
            // 0x30b890: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B8A8u;
            goto label_30b8a8;
        }
    }
    ctx->pc = 0x30B894u;
    // 0x30b894: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x30b894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b89c: 0xc0c2df4  jal         func_30B7D0
    ctx->pc = 0x30B89Cu;
    SET_GPR_U32(ctx, 31, 0x30B8A4u);
    ctx->pc = 0x30B8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B89Cu;
            // 0x30b8a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7D0u;
    goto label_30b7d0;
    ctx->pc = 0x30B8A4u;
label_30b8a4:
    // 0x30b8a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30b8a8:
    // 0x30b8a8: 0x52830006  beql        $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B8A8u;
    {
        const bool branch_taken_0x30b8a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b8a8) {
            ctx->pc = 0x30B8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8A8u;
            // 0x30b8ac: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B8C4u;
            goto label_30b8c4;
        }
    }
    ctx->pc = 0x30B8B0u;
    // 0x30b8b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x30b8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8b8: 0xc0c2df4  jal         func_30B7D0
    ctx->pc = 0x30B8B8u;
    SET_GPR_U32(ctx, 31, 0x30B8C0u);
    ctx->pc = 0x30B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8B8u;
            // 0x30b8bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7D0u;
    goto label_30b7d0;
    ctx->pc = 0x30B8C0u;
label_30b8c0:
    // 0x30b8c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30b8c4:
    // 0x30b8c4: 0x52430019  beql        $s2, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x30B8C4u;
    {
        const bool branch_taken_0x30b8c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b8c4) {
            ctx->pc = 0x30B8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8C4u;
            // 0x30b8c8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B92Cu;
            goto label_30b92c;
        }
    }
    ctx->pc = 0x30B8CCu;
    // 0x30b8cc: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x30b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x30b8d0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30b8d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30b8d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b8dc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30b8e0: 0x84940008  lh          $s4, 0x8($a0)
    ctx->pc = 0x30b8e0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30b8e4: 0x8492000a  lh          $s2, 0xA($a0)
    ctx->pc = 0x30b8e4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30b8e8: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x30B8E8u;
    SET_GPR_U32(ctx, 31, 0x30B8F0u);
    ctx->pc = 0x30B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8E8u;
            // 0x30b8ec: 0x24a5f2d8  addiu       $a1, $a1, -0xD28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (runtime->hasFunction(0x30BA50u)) {
        auto targetFn = runtime->lookupFunction(0x30BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B8F0u; }
        if (ctx->pc != 0x30B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BA50_0x30ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B8F0u; }
        if (ctx->pc != 0x30B8F0u) { return; }
    }
    ctx->pc = 0x30B8F0u;
label_30b8f0:
    // 0x30b8f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b8f4: 0x52830006  beql        $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B8F4u;
    {
        const bool branch_taken_0x30b8f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b8f4) {
            ctx->pc = 0x30B8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B8F4u;
            // 0x30b8f8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B910u;
            goto label_30b910;
        }
    }
    ctx->pc = 0x30B8FCu;
    // 0x30b8fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x30b8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b904: 0xc0c2df4  jal         func_30B7D0
    ctx->pc = 0x30B904u;
    SET_GPR_U32(ctx, 31, 0x30B90Cu);
    ctx->pc = 0x30B908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B904u;
            // 0x30b908: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7D0u;
    goto label_30b7d0;
    ctx->pc = 0x30B90Cu;
label_30b90c:
    // 0x30b90c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30b910:
    // 0x30b910: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B910u;
    {
        const bool branch_taken_0x30b910 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b910) {
            ctx->pc = 0x30B928u;
            goto label_30b928;
        }
    }
    ctx->pc = 0x30B918u;
    // 0x30b918: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30b918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b91c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b920: 0xc0c2df4  jal         func_30B7D0
    ctx->pc = 0x30B920u;
    SET_GPR_U32(ctx, 31, 0x30B928u);
    ctx->pc = 0x30B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B920u;
            // 0x30b924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7D0u;
    goto label_30b7d0;
    ctx->pc = 0x30B928u;
label_30b928:
    // 0x30b928: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x30b928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30b92c:
    // 0x30b92c: 0x52670040  beql        $s3, $a3, . + 4 + (0x40 << 2)
    ctx->pc = 0x30B92Cu;
    {
        const bool branch_taken_0x30b92c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x30b92c) {
            ctx->pc = 0x30B930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B92Cu;
            // 0x30b930: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BA30u;
            goto label_30ba30;
        }
    }
    ctx->pc = 0x30B934u;
    // 0x30b934: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x30b934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x30b938: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30b938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30b93c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x30b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x30b940: 0x8c63f2d8  lw          $v1, -0xD28($v1)
    ctx->pc = 0x30b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963928)));
    // 0x30b944: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30b944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30b948: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x30b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x30b94c: 0x602027  not         $a0, $v1
    ctx->pc = 0x30b94cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x30b950: 0x84a60008  lh          $a2, 0x8($a1)
    ctx->pc = 0x30b950u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30b954: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30b954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b958: 0x84b2000a  lh          $s2, 0xA($a1)
    ctx->pc = 0x30b958u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x30b95c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30b95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30b960: 0x10c70018  beq         $a2, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x30B960u;
    {
        const bool branch_taken_0x30b960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x30B964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B960u;
            // 0x30b964: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b960) {
            ctx->pc = 0x30B9C4u;
            goto label_30b9c4;
        }
    }
    ctx->pc = 0x30B968u;
    // 0x30b968: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x30b968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30b96c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30b970: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30b974: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30b974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b978: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30b978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30b97c: 0x84940008  lh          $s4, 0x8($a0)
    ctx->pc = 0x30b97cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30b980: 0x8493000a  lh          $s3, 0xA($a0)
    ctx->pc = 0x30b980u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30b984: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x30B984u;
    SET_GPR_U32(ctx, 31, 0x30B98Cu);
    ctx->pc = 0x30B988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B984u;
            // 0x30b988: 0x24a5f2d8  addiu       $a1, $a1, -0xD28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (runtime->hasFunction(0x30BA50u)) {
        auto targetFn = runtime->lookupFunction(0x30BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B98Cu; }
        if (ctx->pc != 0x30B98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BA50_0x30ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B98Cu; }
        if (ctx->pc != 0x30B98Cu) { return; }
    }
    ctx->pc = 0x30B98Cu;
label_30b98c:
    // 0x30b98c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b990: 0x52830006  beql        $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B990u;
    {
        const bool branch_taken_0x30b990 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b990) {
            ctx->pc = 0x30B994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B990u;
            // 0x30b994: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B9ACu;
            goto label_30b9ac;
        }
    }
    ctx->pc = 0x30B998u;
    // 0x30b998: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x30b998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9a0: 0xc0c2df4  jal         func_30B7D0
    ctx->pc = 0x30B9A0u;
    SET_GPR_U32(ctx, 31, 0x30B9A8u);
    ctx->pc = 0x30B9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9A0u;
            // 0x30b9a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7D0u;
    goto label_30b7d0;
    ctx->pc = 0x30B9A8u;
label_30b9a8:
    // 0x30b9a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30b9ac:
    // 0x30b9ac: 0x52630006  beql        $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B9ACu;
    {
        const bool branch_taken_0x30b9ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b9ac) {
            ctx->pc = 0x30B9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9ACu;
            // 0x30b9b0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B9C8u;
            goto label_30b9c8;
        }
    }
    ctx->pc = 0x30B9B4u;
    // 0x30b9b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30b9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9bc: 0xc0c2df4  jal         func_30B7D0
    ctx->pc = 0x30B9BCu;
    SET_GPR_U32(ctx, 31, 0x30B9C4u);
    ctx->pc = 0x30B9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9BCu;
            // 0x30b9c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7D0u;
    goto label_30b7d0;
    ctx->pc = 0x30B9C4u;
label_30b9c4:
    // 0x30b9c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30b9c8:
    // 0x30b9c8: 0x12430018  beq         $s2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x30B9C8u;
    {
        const bool branch_taken_0x30b9c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b9c8) {
            ctx->pc = 0x30BA2Cu;
            goto label_30ba2c;
        }
    }
    ctx->pc = 0x30B9D0u;
    // 0x30b9d0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x30b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x30b9d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30b9d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30b9dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b9e0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30b9e4: 0x84930008  lh          $s3, 0x8($a0)
    ctx->pc = 0x30b9e4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30b9e8: 0x8492000a  lh          $s2, 0xA($a0)
    ctx->pc = 0x30b9e8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x30b9ec: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x30B9ECu;
    SET_GPR_U32(ctx, 31, 0x30B9F4u);
    ctx->pc = 0x30B9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9ECu;
            // 0x30b9f0: 0x24a5f2d8  addiu       $a1, $a1, -0xD28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (runtime->hasFunction(0x30BA50u)) {
        auto targetFn = runtime->lookupFunction(0x30BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B9F4u; }
        if (ctx->pc != 0x30B9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BA50_0x30ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B9F4u; }
        if (ctx->pc != 0x30B9F4u) { return; }
    }
    ctx->pc = 0x30B9F4u;
label_30b9f4:
    // 0x30b9f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b9f8: 0x52630006  beql        $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B9F8u;
    {
        const bool branch_taken_0x30b9f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x30b9f8) {
            ctx->pc = 0x30B9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9F8u;
            // 0x30b9fc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BA14u;
            goto label_30ba14;
        }
    }
    ctx->pc = 0x30BA00u;
    // 0x30ba00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30ba00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba08: 0xc0c2df4  jal         func_30B7D0
    ctx->pc = 0x30BA08u;
    SET_GPR_U32(ctx, 31, 0x30BA10u);
    ctx->pc = 0x30BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA08u;
            // 0x30ba0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7D0u;
    goto label_30b7d0;
    ctx->pc = 0x30BA10u;
label_30ba10:
    // 0x30ba10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30ba14:
    // 0x30ba14: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BA14u;
    {
        const bool branch_taken_0x30ba14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ba14) {
            ctx->pc = 0x30BA2Cu;
            goto label_30ba2c;
        }
    }
    ctx->pc = 0x30BA1Cu;
    // 0x30ba1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ba20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba24: 0xc0c2df4  jal         func_30B7D0
    ctx->pc = 0x30BA24u;
    SET_GPR_U32(ctx, 31, 0x30BA2Cu);
    ctx->pc = 0x30BA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA24u;
            // 0x30ba28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B7D0u;
    goto label_30b7d0;
    ctx->pc = 0x30BA2Cu;
label_30ba2c:
    // 0x30ba2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30ba2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_30ba30:
    // 0x30ba30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30ba30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ba34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30ba34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ba38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30ba38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ba3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30ba3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ba40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ba40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ba44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ba44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ba48: 0x3e00008  jr          $ra
    ctx->pc = 0x30BA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA48u;
            // 0x30ba4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BA50u;
}
