#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5930
// Address: 0x1a5930 - 0x1a5a98
void sub_001A5930_0x1a5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5930_0x1a5930");
#endif

    switch (ctx->pc) {
        case 0x1a5948u: goto label_1a5948;
        case 0x1a59d8u: goto label_1a59d8;
        case 0x1a59fcu: goto label_1a59fc;
        case 0x1a5a18u: goto label_1a5a18;
        case 0x1a5a38u: goto label_1a5a38;
        default: break;
    }

    ctx->pc = 0x1a5930u;

    // 0x1a5930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5934: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a5934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a593c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a593cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5940: 0x8069652  j           func_1A5948
    ctx->pc = 0x1A5940u;
    ctx->pc = 0x1A5944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5940u;
            // 0x1a5944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5948u;
    goto label_1a5948;
    ctx->pc = 0x1A5948u;
label_1a5948:
    // 0x1a5948: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a594c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5950: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a5950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a5954: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a5954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5958: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1a5958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x1a595c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a5960: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1a5960u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a5964: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a5964u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a5968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a596c: 0x26c41380  addiu       $a0, $s6, 0x1380
    ctx->pc = 0x1a596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4992));
    // 0x1a5970: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1a5970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a5974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a5978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a597c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a597cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a5980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a5984: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a5984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5988: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a5988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1a598c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a598cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5994: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a599c: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a59a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a59a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a59a4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a59a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59a8: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A59A8u;
    {
        const bool branch_taken_0x1a59a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59A8u;
            // 0x1a59ac: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59a8) {
            ctx->pc = 0x1A5A68u;
            goto label_1a5a68;
        }
    }
    ctx->pc = 0x1A59B0u;
    // 0x1a59b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a59b4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A59B4u;
    {
        const bool branch_taken_0x1a59b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59B4u;
            // 0x1a59b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59b4) {
            ctx->pc = 0x1A5A68u;
            goto label_1a5a68;
        }
    }
    ctx->pc = 0x1A59BCu;
    // 0x1a59bc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A59BCu;
    {
        const bool branch_taken_0x1a59bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A59C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59BCu;
            // 0x1a59c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59bc) {
            ctx->pc = 0x1A59D0u;
            goto label_1a59d0;
        }
    }
    ctx->pc = 0x1A59C4u;
    // 0x1a59c4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A59C4u;
    {
        const bool branch_taken_0x1a59c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59C4u;
            // 0x1a59c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59c4) {
            ctx->pc = 0x1A5A6Cu;
            goto label_1a5a6c;
        }
    }
    ctx->pc = 0x1A59CCu;
    // 0x1a59cc: 0x0  nop
    ctx->pc = 0x1a59ccu;
    // NOP
label_1a59d0:
    // 0x1a59d0: 0xc069708  jal         func_1A5C20
    ctx->pc = 0x1A59D0u;
    SET_GPR_U32(ctx, 31, 0x1A59D8u);
    ctx->pc = 0x1A59D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59D0u;
            // 0x1a59d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C20u;
    if (runtime->hasFunction(0x1A5C20u)) {
        auto targetFn = runtime->lookupFunction(0x1A5C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59D8u; }
        if (ctx->pc != 0x1A59D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C20_0x1a5c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59D8u; }
        if (ctx->pc != 0x1A59D8u) { return; }
    }
    ctx->pc = 0x1A59D8u;
label_1a59d8:
    // 0x1a59d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a59d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59dc: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x1a59dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1a59e0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A59E0u;
    {
        const bool branch_taken_0x1a59e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a59e0) {
            ctx->pc = 0x1A59E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59E0u;
            // 0x1a59e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5A20u;
            goto label_1a5a20;
        }
    }
    ctx->pc = 0x1A59E8u;
    // 0x1a59e8: 0x2838023  subu        $s0, $s4, $v1
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a59ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a59ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a59f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59f4: 0xc069708  jal         func_1A5C20
    ctx->pc = 0x1A59F4u;
    SET_GPR_U32(ctx, 31, 0x1A59FCu);
    ctx->pc = 0x1A59F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59F4u;
            // 0x1a59f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C20u;
    if (runtime->hasFunction(0x1A5C20u)) {
        auto targetFn = runtime->lookupFunction(0x1A5C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59FCu; }
        if (ctx->pc != 0x1A59FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C20_0x1a5c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59FCu; }
        if (ctx->pc != 0x1A59FCu) { return; }
    }
    ctx->pc = 0x1A59FCu;
label_1a59fc:
    // 0x1a59fc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1a59fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a5a00: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5A00u;
    {
        const bool branch_taken_0x1a5a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a00) {
            ctx->pc = 0x1A5A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A00u;
            // 0x1a5a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5A20u;
            goto label_1a5a20;
        }
    }
    ctx->pc = 0x1A5A08u;
    // 0x1a5a08: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a5a0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a5a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a10: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A5A10u;
    SET_GPR_U32(ctx, 31, 0x1A5A18u);
    ctx->pc = 0x1A5A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A10u;
            // 0x1a5a14: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A18u; }
        if (ctx->pc != 0x1A5A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A18u; }
        if (ctx->pc != 0x1A5A18u) { return; }
    }
    ctx->pc = 0x1A5A18u;
label_1a5a18:
    // 0x1a5a18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5a20:
    // 0x1a5a20: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5A20u;
    {
        const bool branch_taken_0x1a5a20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5a20) {
            ctx->pc = 0x1A5A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A20u;
            // 0x1a5a24: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5A50u;
            goto label_1a5a50;
        }
    }
    ctx->pc = 0x1A5A28u;
    // 0x1a5a28: 0x56b30004  bnel        $s5, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5A28u;
    {
        const bool branch_taken_0x1a5a28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a5a28) {
            ctx->pc = 0x1A5A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A28u;
            // 0x1a5a2c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5A3Cu;
            goto label_1a5a3c;
        }
    }
    ctx->pc = 0x1A5A30u;
    // 0x1a5a30: 0xc0696a6  jal         func_1A5A98
    ctx->pc = 0x1A5A30u;
    SET_GPR_U32(ctx, 31, 0x1A5A38u);
    ctx->pc = 0x1A5A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A30u;
            // 0x1a5a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A98u;
    if (runtime->hasFunction(0x1A5A98u)) {
        auto targetFn = runtime->lookupFunction(0x1A5A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A38u; }
        if (ctx->pc != 0x1A5A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5A98_0x1a5a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A38u; }
        if (ctx->pc != 0x1A5A38u) { return; }
    }
    ctx->pc = 0x1A5A38u;
label_1a5a38:
    // 0x1a5a38: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1a5a3c:
    // 0x1a5a3c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5A3Cu;
    {
        const bool branch_taken_0x1a5a3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A3Cu;
            // 0x1a5a40: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a3c) {
            ctx->pc = 0x1A5A5Cu;
            goto label_1a5a5c;
        }
    }
    ctx->pc = 0x1A5A44u;
    // 0x1a5a44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5A44u;
    {
        const bool branch_taken_0x1a5a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A44u;
            // 0x1a5a48: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a44) {
            ctx->pc = 0x1A5A5Cu;
            goto label_1a5a5c;
        }
    }
    ctx->pc = 0x1A5A4Cu;
    // 0x1a5a4c: 0x0  nop
    ctx->pc = 0x1a5a4cu;
    // NOP
label_1a5a50:
    // 0x1a5a50: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5A50u;
    {
        const bool branch_taken_0x1a5a50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A50u;
            // 0x1a5a54: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a50) {
            ctx->pc = 0x1A5A5Cu;
            goto label_1a5a5c;
        }
    }
    ctx->pc = 0x1A5A58u;
    // 0x1a5a58: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1a5a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_1a5a5c:
    // 0x1a5a5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5a60: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1a5a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a64: 0xaec30044  sw          $v1, 0x44($s6)
    ctx->pc = 0x1a5a64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 3));
label_1a5a68:
    // 0x1a5a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5a6c:
    // 0x1a5a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5a70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5a70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5a74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5a74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5a78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a5a78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5a7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a5a7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a5a80: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a5a80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5a84: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a5a84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5a88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a5a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A8Cu;
            // 0x1a5a90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5A94u;
    // 0x1a5a94: 0x0  nop
    ctx->pc = 0x1a5a94u;
    // NOP
}
