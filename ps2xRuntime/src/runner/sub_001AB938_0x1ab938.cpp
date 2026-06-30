#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB938
// Address: 0x1ab938 - 0x1abb78
void sub_001AB938_0x1ab938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB938_0x1ab938");
#endif

    switch (ctx->pc) {
        case 0x1ab980u: goto label_1ab980;
        case 0x1ab9a0u: goto label_1ab9a0;
        case 0x1ab9c0u: goto label_1ab9c0;
        case 0x1aba24u: goto label_1aba24;
        case 0x1aba34u: goto label_1aba34;
        case 0x1aba7cu: goto label_1aba7c;
        case 0x1aba94u: goto label_1aba94;
        case 0x1abaa8u: goto label_1abaa8;
        case 0x1abb14u: goto label_1abb14;
        case 0x1abb34u: goto label_1abb34;
        case 0x1abb50u: goto label_1abb50;
        default: break;
    }

    ctx->pc = 0x1ab938u;

    // 0x1ab938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ab938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ab93c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1ab93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1ab940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab944: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ab944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ab948: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ab948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab94c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1ab94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1ab950: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ab950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab954: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ab954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1ab958: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ab958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab95c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1ab95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1ab960: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ab960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab964: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ab964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ab968: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ab968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1ab96c: 0x8e302038  lw          $s0, 0x2038($s1)
    ctx->pc = 0x1ab96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8248)));
    // 0x1ab970: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ab970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ab974: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1ab974u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1ab978: 0xc069616  jal         func_1A5858
    ctx->pc = 0x1AB978u;
    SET_GPR_U32(ctx, 31, 0x1AB980u);
    ctx->pc = 0x1AB97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB978u;
            // 0x1ab97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5858u;
    if (runtime->hasFunction(0x1A5858u)) {
        auto targetFn = runtime->lookupFunction(0x1A5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB980u; }
        if (ctx->pc != 0x1AB980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5858_0x1a5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB980u; }
        if (ctx->pc != 0x1AB980u) { return; }
    }
    ctx->pc = 0x1AB980u;
label_1ab980:
    // 0x1ab980: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x1AB980u;
    {
        const bool branch_taken_0x1ab980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab980) {
            ctx->pc = 0x1AB984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB980u;
            // 0x1ab984: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABB5Cu;
            goto label_1abb5c;
        }
    }
    ctx->pc = 0x1AB988u;
    // 0x1ab988: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ab988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ab98c: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1AB98Cu;
    {
        const bool branch_taken_0x1ab98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB98Cu;
            // 0x1ab990: 0x240500ce  addiu       $a1, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab98c) {
            ctx->pc = 0x1ABB58u;
            goto label_1abb58;
        }
    }
    ctx->pc = 0x1AB994u;
    // 0x1ab994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ab994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab998: 0xc06af8a  jal         func_1ABE28
    ctx->pc = 0x1AB998u;
    SET_GPR_U32(ctx, 31, 0x1AB9A0u);
    ctx->pc = 0x1AB99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB998u;
            // 0x1ab99c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE28u;
    if (runtime->hasFunction(0x1ABE28u)) {
        auto targetFn = runtime->lookupFunction(0x1ABE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9A0u; }
        if (ctx->pc != 0x1AB9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABE28_0x1abe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9A0u; }
        if (ctx->pc != 0x1AB9A0u) { return; }
    }
    ctx->pc = 0x1AB9A0u;
label_1ab9a0:
    // 0x1ab9a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ab9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab9a8: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB9A8u;
    {
        const bool branch_taken_0x1ab9a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9A8u;
            // 0x1ab9ac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9a8) {
            ctx->pc = 0x1AB9F8u;
            goto label_1ab9f8;
        }
    }
    ctx->pc = 0x1AB9B0u;
    // 0x1ab9b0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB9B0u;
    {
        const bool branch_taken_0x1ab9b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9B0u;
            // 0x1ab9b4: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9b0) {
            ctx->pc = 0x1AB9C8u;
            goto label_1ab9c8;
        }
    }
    ctx->pc = 0x1AB9B8u;
    // 0x1ab9b8: 0xc06af4e  jal         func_1ABD38
    ctx->pc = 0x1AB9B8u;
    SET_GPR_U32(ctx, 31, 0x1AB9C0u);
    ctx->pc = 0x1AB9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9B8u;
            // 0x1ab9bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD38u;
    if (runtime->hasFunction(0x1ABD38u)) {
        auto targetFn = runtime->lookupFunction(0x1ABD38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9C0u; }
        if (ctx->pc != 0x1AB9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABD38_0x1abd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9C0u; }
        if (ctx->pc != 0x1AB9C0u) { return; }
    }
    ctx->pc = 0x1AB9C0u;
label_1ab9c0:
    // 0x1ab9c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB9C0u;
    {
        const bool branch_taken_0x1ab9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9C0u;
            // 0x1ab9c4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9c0) {
            ctx->pc = 0x1AB9E0u;
            goto label_1ab9e0;
        }
    }
    ctx->pc = 0x1AB9C8u;
label_1ab9c8:
    // 0x1ab9c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ab9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ab9cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ab9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab9d0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1ab9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1ab9d4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1ab9d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ab9d8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1ab9d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ab9dc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1ab9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1ab9e0:
    // 0x1ab9e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ab9e4: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1AB9E4u;
    {
        const bool branch_taken_0x1ab9e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AB9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9E4u;
            // 0x1ab9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9e4) {
            ctx->pc = 0x1ABB58u;
            goto label_1abb58;
        }
    }
    ctx->pc = 0x1AB9ECu;
    // 0x1ab9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab9f0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1AB9F0u;
    {
        const bool branch_taken_0x1ab9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9F0u;
            // 0x1ab9f4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9f0) {
            ctx->pc = 0x1ABB54u;
            goto label_1abb54;
        }
    }
    ctx->pc = 0x1AB9F8u;
label_1ab9f8:
    // 0x1ab9f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ab9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab9fc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1ab9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1aba00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aba00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba04: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x1aba04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1aba08: 0x14800053  bnez        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1ABA08u;
    {
        const bool branch_taken_0x1aba08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA08u;
            // 0x1aba0c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba08) {
            ctx->pc = 0x1ABB58u;
            goto label_1abb58;
        }
    }
    ctx->pc = 0x1ABA10u;
    // 0x1aba10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aba10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba14: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1aba14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1aba18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba1c: 0xc06971e  jal         func_1A5C78
    ctx->pc = 0x1ABA1Cu;
    SET_GPR_U32(ctx, 31, 0x1ABA24u);
    ctx->pc = 0x1ABA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA1Cu;
            // 0x1aba20: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C78u;
    if (runtime->hasFunction(0x1A5C78u)) {
        auto targetFn = runtime->lookupFunction(0x1A5C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA24u; }
        if (ctx->pc != 0x1ABA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C78_0x1a5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA24u; }
        if (ctx->pc != 0x1ABA24u) { return; }
    }
    ctx->pc = 0x1ABA24u;
label_1aba24:
    // 0x1aba24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1aba24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aba28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba2c: 0xc06aede  jal         func_1ABB78
    ctx->pc = 0x1ABA2Cu;
    SET_GPR_U32(ctx, 31, 0x1ABA34u);
    ctx->pc = 0x1ABA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA2Cu;
            // 0x1aba30: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABB78u;
    if (runtime->hasFunction(0x1ABB78u)) {
        auto targetFn = runtime->lookupFunction(0x1ABB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA34u; }
        if (ctx->pc != 0x1ABA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB78_0x1abb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA34u; }
        if (ctx->pc != 0x1ABA34u) { return; }
    }
    ctx->pc = 0x1ABA34u;
label_1aba34:
    // 0x1aba34: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ABA34u;
    {
        const bool branch_taken_0x1aba34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA34u;
            // 0x1aba38: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba34) {
            ctx->pc = 0x1ABA94u;
            goto label_1aba94;
        }
    }
    ctx->pc = 0x1ABA3Cu;
    // 0x1aba3c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABA3Cu;
    {
        const bool branch_taken_0x1aba3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA3Cu;
            // 0x1aba40: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba3c) {
            ctx->pc = 0x1ABA58u;
            goto label_1aba58;
        }
    }
    ctx->pc = 0x1ABA44u;
    // 0x1aba44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1aba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aba48: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1aba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aba4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABA4Cu;
    {
        const bool branch_taken_0x1aba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA4Cu;
            // 0x1aba50: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba4c) {
            ctx->pc = 0x1ABA60u;
            goto label_1aba60;
        }
    }
    ctx->pc = 0x1ABA54u;
    // 0x1aba54: 0x0  nop
    ctx->pc = 0x1aba54u;
    // NOP
label_1aba58:
    // 0x1aba58: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1aba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aba5c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1aba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aba60:
    // 0x1aba60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1aba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aba64: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ABA64u;
    {
        const bool branch_taken_0x1aba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ABA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA64u;
            // 0x1aba68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba64) {
            ctx->pc = 0x1ABA94u;
            goto label_1aba94;
        }
    }
    ctx->pc = 0x1ABA6Cu;
    // 0x1aba6c: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x1aba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1aba70: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x1aba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1aba74: 0xc06afe0  jal         func_1ABF80
    ctx->pc = 0x1ABA74u;
    SET_GPR_U32(ctx, 31, 0x1ABA7Cu);
    ctx->pc = 0x1ABA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA74u;
            // 0x1aba78: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF80u;
    if (runtime->hasFunction(0x1ABF80u)) {
        auto targetFn = runtime->lookupFunction(0x1ABF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA7Cu; }
        if (ctx->pc != 0x1ABA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABF80_0x1abf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA7Cu; }
        if (ctx->pc != 0x1ABA7Cu) { return; }
    }
    ctx->pc = 0x1ABA7Cu;
label_1aba7c:
    // 0x1aba7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba80: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1aba80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aba84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aba84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aba88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba8c: 0xc06973a  jal         func_1A5CE8
    ctx->pc = 0x1ABA8Cu;
    SET_GPR_U32(ctx, 31, 0x1ABA94u);
    ctx->pc = 0x1ABA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA8Cu;
            // 0x1aba90: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5CE8u;
    if (runtime->hasFunction(0x1A5CE8u)) {
        auto targetFn = runtime->lookupFunction(0x1A5CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA94u; }
        if (ctx->pc != 0x1ABA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5CE8_0x1a5ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA94u; }
        if (ctx->pc != 0x1ABA94u) { return; }
    }
    ctx->pc = 0x1ABA94u;
label_1aba94:
    // 0x1aba94: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1aba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1aba98: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ABA98u;
    {
        const bool branch_taken_0x1aba98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba98) {
            ctx->pc = 0x1ABB2Cu;
            goto label_1abb2c;
        }
    }
    ctx->pc = 0x1ABAA0u;
    // 0x1abaa0: 0xc064b62  jal         func_192D88
    ctx->pc = 0x1ABAA0u;
    SET_GPR_U32(ctx, 31, 0x1ABAA8u);
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABAA8u; }
        if (ctx->pc != 0x1ABAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABAA8u; }
        if (ctx->pc != 0x1ABAA8u) { return; }
    }
    ctx->pc = 0x1ABAA8u;
label_1abaa8:
    // 0x1abaa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1abaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abaac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1abaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1abab0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1abab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abab4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABAB4u;
    {
        const bool branch_taken_0x1abab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAB4u;
            // 0x1abab8: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abab4) {
            ctx->pc = 0x1ABAE0u;
            goto label_1abae0;
        }
    }
    ctx->pc = 0x1ABABCu;
    // 0x1ababc: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x1ababcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1abac0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1ABAC0u;
    {
        const bool branch_taken_0x1abac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAC0u;
            // 0x1abac4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abac0) {
            ctx->pc = 0x1ABB40u;
            goto label_1abb40;
        }
    }
    ctx->pc = 0x1ABAC8u;
    // 0x1abac8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1abac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1abacc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABACCu;
    {
        const bool branch_taken_0x1abacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABACCu;
            // 0x1abad0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abacc) {
            ctx->pc = 0x1ABAF8u;
            goto label_1abaf8;
        }
    }
    ctx->pc = 0x1ABAD4u;
    // 0x1abad4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1ABAD4u;
    {
        const bool branch_taken_0x1abad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAD4u;
            // 0x1abad8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abad4) {
            ctx->pc = 0x1ABB48u;
            goto label_1abb48;
        }
    }
    ctx->pc = 0x1ABADCu;
    // 0x1abadc: 0x0  nop
    ctx->pc = 0x1abadcu;
    // NOP
label_1abae0:
    // 0x1abae0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1abae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abae4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1abae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1abae8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ABAE8u;
    {
        const bool branch_taken_0x1abae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAE8u;
            // 0x1abaec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abae8) {
            ctx->pc = 0x1ABB40u;
            goto label_1abb40;
        }
    }
    ctx->pc = 0x1ABAF0u;
    // 0x1abaf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABAF0u;
    {
        const bool branch_taken_0x1abaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAF0u;
            // 0x1abaf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaf0) {
            ctx->pc = 0x1ABB0Cu;
            goto label_1abb0c;
        }
    }
    ctx->pc = 0x1ABAF8u;
label_1abaf8:
    // 0x1abaf8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1abaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abafc: 0x30420048  andi        $v0, $v0, 0x48
    ctx->pc = 0x1abafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)72);
    // 0x1abb00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ABB00u;
    {
        const bool branch_taken_0x1abb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB00u;
            // 0x1abb04: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb00) {
            ctx->pc = 0x1ABB40u;
            goto label_1abb40;
        }
    }
    ctx->pc = 0x1ABB08u;
    // 0x1abb08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1abb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1abb0c:
    // 0x1abb0c: 0xc06af8a  jal         func_1ABE28
    ctx->pc = 0x1ABB0Cu;
    SET_GPR_U32(ctx, 31, 0x1ABB14u);
    ctx->pc = 0x1ABB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB0Cu;
            // 0x1abb10: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE28u;
    if (runtime->hasFunction(0x1ABE28u)) {
        auto targetFn = runtime->lookupFunction(0x1ABE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB14u; }
        if (ctx->pc != 0x1ABB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABE28_0x1abe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB14u; }
        if (ctx->pc != 0x1ABB14u) { return; }
    }
    ctx->pc = 0x1ABB14u;
label_1abb14:
    // 0x1abb14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1abb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb18: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABB18u;
    {
        const bool branch_taken_0x1abb18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abb18) {
            ctx->pc = 0x1ABB2Cu;
            goto label_1abb2c;
        }
    }
    ctx->pc = 0x1ABB20u;
    // 0x1abb20: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1abb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1abb24: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ABB24u;
    {
        const bool branch_taken_0x1abb24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ABB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB24u;
            // 0x1abb28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb24) {
            ctx->pc = 0x1ABB48u;
            goto label_1abb48;
        }
    }
    ctx->pc = 0x1ABB2Cu;
label_1abb2c:
    // 0x1abb2c: 0xc06af68  jal         func_1ABDA0
    ctx->pc = 0x1ABB2Cu;
    SET_GPR_U32(ctx, 31, 0x1ABB34u);
    ctx->pc = 0x1ABB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB2Cu;
            // 0x1abb30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABDA0u;
    if (runtime->hasFunction(0x1ABDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB34u; }
        if (ctx->pc != 0x1ABB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABDA0_0x1abda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB34u; }
        if (ctx->pc != 0x1ABB34u) { return; }
    }
    ctx->pc = 0x1ABB34u;
label_1abb34:
    // 0x1abb34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABB34u;
    {
        const bool branch_taken_0x1abb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB34u;
            // 0x1abb38: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb34) {
            ctx->pc = 0x1ABB5Cu;
            goto label_1abb5c;
        }
    }
    ctx->pc = 0x1ABB3Cu;
    // 0x1abb3c: 0x0  nop
    ctx->pc = 0x1abb3cu;
    // NOP
label_1abb40:
    // 0x1abb40: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1abb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1abb44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1abb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1abb48:
    // 0x1abb48: 0xc06af4e  jal         func_1ABD38
    ctx->pc = 0x1ABB48u;
    SET_GPR_U32(ctx, 31, 0x1ABB50u);
    ctx->pc = 0x1ABB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB48u;
            // 0x1abb4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD38u;
    if (runtime->hasFunction(0x1ABD38u)) {
        auto targetFn = runtime->lookupFunction(0x1ABD38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB50u; }
        if (ctx->pc != 0x1ABB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABD38_0x1abd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB50u; }
        if (ctx->pc != 0x1ABB50u) { return; }
    }
    ctx->pc = 0x1ABB50u;
label_1abb50:
    // 0x1abb50: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1abb50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1abb54:
    // 0x1abb54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abb58:
    // 0x1abb58: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1abb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1abb5c:
    // 0x1abb5c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1abb5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abb60: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1abb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abb64: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1abb64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1abb68: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1abb68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1abb6c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1abb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1abb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB70u;
            // 0x1abb74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABB78u;
}
