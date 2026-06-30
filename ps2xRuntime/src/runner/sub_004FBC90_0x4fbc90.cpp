#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FBC90
// Address: 0x4fbc90 - 0x4fbe50
void sub_004FBC90_0x4fbc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FBC90_0x4fbc90");
#endif

    ctx->pc = 0x4fbc90u;

    // 0x4fbc90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4fbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4fbc94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4fbc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4fbc98: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4fbc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4fbc9c: 0x8c660968  lw          $a2, 0x968($v1)
    ctx->pc = 0x4fbc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x4fbca0: 0x54c50008  bnel        $a2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FBCA0u;
    {
        const bool branch_taken_0x4fbca0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x4fbca0) {
            ctx->pc = 0x4FBCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBCA0u;
            // 0x4fbca4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBCC4u;
            goto label_4fbcc4;
        }
    }
    ctx->pc = 0x4FBCA8u;
    // 0x4fbca8: 0x8c8500a8  lw          $a1, 0xA8($a0)
    ctx->pc = 0x4fbca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x4fbcac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4fbcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4fbcb0: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x4fbcb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4fbcb4: 0x14200030  bnez        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x4FBCB4u;
    {
        const bool branch_taken_0x4fbcb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FBCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBCB4u;
            // 0x4fbcb8: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbcb4) {
            ctx->pc = 0x4FBD78u;
            goto label_4fbd78;
        }
    }
    ctx->pc = 0x4FBCBCu;
    // 0x4fbcbc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x4FBCBCu;
    {
        const bool branch_taken_0x4fbcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBCBCu;
            // 0x4fbcc0: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbcbc) {
            ctx->pc = 0x4FBD78u;
            goto label_4fbd78;
        }
    }
    ctx->pc = 0x4FBCC4u;
label_4fbcc4:
    // 0x4fbcc4: 0x54c50027  bnel        $a2, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x4FBCC4u;
    {
        const bool branch_taken_0x4fbcc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x4fbcc4) {
            ctx->pc = 0x4FBCC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBCC4u;
            // 0x4fbcc8: 0x8c8500a8  lw          $a1, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBD64u;
            goto label_4fbd64;
        }
    }
    ctx->pc = 0x4FBCCCu;
    // 0x4fbccc: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4fbcccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x4fbcd0: 0x8ca53da0  lw          $a1, 0x3DA0($a1)
    ctx->pc = 0x4fbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15776)));
    // 0x4fbcd4: 0x50a0001d  beql        $a1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x4FBCD4u;
    {
        const bool branch_taken_0x4fbcd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fbcd4) {
            ctx->pc = 0x4FBCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBCD4u;
            // 0x4fbcd8: 0x8c8500a8  lw          $a1, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBD4Cu;
            goto label_4fbd4c;
        }
    }
    ctx->pc = 0x4FBCDCu;
    // 0x4fbcdc: 0x8ca60074  lw          $a2, 0x74($a1)
    ctx->pc = 0x4fbcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x4fbce0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4fbce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fbce4: 0x8c8500fc  lw          $a1, 0xFC($a0)
    ctx->pc = 0x4fbce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x4fbce8: 0x8cc702c4  lw          $a3, 0x2C4($a2)
    ctx->pc = 0x4fbce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
    // 0x4fbcec: 0x50a70012  beql        $a1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x4FBCECu;
    {
        const bool branch_taken_0x4fbcec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x4fbcec) {
            ctx->pc = 0x4FBCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBCECu;
            // 0x4fbcf0: 0x8c8500a8  lw          $a1, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBD38u;
            goto label_4fbd38;
        }
    }
    ctx->pc = 0x4FBCF4u;
    // 0x4fbcf4: 0x8c8500a8  lw          $a1, 0xA8($a0)
    ctx->pc = 0x4fbcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x4fbcf8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x4fbcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x4fbcfc: 0x24c6eacc  addiu       $a2, $a2, -0x1534
    ctx->pc = 0x4fbcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961868));
    // 0x4fbd00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4fbd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4fbd04: 0xac8500a8  sw          $a1, 0xA8($a0)
    ctx->pc = 0x4fbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
    // 0x4fbd08: 0xac8700fc  sw          $a3, 0xFC($a0)
    ctx->pc = 0x4fbd08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 7));
    // 0x4fbd0c: 0x8c8800a8  lw          $t0, 0xA8($a0)
    ctx->pc = 0x4fbd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x4fbd10: 0x9085005a  lbu         $a1, 0x5A($a0)
    ctx->pc = 0x4fbd10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x4fbd14: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x4fbd14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x4fbd18: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x4fbd18u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4fbd1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4fbd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4fbd20: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4fbd20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4fbd24: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4fbd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fbd28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fbd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fbd2c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4fbd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fbd30: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x4fbd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x4fbd34: 0x8c8500a8  lw          $a1, 0xA8($a0)
    ctx->pc = 0x4fbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_4fbd38:
    // 0x4fbd38: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x4fbd38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4fbd3c: 0x5420000f  bnel        $at, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4FBD3Cu;
    {
        const bool branch_taken_0x4fbd3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fbd3c) {
            ctx->pc = 0x4FBD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBD3Cu;
            // 0x4fbd40: 0x8c650968  lw          $a1, 0x968($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBD7Cu;
            goto label_4fbd7c;
        }
    }
    ctx->pc = 0x4FBD44u;
    // 0x4fbd44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4FBD44u;
    {
        const bool branch_taken_0x4fbd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBD44u;
            // 0x4fbd48: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd44) {
            ctx->pc = 0x4FBD78u;
            goto label_4fbd78;
        }
    }
    ctx->pc = 0x4FBD4Cu;
label_4fbd4c:
    // 0x4fbd4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4fbd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4fbd50: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x4fbd50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4fbd54: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FBD54u;
    {
        const bool branch_taken_0x4fbd54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FBD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBD54u;
            // 0x4fbd58: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd54) {
            ctx->pc = 0x4FBD78u;
            goto label_4fbd78;
        }
    }
    ctx->pc = 0x4FBD5Cu;
    // 0x4fbd5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4FBD5Cu;
    {
        const bool branch_taken_0x4fbd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBD5Cu;
            // 0x4fbd60: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd5c) {
            ctx->pc = 0x4FBD78u;
            goto label_4fbd78;
        }
    }
    ctx->pc = 0x4FBD64u;
label_4fbd64:
    // 0x4fbd64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4fbd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4fbd68: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x4fbd68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4fbd6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x4FBD6Cu;
    {
        const bool branch_taken_0x4fbd6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FBD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBD6Cu;
            // 0x4fbd70: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd6c) {
            ctx->pc = 0x4FBD78u;
            goto label_4fbd78;
        }
    }
    ctx->pc = 0x4FBD74u;
    // 0x4fbd74: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x4fbd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
label_4fbd78:
    // 0x4fbd78: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x4fbd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_4fbd7c:
    // 0x4fbd7c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4fbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4fbd80: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x4FBD80u;
    {
        const bool branch_taken_0x4fbd80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fbd80) {
            ctx->pc = 0x4FBE40u;
            goto label_4fbe40;
        }
    }
    ctx->pc = 0x4FBD88u;
    // 0x4fbd88: 0x8c86005c  lw          $a2, 0x5C($a0)
    ctx->pc = 0x4fbd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x4fbd8c: 0x38c50005  xori        $a1, $a2, 0x5
    ctx->pc = 0x4fbd8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)5);
    // 0x4fbd90: 0x38c30006  xori        $v1, $a2, 0x6
    ctx->pc = 0x4fbd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)6);
    // 0x4fbd94: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4fbd94u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4fbd98: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fbd98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4fbd9c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4fbd9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4fbda0: 0x38c30009  xori        $v1, $a2, 0x9
    ctx->pc = 0x4fbda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)9);
    // 0x4fbda4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fbda4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4fbda8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4fbda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4fbdac: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4FBDACu;
    {
        const bool branch_taken_0x4fbdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fbdac) {
            ctx->pc = 0x4FBDB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBDACu;
            // 0x4fbdb0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBDE8u;
            goto label_4fbde8;
        }
    }
    ctx->pc = 0x4FBDB4u;
    // 0x4fbdb4: 0x8c8700a8  lw          $a3, 0xA8($a0)
    ctx->pc = 0x4fbdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x4fbdb8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4fbdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4fbdbc: 0x9083005a  lbu         $v1, 0x5A($a0)
    ctx->pc = 0x4fbdbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x4fbdc0: 0x24a5ea3c  addiu       $a1, $a1, -0x15C4
    ctx->pc = 0x4fbdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961724));
    // 0x4fbdc4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4fbdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4fbdc8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4fbdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fbdcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fbdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fbdd0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4fbdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4fbdd4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fbdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fbdd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fbddc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fbde0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4FBDE0u;
    {
        const bool branch_taken_0x4fbde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBDE0u;
            // 0x4fbde4: 0xac830064  sw          $v1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbde0) {
            ctx->pc = 0x4FBE40u;
            goto label_4fbe40;
        }
    }
    ctx->pc = 0x4FBDE8u;
label_4fbde8:
    // 0x4fbde8: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4FBDE8u;
    {
        const bool branch_taken_0x4fbde8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fbde8) {
            ctx->pc = 0x4FBDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBDE8u;
            // 0x4fbdec: 0x8c8600a8  lw          $a2, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBE1Cu;
            goto label_4fbe1c;
        }
    }
    ctx->pc = 0x4FBDF0u;
    // 0x4fbdf0: 0x8c8600a8  lw          $a2, 0xA8($a0)
    ctx->pc = 0x4fbdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x4fbdf4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4fbdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4fbdf8: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x4fbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4fbdfc: 0x24a5ebd0  addiu       $a1, $a1, -0x1430
    ctx->pc = 0x4fbdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962128));
    // 0x4fbe00: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fbe00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fbe04: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fbe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fbe08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fbe0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fbe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fbe10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fbe14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4FBE14u;
    {
        const bool branch_taken_0x4fbe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBE14u;
            // 0x4fbe18: 0xac830064  sw          $v1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbe14) {
            ctx->pc = 0x4FBE40u;
            goto label_4fbe40;
        }
    }
    ctx->pc = 0x4FBE1Cu;
label_4fbe1c:
    // 0x4fbe1c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4fbe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4fbe20: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x4fbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4fbe24: 0x24a5eb80  addiu       $a1, $a1, -0x1480
    ctx->pc = 0x4fbe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962048));
    // 0x4fbe28: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fbe28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fbe2c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fbe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fbe30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fbe34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fbe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fbe38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fbe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fbe3c: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x4fbe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
label_4fbe40:
    // 0x4fbe40: 0x3e00008  jr          $ra
    ctx->pc = 0x4FBE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FBE48u;
    // 0x4fbe48: 0x0  nop
    ctx->pc = 0x4fbe48u;
    // NOP
    // 0x4fbe4c: 0x0  nop
    ctx->pc = 0x4fbe4cu;
    // NOP
}
