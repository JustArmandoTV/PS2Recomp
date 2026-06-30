#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ABEF0
// Address: 0x2abef0 - 0x2ac080
void sub_002ABEF0_0x2abef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABEF0_0x2abef0");
#endif

    switch (ctx->pc) {
        case 0x2ac068u: goto label_2ac068;
        default: break;
    }

    ctx->pc = 0x2abef0u;

    // 0x2abef0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2abef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2abef4: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x2abef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x2abef8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x2abef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2abefc: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2abefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2abf00: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2abf00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2abf04: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x2abf04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2abf08: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x2abf08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2abf0c: 0x1810  mfhi        $v1
    ctx->pc = 0x2abf0cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abf10: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x2abf10u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2abf14: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2abf14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2abf18: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2abf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2abf1c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x2abf1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2abf20: 0x5020008  bltzl       $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABF20u;
    {
        const bool branch_taken_0x2abf20 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2abf20) {
            ctx->pc = 0x2ABF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF20u;
            // 0x2abf24: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABF44u;
            goto label_2abf44;
        }
    }
    ctx->pc = 0x2ABF28u;
    // 0x2abf28: 0x501000c  bgez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ABF28u;
    {
        const bool branch_taken_0x2abf28 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2ABF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF28u;
            // 0x2abf2c: 0x838c3  sra         $a3, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf28) {
            ctx->pc = 0x2ABF5Cu;
            goto label_2abf5c;
        }
    }
    ctx->pc = 0x2ABF30u;
    // 0x2abf30: 0x25030007  addiu       $v1, $t0, 0x7
    ctx->pc = 0x2abf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2abf34: 0x338c3  sra         $a3, $v1, 3
    ctx->pc = 0x2abf34u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2abf38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABF38u;
    {
        const bool branch_taken_0x2abf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf38) {
            ctx->pc = 0x2ABF5Cu;
            goto label_2abf5c;
        }
    }
    ctx->pc = 0x2ABF40u;
    // 0x2abf40: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2abf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2abf44:
    // 0x2abf44: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2abf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2abf48: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2abf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2abf4c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABF4Cu;
    {
        const bool branch_taken_0x2abf4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2ABF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF4Cu;
            // 0x2abf50: 0x338c3  sra         $a3, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf4c) {
            ctx->pc = 0x2ABF5Cu;
            goto label_2abf5c;
        }
    }
    ctx->pc = 0x2ABF54u;
    // 0x2abf54: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x2abf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2abf58: 0x338c3  sra         $a3, $v1, 3
    ctx->pc = 0x2abf58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 3));
label_2abf5c:
    // 0x2abf5c: 0x50e00029  beql        $a3, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2ABF5Cu;
    {
        const bool branch_taken_0x2abf5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf5c) {
            ctx->pc = 0x2ABF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF5Cu;
            // 0x2abf60: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC004u;
            goto label_2ac004;
        }
    }
    ctx->pc = 0x2ABF64u;
    // 0x2abf64: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2abf64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2abf68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2abf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2abf6c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2abf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2abf70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABF70u;
    {
        const bool branch_taken_0x2abf70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2ABF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF70u;
            // 0x2abf74: 0x32883  sra         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf70) {
            ctx->pc = 0x2ABF80u;
            goto label_2abf80;
        }
    }
    ctx->pc = 0x2ABF78u;
    // 0x2abf78: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2abf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2abf7c: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x2abf7cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
label_2abf80:
    // 0x2abf80: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x2abf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2abf84: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABF84u;
    {
        const bool branch_taken_0x2abf84 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2ABF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF84u;
            // 0x2abf88: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf84) {
            ctx->pc = 0x2ABF94u;
            goto label_2abf94;
        }
    }
    ctx->pc = 0x2ABF8Cu;
    // 0x2abf8c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2abf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2abf90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2abf90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2abf94:
    // 0x2abf94: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x2abf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2abf98: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABF98u;
    {
        const bool branch_taken_0x2abf98 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2abf98) {
            ctx->pc = 0x2ABF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF98u;
            // 0x2abf9c: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABFACu;
            goto label_2abfac;
        }
    }
    ctx->pc = 0x2ABFA0u;
    // 0x2abfa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABFA0u;
    {
        const bool branch_taken_0x2abfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFA0u;
            // 0x2abfa4: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfa0) {
            ctx->pc = 0x2ABFB8u;
            goto label_2abfb8;
        }
    }
    ctx->pc = 0x2ABFA8u;
    // 0x2abfa8: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2abfa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2abfac:
    // 0x2abfac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABFACu;
    {
        const bool branch_taken_0x2abfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abfac) {
            ctx->pc = 0x2ABFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFACu;
            // 0x2abfb0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABFBCu;
            goto label_2abfbc;
        }
    }
    ctx->pc = 0x2ABFB4u;
    // 0x2abfb4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2abfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2abfb8:
    // 0x2abfb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2abfbc:
    // 0x2abfbc: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2abfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2abfc0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2abfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2abfc4: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x2abfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2abfc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2abfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2abfcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2abfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2abfd0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2abfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2abfd4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2abfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2abfd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2abfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2abfdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2abfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2abfe0: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x2abfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x2abfe4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2abfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2abfe8: 0x24a20320  addiu       $v0, $a1, 0x320
    ctx->pc = 0x2abfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
    // 0x2abfec: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2abfecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2abff0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2abff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2abff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2abff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2abff8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2ABFF8u;
    {
        const bool branch_taken_0x2abff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFF8u;
            // 0x2abffc: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abff8) {
            ctx->pc = 0x2AC020u;
            goto label_2ac020;
        }
    }
    ctx->pc = 0x2AC000u;
    // 0x2ac000: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2ac004:
    // 0x2ac004: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2ac004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ac008: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2ac008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ac00c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ac00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ac010: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac01c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2ac01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2ac020:
    // 0x2ac020: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC020u;
            // 0x2ac024: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC028u;
    // 0x2ac028: 0x0  nop
    ctx->pc = 0x2ac028u;
    // NOP
    // 0x2ac02c: 0x0  nop
    ctx->pc = 0x2ac02cu;
    // NOP
    // 0x2ac030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ac038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac040: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC040u;
    {
        const bool branch_taken_0x2ac040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac040) {
            ctx->pc = 0x2AC044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC040u;
            // 0x2ac044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC06Cu;
            goto label_2ac06c;
        }
    }
    ctx->pc = 0x2AC048u;
    // 0x2ac048: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2ac048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ac04c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ac04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ac050: 0x2463fd88  addiu       $v1, $v1, -0x278
    ctx->pc = 0x2ac050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966664));
    // 0x2ac054: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ac054u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ac058: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC058u;
    {
        const bool branch_taken_0x2ac058 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AC05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC058u;
            // 0x2ac05c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac058) {
            ctx->pc = 0x2AC068u;
            goto label_2ac068;
        }
    }
    ctx->pc = 0x2AC060u;
    // 0x2ac060: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2AC060u;
    SET_GPR_U32(ctx, 31, 0x2AC068u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC068u; }
        if (ctx->pc != 0x2AC068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC068u; }
        if (ctx->pc != 0x2AC068u) { return; }
    }
    ctx->pc = 0x2AC068u;
label_2ac068:
    // 0x2ac068: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ac068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ac06c:
    // 0x2ac06c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac074: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC074u;
            // 0x2ac078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC07Cu;
    // 0x2ac07c: 0x0  nop
    ctx->pc = 0x2ac07cu;
    // NOP
}
