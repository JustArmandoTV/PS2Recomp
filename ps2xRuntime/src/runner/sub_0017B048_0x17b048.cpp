#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B048
// Address: 0x17b048 - 0x17b170
void sub_0017B048_0x17b048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B048_0x17b048");
#endif

    switch (ctx->pc) {
        case 0x17b074u: goto label_17b074;
        case 0x17b0a4u: goto label_17b0a4;
        case 0x17b0acu: goto label_17b0ac;
        case 0x17b0c0u: goto label_17b0c0;
        case 0x17b0f8u: goto label_17b0f8;
        case 0x17b100u: goto label_17b100;
        case 0x17b114u: goto label_17b114;
        case 0x17b130u: goto label_17b130;
        default: break;
    }

    ctx->pc = 0x17b048u;

    // 0x17b048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b04c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b050: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b054: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x17b054u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x17b058: 0x266443c4  addiu       $a0, $s3, 0x43C4
    ctx->pc = 0x17b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17348));
    // 0x17b05c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b068: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b06c: 0xc06229a  jal         func_188A68
    ctx->pc = 0x17B06Cu;
    SET_GPR_U32(ctx, 31, 0x17B074u);
    ctx->pc = 0x17B070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B06Cu;
            // 0x17b070: 0x24514388  addiu       $s1, $v0, 0x4388 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 17288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A68u;
    if (runtime->hasFunction(0x188A68u)) {
        auto targetFn = runtime->lookupFunction(0x188A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B074u; }
        if (ctx->pc != 0x17B074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188A68_0x188a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B074u; }
        if (ctx->pc != 0x17B074u) { return; }
    }
    ctx->pc = 0x17B074u;
label_17b074:
    // 0x17b074: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x17B074u;
    {
        const bool branch_taken_0x17b074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B074u;
            // 0x17b078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b074) {
            ctx->pc = 0x17B134u;
            goto label_17b134;
        }
    }
    ctx->pc = 0x17B07Cu;
    // 0x17b07c: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x17b07cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x17b080: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B080u;
    {
        const bool branch_taken_0x17b080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B080u;
            // 0x17b084: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b080) {
            ctx->pc = 0x17B0C4u;
            goto label_17b0c4;
        }
    }
    ctx->pc = 0x17B088u;
    // 0x17b088: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b08c: 0x245243c8  addiu       $s2, $v0, 0x43C8
    ctx->pc = 0x17b08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17352));
    // 0x17b090: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17b094: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B094u;
    {
        const bool branch_taken_0x17b094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x17b094) {
            ctx->pc = 0x17B0A4u;
            goto label_17b0a4;
        }
    }
    ctx->pc = 0x17B09Cu;
    // 0x17b09c: 0xc061f8c  jal         func_187E30
    ctx->pc = 0x17B09Cu;
    SET_GPR_U32(ctx, 31, 0x17B0A4u);
    ctx->pc = 0x187E30u;
    if (runtime->hasFunction(0x187E30u)) {
        auto targetFn = runtime->lookupFunction(0x187E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0A4u; }
        if (ctx->pc != 0x17B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E30_0x187e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0A4u; }
        if (ctx->pc != 0x17B0A4u) { return; }
    }
    ctx->pc = 0x17B0A4u;
label_17b0a4:
    // 0x17b0a4: 0xc05eb20  jal         func_17AC80
    ctx->pc = 0x17B0A4u;
    SET_GPR_U32(ctx, 31, 0x17B0ACu);
    ctx->pc = 0x17B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B0A4u;
            // 0x17b0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AC80u;
    if (runtime->hasFunction(0x17AC80u)) {
        auto targetFn = runtime->lookupFunction(0x17AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0ACu; }
        if (ctx->pc != 0x17B0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AC80_0x17ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0ACu; }
        if (ctx->pc != 0x17B0ACu) { return; }
    }
    ctx->pc = 0x17B0ACu;
label_17b0ac:
    // 0x17b0ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17b0b0: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B0B0u;
    {
        const bool branch_taken_0x17b0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x17b0b0) {
            ctx->pc = 0x17B0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B0B0u;
            // 0x17b0b4: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B0C4u;
            goto label_17b0c4;
        }
    }
    ctx->pc = 0x17B0B8u;
    // 0x17b0b8: 0xc061faa  jal         func_187EA8
    ctx->pc = 0x17B0B8u;
    SET_GPR_U32(ctx, 31, 0x17B0C0u);
    ctx->pc = 0x187EA8u;
    if (runtime->hasFunction(0x187EA8u)) {
        auto targetFn = runtime->lookupFunction(0x187EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0C0u; }
        if (ctx->pc != 0x17B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187EA8_0x187ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0C0u; }
        if (ctx->pc != 0x17B0C0u) { return; }
    }
    ctx->pc = 0x17B0C0u;
label_17b0c0:
    // 0x17b0c0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x17b0c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_17b0c4:
    // 0x17b0c4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x17b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x17b0c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b0cc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17b0ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17b0d0: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17B0D0u;
    {
        const bool branch_taken_0x17b0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B0D0u;
            // 0x17b0d4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b0d0) {
            ctx->pc = 0x17B118u;
            goto label_17b118;
        }
    }
    ctx->pc = 0x17B0D8u;
    // 0x17b0d8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b0dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b0e0: 0x247043cc  addiu       $s0, $v1, 0x43CC
    ctx->pc = 0x17b0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 17356));
    // 0x17b0e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b0e8: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B0E8u;
    {
        const bool branch_taken_0x17b0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17b0e8) {
            ctx->pc = 0x17B0F8u;
            goto label_17b0f8;
        }
    }
    ctx->pc = 0x17B0F0u;
    // 0x17b0f0: 0xc061f8c  jal         func_187E30
    ctx->pc = 0x17B0F0u;
    SET_GPR_U32(ctx, 31, 0x17B0F8u);
    ctx->pc = 0x187E30u;
    if (runtime->hasFunction(0x187E30u)) {
        auto targetFn = runtime->lookupFunction(0x187E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0F8u; }
        if (ctx->pc != 0x17B0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E30_0x187e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B0F8u; }
        if (ctx->pc != 0x17B0F8u) { return; }
    }
    ctx->pc = 0x17B0F8u;
label_17b0f8:
    // 0x17b0f8: 0xc05eb9a  jal         func_17AE68
    ctx->pc = 0x17B0F8u;
    SET_GPR_U32(ctx, 31, 0x17B100u);
    ctx->pc = 0x17B0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B0F8u;
            // 0x17b0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AE68u;
    if (runtime->hasFunction(0x17AE68u)) {
        auto targetFn = runtime->lookupFunction(0x17AE68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B100u; }
        if (ctx->pc != 0x17B100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AE68_0x17ae68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B100u; }
        if (ctx->pc != 0x17B100u) { return; }
    }
    ctx->pc = 0x17B100u;
label_17b100:
    // 0x17b100: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b104: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B104u;
    {
        const bool branch_taken_0x17b104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17b104) {
            ctx->pc = 0x17B108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B104u;
            // 0x17b108: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B118u;
            goto label_17b118;
        }
    }
    ctx->pc = 0x17B10Cu;
    // 0x17b10c: 0xc061faa  jal         func_187EA8
    ctx->pc = 0x17B10Cu;
    SET_GPR_U32(ctx, 31, 0x17B114u);
    ctx->pc = 0x187EA8u;
    if (runtime->hasFunction(0x187EA8u)) {
        auto targetFn = runtime->lookupFunction(0x187EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B114u; }
        if (ctx->pc != 0x17B114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187EA8_0x187ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B114u; }
        if (ctx->pc != 0x17B114u) { return; }
    }
    ctx->pc = 0x17B114u;
label_17b114:
    // 0x17b114: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17b118:
    // 0x17b118: 0x24424400  addiu       $v0, $v0, 0x4400
    ctx->pc = 0x17b118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17408));
    // 0x17b11c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b120: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B120u;
    {
        const bool branch_taken_0x17b120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b120) {
            ctx->pc = 0x17B124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B120u;
            // 0x17b124: 0xae6043c4  sw          $zero, 0x43C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 17348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B134u;
            goto label_17b134;
        }
    }
    ctx->pc = 0x17B128u;
    // 0x17b128: 0xc05ea48  jal         func_17A920
    ctx->pc = 0x17B128u;
    SET_GPR_U32(ctx, 31, 0x17B130u);
    ctx->pc = 0x17A920u;
    if (runtime->hasFunction(0x17A920u)) {
        auto targetFn = runtime->lookupFunction(0x17A920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B130u; }
        if (ctx->pc != 0x17B130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A920_0x17a920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B130u; }
        if (ctx->pc != 0x17B130u) { return; }
    }
    ctx->pc = 0x17B130u;
label_17b130:
    // 0x17b130: 0xae6043c4  sw          $zero, 0x43C4($s3)
    ctx->pc = 0x17b130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17348), GPR_U32(ctx, 0));
label_17b134:
    // 0x17b134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b13c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b13cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b140: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b144: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b148: 0x3e00008  jr          $ra
    ctx->pc = 0x17B148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B148u;
            // 0x17b14c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B150u;
    // 0x17b150: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b154: 0x3e00008  jr          $ra
    ctx->pc = 0x17B154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B154u;
            // 0x17b158: 0x80624389  lb          $v0, 0x4389($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 17289)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B15Cu;
    // 0x17b15c: 0x0  nop
    ctx->pc = 0x17b15cu;
    // NOP
    // 0x17b160: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b164: 0x3e00008  jr          $ra
    ctx->pc = 0x17B164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B164u;
            // 0x17b168: 0x8c6243bc  lw          $v0, 0x43BC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17340)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B16Cu;
    // 0x17b16c: 0x0  nop
    ctx->pc = 0x17b16cu;
    // NOP
}
