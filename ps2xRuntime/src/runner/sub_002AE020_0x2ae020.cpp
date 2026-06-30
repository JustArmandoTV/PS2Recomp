#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AE020
// Address: 0x2ae020 - 0x2ae270
void sub_002AE020_0x2ae020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE020_0x2ae020");
#endif

    switch (ctx->pc) {
        case 0x2ae0a4u: goto label_2ae0a4;
        case 0x2ae0c0u: goto label_2ae0c0;
        case 0x2ae0f4u: goto label_2ae0f4;
        case 0x2ae110u: goto label_2ae110;
        case 0x2ae118u: goto label_2ae118;
        case 0x2ae130u: goto label_2ae130;
        case 0x2ae160u: goto label_2ae160;
        case 0x2ae17cu: goto label_2ae17c;
        case 0x2ae1a8u: goto label_2ae1a8;
        case 0x2ae1b4u: goto label_2ae1b4;
        case 0x2ae1d4u: goto label_2ae1d4;
        case 0x2ae1e0u: goto label_2ae1e0;
        case 0x2ae1f4u: goto label_2ae1f4;
        case 0x2ae210u: goto label_2ae210;
        case 0x2ae21cu: goto label_2ae21c;
        case 0x2ae228u: goto label_2ae228;
        case 0x2ae23cu: goto label_2ae23c;
        case 0x2ae250u: goto label_2ae250;
        default: break;
    }

    ctx->pc = 0x2ae020u;

    // 0x2ae020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ae020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ae024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ae024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ae028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ae028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ae02c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ae02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ae030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ae030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ae034: 0x8c83011c  lw          $v1, 0x11C($a0)
    ctx->pc = 0x2ae034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x2ae038: 0x8c860060  lw          $a2, 0x60($a0)
    ctx->pc = 0x2ae038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2ae03c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE03Cu;
    {
        const bool branch_taken_0x2ae03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AE040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE03Cu;
            // 0x2ae040: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae03c) {
            ctx->pc = 0x2AE04Cu;
            goto label_2ae04c;
        }
    }
    ctx->pc = 0x2AE044u;
    // 0x2ae044: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ae044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ae048: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x2ae048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
label_2ae04c:
    // 0x2ae04c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ae04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae050: 0x10a3006a  beq         $a1, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2AE050u;
    {
        const bool branch_taken_0x2ae050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AE054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE050u;
            // 0x2ae054: 0xae25011c  sw          $a1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae050) {
            ctx->pc = 0x2AE1FCu;
            goto label_2ae1fc;
        }
    }
    ctx->pc = 0x2AE058u;
    // 0x2ae058: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ae058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae05c: 0x50a30038  beql        $a1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2AE05Cu;
    {
        const bool branch_taken_0x2ae05c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae05c) {
            ctx->pc = 0x2AE060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE05Cu;
            // 0x2ae060: 0x8cd00d74  lw          $s0, 0xD74($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AE140u;
            goto label_2ae140;
        }
    }
    ctx->pc = 0x2AE064u;
    // 0x2ae064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae068: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AE068u;
    {
        const bool branch_taken_0x2ae068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae068) {
            ctx->pc = 0x2AE06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE068u;
            // 0x2ae06c: 0x8cd00d74  lw          $s0, 0xD74($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AE0D0u;
            goto label_2ae0d0;
        }
    }
    ctx->pc = 0x2AE070u;
    // 0x2ae070: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE070u;
    {
        const bool branch_taken_0x2ae070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae070) {
            ctx->pc = 0x2AE074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE070u;
            // 0x2ae074: 0x8cd00d74  lw          $s0, 0xD74($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AE080u;
            goto label_2ae080;
        }
    }
    ctx->pc = 0x2AE078u;
    // 0x2ae078: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2AE078u;
    {
        const bool branch_taken_0x2ae078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE078u;
            // 0x2ae07c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae078) {
            ctx->pc = 0x2AE254u;
            goto label_2ae254;
        }
    }
    ctx->pc = 0x2AE080u;
label_2ae080:
    // 0x2ae080: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2ae080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2ae084: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2ae084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ae088: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ae088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ae08c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2ae08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ae090: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ae090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae094: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2ae094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2ae098: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ae098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ae09c: 0xc0a545c  jal         func_295170
    ctx->pc = 0x2AE09Cu;
    SET_GPR_U32(ctx, 31, 0x2AE0A4u);
    ctx->pc = 0x2AE0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE09Cu;
            // 0x2ae0a0: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0A4u; }
        if (ctx->pc != 0x2AE0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0A4u; }
        if (ctx->pc != 0x2AE0A4u) { return; }
    }
    ctx->pc = 0x2AE0A4u;
label_2ae0a4:
    // 0x2ae0a4: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x2ae0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
    // 0x2ae0a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ae0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ae0ac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ae0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ae0b0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2ae0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2ae0b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ae0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ae0b8: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2AE0B8u;
    SET_GPR_U32(ctx, 31, 0x2AE0C0u);
    ctx->pc = 0x2AE0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0B8u;
            // 0x2ae0bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0C0u; }
        if (ctx->pc != 0x2AE0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0C0u; }
        if (ctx->pc != 0x2AE0C0u) { return; }
    }
    ctx->pc = 0x2AE0C0u;
label_2ae0c0:
    // 0x2ae0c0: 0xa62000c0  sh          $zero, 0xC0($s1)
    ctx->pc = 0x2ae0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ae0c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ae0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae0c8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2AE0C8u;
    {
        const bool branch_taken_0x2ae0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0C8u;
            // 0x2ae0cc: 0xa62300c4  sh          $v1, 0xC4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0c8) {
            ctx->pc = 0x2AE250u;
            goto label_2ae250;
        }
    }
    ctx->pc = 0x2AE0D0u;
label_2ae0d0:
    // 0x2ae0d0: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2ae0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2ae0d4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2ae0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ae0d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ae0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ae0dc: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2ae0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ae0e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ae0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae0e4: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2ae0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2ae0e8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ae0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ae0ec: 0xc0a545c  jal         func_295170
    ctx->pc = 0x2AE0ECu;
    SET_GPR_U32(ctx, 31, 0x2AE0F4u);
    ctx->pc = 0x2AE0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0ECu;
            // 0x2ae0f0: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0F4u; }
        if (ctx->pc != 0x2AE0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0F4u; }
        if (ctx->pc != 0x2AE0F4u) { return; }
    }
    ctx->pc = 0x2AE0F4u;
label_2ae0f4:
    // 0x2ae0f4: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x2ae0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
    // 0x2ae0f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ae0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ae0fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ae0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ae100: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2ae100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2ae104: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ae104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ae108: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2AE108u;
    SET_GPR_U32(ctx, 31, 0x2AE110u);
    ctx->pc = 0x2AE10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE108u;
            // 0x2ae10c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE110u; }
        if (ctx->pc != 0x2AE110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE110u; }
        if (ctx->pc != 0x2AE110u) { return; }
    }
    ctx->pc = 0x2AE110u;
label_2ae110:
    // 0x2ae110: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2AE110u;
    SET_GPR_U32(ctx, 31, 0x2AE118u);
    ctx->pc = 0x2AE114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE110u;
            // 0x2ae114: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE118u; }
        if (ctx->pc != 0x2AE118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE118u; }
        if (ctx->pc != 0x2AE118u) { return; }
    }
    ctx->pc = 0x2AE118u;
label_2ae118:
    // 0x2ae118: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ae118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ae11c: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2ae11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2ae120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ae120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ae124: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x2ae124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2ae128: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2AE128u;
    SET_GPR_U32(ctx, 31, 0x2AE130u);
    ctx->pc = 0x2AE12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE128u;
            // 0x2ae12c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE130u; }
        if (ctx->pc != 0x2AE130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE130u; }
        if (ctx->pc != 0x2AE130u) { return; }
    }
    ctx->pc = 0x2AE130u;
label_2ae130:
    // 0x2ae130: 0xa62000c0  sh          $zero, 0xC0($s1)
    ctx->pc = 0x2ae130u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ae134: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ae134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae138: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2AE138u;
    {
        const bool branch_taken_0x2ae138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE138u;
            // 0x2ae13c: 0xa62300c4  sh          $v1, 0xC4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae138) {
            ctx->pc = 0x2AE250u;
            goto label_2ae250;
        }
    }
    ctx->pc = 0x2AE140u;
label_2ae140:
    // 0x2ae140: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ae140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ae144: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ae144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ae148: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2ae148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ae14c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ae14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae150: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2ae150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2ae154: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2ae154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2ae158: 0xc0a545c  jal         func_295170
    ctx->pc = 0x2AE158u;
    SET_GPR_U32(ctx, 31, 0x2AE160u);
    ctx->pc = 0x2AE15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE158u;
            // 0x2ae15c: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE160u; }
        if (ctx->pc != 0x2AE160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE160u; }
        if (ctx->pc != 0x2AE160u) { return; }
    }
    ctx->pc = 0x2AE160u;
label_2ae160:
    // 0x2ae160: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x2ae160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
    // 0x2ae164: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ae164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ae168: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ae168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ae16c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2ae16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2ae170: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ae170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ae174: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2AE174u;
    SET_GPR_U32(ctx, 31, 0x2AE17Cu);
    ctx->pc = 0x2AE178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE174u;
            // 0x2ae178: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE17Cu; }
        if (ctx->pc != 0x2AE17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE17Cu; }
        if (ctx->pc != 0x2AE17Cu) { return; }
    }
    ctx->pc = 0x2AE17Cu;
label_2ae17c:
    // 0x2ae17c: 0x962400c6  lhu         $a0, 0xC6($s1)
    ctx->pc = 0x2ae17cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x2ae180: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ae180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae184: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2AE184u;
    {
        const bool branch_taken_0x2ae184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae184) {
            ctx->pc = 0x2AE250u;
            goto label_2ae250;
        }
    }
    ctx->pc = 0x2AE18Cu;
    // 0x2ae18c: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2AE18Cu;
    {
        const bool branch_taken_0x2ae18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae18c) {
            ctx->pc = 0x2AE250u;
            goto label_2ae250;
        }
    }
    ctx->pc = 0x2AE194u;
    // 0x2ae194: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ae194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ae198: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ae198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ae19c: 0x24a51390  addiu       $a1, $a1, 0x1390
    ctx->pc = 0x2ae19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5008));
    // 0x2ae1a0: 0xc0bc684  jal         func_2F1A10
    ctx->pc = 0x2AE1A0u;
    SET_GPR_U32(ctx, 31, 0x2AE1A8u);
    ctx->pc = 0x2AE1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1A0u;
            // 0x2ae1a4: 0x26260070  addiu       $a2, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A10u;
    if (runtime->hasFunction(0x2F1A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1A8u; }
        if (ctx->pc != 0x2AE1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1A10_0x2f1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1A8u; }
        if (ctx->pc != 0x2AE1A8u) { return; }
    }
    ctx->pc = 0x2AE1A8u;
label_2ae1a8:
    // 0x2ae1a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ae1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ae1ac: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x2AE1ACu;
    SET_GPR_U32(ctx, 31, 0x2AE1B4u);
    ctx->pc = 0x2AE1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1ACu;
            // 0x2ae1b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1B4u; }
        if (ctx->pc != 0x2AE1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1B4u; }
        if (ctx->pc != 0x2AE1B4u) { return; }
    }
    ctx->pc = 0x2AE1B4u;
label_2ae1b4:
    // 0x2ae1b4: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2ae1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ae1b8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2ae1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2ae1bc: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x2ae1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2ae1c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2ae1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ae1c4: 0x84420026  lh          $v0, 0x26($v0)
    ctx->pc = 0x2ae1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x2ae1c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae1cc: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2AE1CCu;
    SET_GPR_U32(ctx, 31, 0x2AE1D4u);
    ctx->pc = 0x2AE1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1CCu;
            // 0x2ae1d0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1D4u; }
        if (ctx->pc != 0x2AE1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1D4u; }
        if (ctx->pc != 0x2AE1D4u) { return; }
    }
    ctx->pc = 0x2AE1D4u;
label_2ae1d4:
    // 0x2ae1d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1d8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2AE1D8u;
    SET_GPR_U32(ctx, 31, 0x2AE1E0u);
    ctx->pc = 0x2AE1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1D8u;
            // 0x2ae1dc: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1E0u; }
        if (ctx->pc != 0x2AE1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1E0u; }
        if (ctx->pc != 0x2AE1E0u) { return; }
    }
    ctx->pc = 0x2AE1E0u;
label_2ae1e0:
    // 0x2ae1e0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ae1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ae1e4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2ae1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2ae1e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ae1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1ec: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2AE1ECu;
    SET_GPR_U32(ctx, 31, 0x2AE1F4u);
    ctx->pc = 0x2AE1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE1ECu;
            // 0x2ae1f0: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1F4u; }
        if (ctx->pc != 0x2AE1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1F4u; }
        if (ctx->pc != 0x2AE1F4u) { return; }
    }
    ctx->pc = 0x2AE1F4u;
label_2ae1f4:
    // 0x2ae1f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2AE1F4u;
    {
        const bool branch_taken_0x2ae1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae1f4) {
            ctx->pc = 0x2AE250u;
            goto label_2ae250;
        }
    }
    ctx->pc = 0x2AE1FCu;
label_2ae1fc:
    // 0x2ae1fc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ae1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ae200: 0x24c602e0  addiu       $a2, $a2, 0x2E0
    ctx->pc = 0x2ae200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 736));
    // 0x2ae204: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ae204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ae208: 0xc0bc684  jal         func_2F1A10
    ctx->pc = 0x2AE208u;
    SET_GPR_U32(ctx, 31, 0x2AE210u);
    ctx->pc = 0x2AE20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE208u;
            // 0x2ae20c: 0x24a51390  addiu       $a1, $a1, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A10u;
    if (runtime->hasFunction(0x2F1A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE210u; }
        if (ctx->pc != 0x2AE210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1A10_0x2f1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE210u; }
        if (ctx->pc != 0x2AE210u) { return; }
    }
    ctx->pc = 0x2AE210u;
label_2ae210:
    // 0x2ae210: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ae210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ae214: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x2AE214u;
    SET_GPR_U32(ctx, 31, 0x2AE21Cu);
    ctx->pc = 0x2AE218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE214u;
            // 0x2ae218: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE21Cu; }
        if (ctx->pc != 0x2AE21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE21Cu; }
        if (ctx->pc != 0x2AE21Cu) { return; }
    }
    ctx->pc = 0x2AE21Cu;
label_2ae21c:
    // 0x2ae21c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae220: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x2AE220u;
    SET_GPR_U32(ctx, 31, 0x2AE228u);
    ctx->pc = 0x2AE224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE220u;
            // 0x2ae224: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE228u; }
        if (ctx->pc != 0x2AE228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE228u; }
        if (ctx->pc != 0x2AE228u) { return; }
    }
    ctx->pc = 0x2AE228u;
label_2ae228:
    // 0x2ae228: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ae228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ae22c: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2ae22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2ae230: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x2ae230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2ae234: 0xc0c6250  jal         func_318940
    ctx->pc = 0x2AE234u;
    SET_GPR_U32(ctx, 31, 0x2AE23Cu);
    ctx->pc = 0x2AE238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE234u;
            // 0x2ae238: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE23Cu; }
        if (ctx->pc != 0x2AE23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE23Cu; }
        if (ctx->pc != 0x2AE23Cu) { return; }
    }
    ctx->pc = 0x2AE23Cu;
label_2ae23c:
    // 0x2ae23c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ae23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ae240: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2ae240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2ae244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ae244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae248: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2AE248u;
    SET_GPR_U32(ctx, 31, 0x2AE250u);
    ctx->pc = 0x2AE24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE248u;
            // 0x2ae24c: 0x24c61390  addiu       $a2, $a2, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE250u; }
        if (ctx->pc != 0x2AE250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE250u; }
        if (ctx->pc != 0x2AE250u) { return; }
    }
    ctx->pc = 0x2AE250u;
label_2ae250:
    // 0x2ae250: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ae250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ae254:
    // 0x2ae254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ae254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ae258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae25c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ae25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae260: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE260u;
            // 0x2ae264: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE268u;
    // 0x2ae268: 0x0  nop
    ctx->pc = 0x2ae268u;
    // NOP
    // 0x2ae26c: 0x0  nop
    ctx->pc = 0x2ae26cu;
    // NOP
}
