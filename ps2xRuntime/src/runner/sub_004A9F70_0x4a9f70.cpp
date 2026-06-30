#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9F70
// Address: 0x4a9f70 - 0x4aa110
void sub_004A9F70_0x4a9f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9F70_0x4a9f70");
#endif

    switch (ctx->pc) {
        case 0x4a9ff4u: goto label_4a9ff4;
        case 0x4aa0f4u: goto label_4aa0f4;
        default: break;
    }

    ctx->pc = 0x4a9f70u;

    // 0x4a9f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a9f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a9f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9f78: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4a9f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a9f7c: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x4a9f7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4a9f80: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x4A9F80u;
    {
        const bool branch_taken_0x4a9f80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9F80u;
            // 0x4a9f84: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9f80) {
            ctx->pc = 0x4A9FFCu;
            goto label_4a9ffc;
        }
    }
    ctx->pc = 0x4A9F88u;
    // 0x4a9f88: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4a9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a9f8c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9F8Cu;
    {
        const bool branch_taken_0x4a9f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9f8c) {
            ctx->pc = 0x4A9F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9F8Cu;
            // 0x4a9f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9FA4u;
            goto label_4a9fa4;
        }
    }
    ctx->pc = 0x4A9F94u;
    // 0x4a9f94: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4a9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a9f98: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a9f9c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x4a9f9cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a9fa0: 0x1010  mfhi        $v0
    ctx->pc = 0x4a9fa0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4a9fa4:
    // 0x4a9fa4: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x4a9fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4a9fa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a9fac: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x4a9facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x4a9fb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4a9fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9fb4: 0x24e73fa8  addiu       $a3, $a3, 0x3FA8
    ctx->pc = 0x4a9fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16296));
    // 0x4a9fb8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4a9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a9fbc: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x4a9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x4a9fc0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4a9fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x4a9fc4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4a9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a9fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a9fcc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4a9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a9fd0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x4a9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x4a9fd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a9fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a9fdc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4a9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a9fe0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4a9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4a9fe4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a9fe8: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x4a9fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a9fec: 0xc12aa04  jal         func_4AA810
    ctx->pc = 0x4A9FECu;
    SET_GPR_U32(ctx, 31, 0x4A9FF4u);
    ctx->pc = 0x4A9FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9FECu;
            // 0x4a9ff0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA810u;
    if (runtime->hasFunction(0x4AA810u)) {
        auto targetFn = runtime->lookupFunction(0x4AA810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9FF4u; }
        if (ctx->pc != 0x4A9FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA810_0x4aa810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9FF4u; }
        if (ctx->pc != 0x4A9FF4u) { return; }
    }
    ctx->pc = 0x4A9FF4u;
label_4a9ff4:
    // 0x4a9ff4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x4A9FF4u;
    {
        const bool branch_taken_0x4a9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9FF4u;
            // 0x4a9ff8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ff4) {
            ctx->pc = 0x4AA104u;
            goto label_4aa104;
        }
    }
    ctx->pc = 0x4A9FFCu;
label_4a9ffc:
    // 0x4a9ffc: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x4a9ffcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4aa000: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x4AA000u;
    {
        const bool branch_taken_0x4aa000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa000) {
            ctx->pc = 0x4AA100u;
            goto label_4aa100;
        }
    }
    ctx->pc = 0x4AA008u;
    // 0x4aa008: 0x50a0003c  beql        $a1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x4AA008u;
    {
        const bool branch_taken_0x4aa008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa008) {
            ctx->pc = 0x4AA00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA008u;
            // 0x4aa00c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA0FCu;
            goto label_4aa0fc;
        }
    }
    ctx->pc = 0x4AA010u;
    // 0x4aa010: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4aa010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4aa014: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x4aa014u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4aa018: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4aa018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4aa01c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4aa01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4aa020: 0x1223821  addu        $a3, $t1, $v0
    ctx->pc = 0x4aa020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4aa024: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4aa024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4aa028: 0xe91023  subu        $v0, $a3, $t1
    ctx->pc = 0x4aa028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4aa02c: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x4aa02cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x4aa030: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA030u;
    {
        const bool branch_taken_0x4aa030 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4AA034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA030u;
            // 0x4aa034: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa030) {
            ctx->pc = 0x4AA040u;
            goto label_4aa040;
        }
    }
    ctx->pc = 0x4AA038u;
    // 0x4aa038: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4aa038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4aa03c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4aa03cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4aa040:
    // 0x4aa040: 0x1092023  subu        $a0, $t0, $t1
    ctx->pc = 0x4aa040u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4aa044: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA044u;
    {
        const bool branch_taken_0x4aa044 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4AA048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA044u;
            // 0x4aa048: 0x41083  sra         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa044) {
            ctx->pc = 0x4AA054u;
            goto label_4aa054;
        }
    }
    ctx->pc = 0x4AA04Cu;
    // 0x4aa04c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x4aa04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x4aa050: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4aa050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4aa054:
    // 0x4aa054: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x4aa054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4aa058: 0x4830003  bgezl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA058u;
    {
        const bool branch_taken_0x4aa058 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x4aa058) {
            ctx->pc = 0x4AA05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA058u;
            // 0x4aa05c: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA068u;
            goto label_4aa068;
        }
    }
    ctx->pc = 0x4AA060u;
    // 0x4aa060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AA060u;
    {
        const bool branch_taken_0x4aa060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA060u;
            // 0x4aa064: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa060) {
            ctx->pc = 0x4AA074u;
            goto label_4aa074;
        }
    }
    ctx->pc = 0x4AA068u;
label_4aa068:
    // 0x4aa068: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA068u;
    {
        const bool branch_taken_0x4aa068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa068) {
            ctx->pc = 0x4AA06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA068u;
            // 0x4aa06c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA078u;
            goto label_4aa078;
        }
    }
    ctx->pc = 0x4AA070u;
    // 0x4aa070: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x4aa070u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4aa074:
    // 0x4aa074: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4aa074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4aa078:
    // 0x4aa078: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x4aa078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x4aa07c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x4aa07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4aa080: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x4aa080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x4aa084: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4aa084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4aa088: 0xafa90024  sw          $t1, 0x24($sp)
    ctx->pc = 0x4aa088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    // 0x4aa08c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4aa08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4aa090: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AA090u;
    {
        const bool branch_taken_0x4aa090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa090) {
            ctx->pc = 0x4AA094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA090u;
            // 0x4aa094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA0ACu;
            goto label_4aa0ac;
        }
    }
    ctx->pc = 0x4AA098u;
    // 0x4aa098: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4aa098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4aa09c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4aa09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4aa0a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4aa0a4: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x4aa0a4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4aa0a8: 0x1010  mfhi        $v0
    ctx->pc = 0x4aa0a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4aa0ac:
    // 0x4aa0ac: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x4aa0acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4aa0b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4aa0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4aa0b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4aa0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4aa0b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4aa0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa0bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4aa0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4aa0c0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x4aa0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4aa0c4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4aa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4aa0c8: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x4aa0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x4aa0cc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4aa0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4aa0d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4aa0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4aa0d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4aa0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4aa0d8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4aa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4aa0dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x4aa0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x4aa0e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4aa0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4aa0e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4aa0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4aa0e8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4aa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4aa0ec: 0xc12a940  jal         func_4AA500
    ctx->pc = 0x4AA0ECu;
    SET_GPR_U32(ctx, 31, 0x4AA0F4u);
    ctx->pc = 0x4AA0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA0ECu;
            // 0x4aa0f0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA500u;
    if (runtime->hasFunction(0x4AA500u)) {
        auto targetFn = runtime->lookupFunction(0x4AA500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA0F4u; }
        if (ctx->pc != 0x4AA0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA500_0x4aa500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA0F4u; }
        if (ctx->pc != 0x4AA0F4u) { return; }
    }
    ctx->pc = 0x4AA0F4u;
label_4aa0f4:
    // 0x4aa0f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA0F4u;
    {
        const bool branch_taken_0x4aa0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa0f4) {
            ctx->pc = 0x4AA100u;
            goto label_4aa100;
        }
    }
    ctx->pc = 0x4AA0FCu;
label_4aa0fc:
    // 0x4aa0fc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x4aa0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_4aa100:
    // 0x4aa100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aa104:
    // 0x4aa104: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA104u;
            // 0x4aa108: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AA10Cu;
    // 0x4aa10c: 0x0  nop
    ctx->pc = 0x4aa10cu;
    // NOP
}
