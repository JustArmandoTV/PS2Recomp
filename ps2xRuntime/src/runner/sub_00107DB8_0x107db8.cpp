#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107DB8
// Address: 0x107db8 - 0x1080d0
void sub_00107DB8_0x107db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107DB8_0x107db8");
#endif

    switch (ctx->pc) {
        case 0x107e98u: goto label_107e98;
        case 0x107eacu: goto label_107eac;
        case 0x107ec4u: goto label_107ec4;
        case 0x107edcu: goto label_107edc;
        default: break;
    }

    ctx->pc = 0x107db8u;

    // 0x107db8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x107db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x107dbc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107dc0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x107dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x107dc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x107dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107dc8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x107dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x107dcc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x107dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x107dd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107dd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107ddc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107de0: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x107de0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x107de4: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x107de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x107de8: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x107DE8u;
    {
        const bool branch_taken_0x107de8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x107de8) {
            ctx->pc = 0x107DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107DE8u;
            // 0x107dec: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107E18u;
            goto label_107e18;
        }
    }
    ctx->pc = 0x107DF0u;
    // 0x107df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107df4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x107df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107df8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x107df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x107dfc: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x107dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x107e00: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x107e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x107e04: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x107e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x107e08: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x107e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x107e0c: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x107e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x107e10: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x107e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x107e14: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x107e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_107e18:
    // 0x107e18: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x107e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x107e1c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x107e1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x107e20: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x107E20u;
    {
        const bool branch_taken_0x107e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E20u;
            // 0x107e24: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e20) {
            ctx->pc = 0x107E44u;
            goto label_107e44;
        }
    }
    ctx->pc = 0x107E28u;
    // 0x107e28: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x107e2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107E2Cu;
    {
        const bool branch_taken_0x107e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E2Cu;
            // 0x107e30: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e2c) {
            ctx->pc = 0x107E48u;
            goto label_107e48;
        }
    }
    ctx->pc = 0x107E34u;
    // 0x107e34: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x107e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x107e38: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x107e38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x107e3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107E3Cu;
    {
        const bool branch_taken_0x107e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E3Cu;
            // 0x107e40: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e3c) {
            ctx->pc = 0x107E50u;
            goto label_107e50;
        }
    }
    ctx->pc = 0x107E44u;
label_107e44:
    // 0x107e44: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x107e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_107e48:
    // 0x107e48: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x107e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x107e4c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x107e4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_107e50:
    // 0x107e50: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x107e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x107e54: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x107e54u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x107e58: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x107e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x107e5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107e60: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x107e60u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x107e64: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x107E64u;
    {
        const bool branch_taken_0x107e64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x107E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E64u;
            // 0x107e68: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e64) {
            ctx->pc = 0x107E78u;
            goto label_107e78;
        }
    }
    ctx->pc = 0x107E6Cu;
    // 0x107e6c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x107e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107e70: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x107E70u;
    {
        const bool branch_taken_0x107e70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x107E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E70u;
            // 0x107e74: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e70) {
            ctx->pc = 0x1080A8u;
            goto label_1080a8;
        }
    }
    ctx->pc = 0x107E78u;
label_107e78:
    // 0x107e78: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x107e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x107e7c: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x107e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x107e80: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x107e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x107e84: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x107e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x107e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e8c: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x107e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x107e90: 0xc0428a0  jal         func_10A280
    ctx->pc = 0x107E90u;
    SET_GPR_U32(ctx, 31, 0x107E98u);
    ctx->pc = 0x107E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107E90u;
            // 0x107e94: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A280u;
    if (runtime->hasFunction(0x10A280u)) {
        auto targetFn = runtime->lookupFunction(0x10A280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107E98u; }
        if (ctx->pc != 0x107E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A280_0x10a280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107E98u; }
        if (ctx->pc != 0x107E98u) { return; }
    }
    ctx->pc = 0x107E98u;
label_107e98:
    // 0x107e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ea0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x107ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ea4: 0xc0428a4  jal         func_10A290
    ctx->pc = 0x107EA4u;
    SET_GPR_U32(ctx, 31, 0x107EACu);
    ctx->pc = 0x107EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107EA4u;
            // 0x107ea8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A290u;
    if (runtime->hasFunction(0x10A290u)) {
        auto targetFn = runtime->lookupFunction(0x10A290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107EACu; }
        if (ctx->pc != 0x107EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A290_0x10a290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107EACu; }
        if (ctx->pc != 0x107EACu) { return; }
    }
    ctx->pc = 0x107EACu;
label_107eac:
    // 0x107eac: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x107eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x107eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x107eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ebc: 0xc0428a4  jal         func_10A290
    ctx->pc = 0x107EBCu;
    SET_GPR_U32(ctx, 31, 0x107EC4u);
    ctx->pc = 0x107EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107EBCu;
            // 0x107ec0: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A290u;
    if (runtime->hasFunction(0x10A290u)) {
        auto targetFn = runtime->lookupFunction(0x10A290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107EC4u; }
        if (ctx->pc != 0x107EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A290_0x10a290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107EC4u; }
        if (ctx->pc != 0x107EC4u) { return; }
    }
    ctx->pc = 0x107EC4u;
label_107ec4:
    // 0x107ec4: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x107ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x107ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ecc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x107eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ed4: 0xc0428a4  jal         func_10A290
    ctx->pc = 0x107ED4u;
    SET_GPR_U32(ctx, 31, 0x107EDCu);
    ctx->pc = 0x107ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107ED4u;
            // 0x107ed8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A290u;
    if (runtime->hasFunction(0x10A290u)) {
        auto targetFn = runtime->lookupFunction(0x10A290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107EDCu; }
        if (ctx->pc != 0x107EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A290_0x10a290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107EDCu; }
        if (ctx->pc != 0x107EDCu) { return; }
    }
    ctx->pc = 0x107EDCu;
label_107edc:
    // 0x107edc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x107edcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ee0: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x107ee4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x107EE4u;
    {
        const bool branch_taken_0x107ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107EE4u;
            // 0x107ee8: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ee4) {
            ctx->pc = 0x107F70u;
            goto label_107f70;
        }
    }
    ctx->pc = 0x107EECu;
    // 0x107eec: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x107eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107ef0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x107ef4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x107ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107ef8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107efc: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x107efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x107f00: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x107f00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x107f04: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x107f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x107f08: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x107f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x107f0c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x107f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x107f10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x107f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107f14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x107f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x107f18: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x107f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x107f1c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x107f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x107f20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x107f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x107f24: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x107f24u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x107f28: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x107f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x107f2c: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x107f2cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x107f30: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x107f30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x107f34: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x107f38: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x107f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x107f3c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x107f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x107f40: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x107f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x107f44: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x107f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x107f48: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x107f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x107f4c: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x107f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x107f50: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x107f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x107f54: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x107f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x107f58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x107f5c: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x107f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x107f60: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x107f60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x107f64: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x107f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x107f68: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x107F68u;
    {
        const bool branch_taken_0x107f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F68u;
            // 0x107f6c: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f68) {
            ctx->pc = 0x107FD8u;
            goto label_107fd8;
        }
    }
    ctx->pc = 0x107F70u;
label_107f70:
    // 0x107f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107f74: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x107F74u;
    {
        const bool branch_taken_0x107f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F74u;
            // 0x107f78: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f74) {
            ctx->pc = 0x107FDCu;
            goto label_107fdc;
        }
    }
    ctx->pc = 0x107F7Cu;
    // 0x107f7c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x107f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107f80: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x107f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107f84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107f88: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x107f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x107f8c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x107f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x107f90: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x107f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x107f94: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x107f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x107f98: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x107f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x107f9c: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x107f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x107fa0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x107fa0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107fa4: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x107fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x107fa8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x107fa8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x107fac: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x107facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x107fb0: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x107fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x107fb4: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x107fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x107fb8: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x107fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x107fbc: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x107fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x107fc0: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x107fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x107fc4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x107fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x107fc8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x107fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x107fcc: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x107fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x107fd0: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x107fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x107fd4: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x107fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_107fd8:
    // 0x107fd8: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_107fdc:
    // 0x107fdc: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x107fe0: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x107fe0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x107fe4: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x107fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x107fe8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x107fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x107fec: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x107fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x107ff0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x107ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x107ff4: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x107ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x107ff8: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x107ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x107ffc: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x107ffcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x108000: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x108000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x108004: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x108004u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x108008: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x108008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x10800c: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x10800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x108010: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x108010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x108014: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x108014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x108018: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x108018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x10801c: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x10801cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x108020: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x108020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x108024: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x108024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x108028: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x108028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x10802c: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x10802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x108030: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x108030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x108034: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x108038: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x108038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x10803c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x10803cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x108040: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x108040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x108044: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x108044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x108048: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x108048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x10804c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x10804cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x108050: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x108050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x108054: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x108054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x108058: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x108058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x10805c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x10805cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x108060: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x108060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x108064: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x108064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x108068: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x108068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x10806c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x10806cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x108070: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x108070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x108074: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x108074u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x108078: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x108078u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x10807c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x10807cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x108080: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x108080u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x108084: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x108084u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x108088: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x108088u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x10808c: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x10808cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x108090: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x108090u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x108094: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x108094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x108098: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x108098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x10809c: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x10809cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x1080a0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1080a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1080a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1080a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1080a8:
    // 0x1080a8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1080a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1080ac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1080acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1080b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1080b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1080b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1080b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1080b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1080b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1080bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1080bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1080c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1080c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1080c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1080C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1080C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1080C4u;
            // 0x1080c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1080CCu;
    // 0x1080cc: 0x0  nop
    ctx->pc = 0x1080ccu;
    // NOP
}
