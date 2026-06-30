#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034B020
// Address: 0x34b020 - 0x34b130
void sub_0034B020_0x34b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B020_0x34b020");
#endif

    switch (ctx->pc) {
        case 0x34b0ccu: goto label_34b0cc;
        default: break;
    }

    ctx->pc = 0x34b020u;

    // 0x34b020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b02c: 0x90820758  lbu         $v0, 0x758($a0)
    ctx->pc = 0x34b02cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1880)));
    // 0x34b030: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x34B030u;
    {
        const bool branch_taken_0x34b030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B030u;
            // 0x34b034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b030) {
            ctx->pc = 0x34B11Cu;
            goto label_34b11c;
        }
    }
    ctx->pc = 0x34B038u;
    // 0x34b038: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34b038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x34b03c: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x34b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x34b040: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x34b040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x34b044: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x34b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x34b048: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x34b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34b04c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B04Cu;
    {
        const bool branch_taken_0x34b04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b04c) {
            ctx->pc = 0x34B05Cu;
            goto label_34b05c;
        }
    }
    ctx->pc = 0x34B054u;
    // 0x34b054: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x34B054u;
    {
        const bool branch_taken_0x34b054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B054u;
            // 0x34b058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b054) {
            ctx->pc = 0x34B120u;
            goto label_34b120;
        }
    }
    ctx->pc = 0x34B05Cu;
label_34b05c:
    // 0x34b05c: 0x54800030  bnel        $a0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x34B05Cu;
    {
        const bool branch_taken_0x34b05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b05c) {
            ctx->pc = 0x34B060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B05Cu;
            // 0x34b060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B120u;
            goto label_34b120;
        }
    }
    ctx->pc = 0x34B064u;
    // 0x34b064: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x34B064u;
    {
        const bool branch_taken_0x34b064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b064) {
            ctx->pc = 0x34B110u;
            goto label_34b110;
        }
    }
    ctx->pc = 0x34B06Cu;
    // 0x34b06c: 0x9203075a  lbu         $v1, 0x75A($s0)
    ctx->pc = 0x34b06cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1882)));
    // 0x34b070: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34b074: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x34B074u;
    {
        const bool branch_taken_0x34b074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34b074) {
            ctx->pc = 0x34B078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B074u;
            // 0x34b078: 0x82030759  lb          $v1, 0x759($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1881)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B0DCu;
            goto label_34b0dc;
        }
    }
    ctx->pc = 0x34B07Cu;
    // 0x34b07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b080: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34B080u;
    {
        const bool branch_taken_0x34b080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34b080) {
            ctx->pc = 0x34B0A0u;
            goto label_34b0a0;
        }
    }
    ctx->pc = 0x34B088u;
    // 0x34b088: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B088u;
    {
        const bool branch_taken_0x34b088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b088) {
            ctx->pc = 0x34B08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B088u;
            // 0x34b08c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B098u;
            goto label_34b098;
        }
    }
    ctx->pc = 0x34B090u;
    // 0x34b090: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x34B090u;
    {
        const bool branch_taken_0x34b090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b090) {
            ctx->pc = 0x34B110u;
            goto label_34b110;
        }
    }
    ctx->pc = 0x34B098u;
label_34b098:
    // 0x34b098: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34B098u;
    {
        const bool branch_taken_0x34b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B098u;
            // 0x34b09c: 0xa202075a  sb          $v0, 0x75A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1882), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b098) {
            ctx->pc = 0x34B110u;
            goto label_34b110;
        }
    }
    ctx->pc = 0x34B0A0u;
label_34b0a0:
    // 0x34b0a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34b0a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34b0a8: 0x92050759  lbu         $a1, 0x759($s0)
    ctx->pc = 0x34b0a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1881)));
    // 0x34b0ac: 0x24637578  addiu       $v1, $v1, 0x7578
    ctx->pc = 0x34b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30072));
    // 0x34b0b0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x34b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x34b0b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34b0bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34b0c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b0c4: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x34B0C4u;
    SET_GPR_U32(ctx, 31, 0x34B0CCu);
    ctx->pc = 0x34B0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B0C4u;
            // 0x34b0c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B0CCu; }
        if (ctx->pc != 0x34B0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B0CCu; }
        if (ctx->pc != 0x34B0CCu) { return; }
    }
    ctx->pc = 0x34B0CCu;
label_34b0cc:
    // 0x34b0cc: 0x9202075a  lbu         $v0, 0x75A($s0)
    ctx->pc = 0x34b0ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1882)));
    // 0x34b0d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34b0d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34B0D4u;
    {
        const bool branch_taken_0x34b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B0D4u;
            // 0x34b0d8: 0xa202075a  sb          $v0, 0x75A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1882), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b0d4) {
            ctx->pc = 0x34B110u;
            goto label_34b110;
        }
    }
    ctx->pc = 0x34B0DCu;
label_34b0dc:
    // 0x34b0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b0e0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B0E0u;
    {
        const bool branch_taken_0x34b0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34b0e0) {
            ctx->pc = 0x34B0E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B0E0u;
            // 0x34b0e4: 0xa2000759  sb          $zero, 0x759($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1881), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B0F0u;
            goto label_34b0f0;
        }
    }
    ctx->pc = 0x34B0E8u;
    // 0x34b0e8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34B0E8u;
    {
        const bool branch_taken_0x34b0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b0e8) {
            ctx->pc = 0x34B0ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B0E8u;
            // 0x34b0ec: 0xa2020759  sb          $v0, 0x759($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1881), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B0F0u;
            goto label_34b0f0;
        }
    }
    ctx->pc = 0x34B0F0u;
label_34b0f0:
    // 0x34b0f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x34b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34b0f4: 0xa2000758  sb          $zero, 0x758($s0)
    ctx->pc = 0x34b0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1880), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b0f8: 0x401827  not         $v1, $v0
    ctx->pc = 0x34b0f8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x34b0fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34b100: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x34b100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x34b104: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x34b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x34b108: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34b108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34b10c: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x34b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_34b110:
    // 0x34b110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34B114u;
    {
        const bool branch_taken_0x34b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b114) {
            ctx->pc = 0x34B120u;
            goto label_34b120;
        }
    }
    ctx->pc = 0x34B11Cu;
label_34b11c:
    // 0x34b11c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b120:
    // 0x34b120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b128: 0x3e00008  jr          $ra
    ctx->pc = 0x34B128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B128u;
            // 0x34b12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B130u;
}
