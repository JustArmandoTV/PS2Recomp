#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F48B0
// Address: 0x2f48b0 - 0x2f4ae0
void sub_002F48B0_0x2f48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F48B0_0x2f48b0");
#endif

    ctx->pc = 0x2f48b0u;

    // 0x2f48b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2f48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f48b4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2f48b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f48b8: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x2f48b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f48bc: 0x28620081  slti        $v0, $v1, 0x81
    ctx->pc = 0x2f48bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2f48c0: 0x8d26001c  lw          $a2, 0x1C($t1)
    ctx->pc = 0x2f48c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x2f48c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f48c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f48c8: 0x8d25002c  lw          $a1, 0x2C($t1)
    ctx->pc = 0x2f48c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x2f48cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f48ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f48d0: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x2f48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2f48d4: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x2f48d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f48d8: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2f48d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f48dc: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x2f48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x2f48e0: 0x8d27003c  lw          $a3, 0x3C($t1)
    ctx->pc = 0x2f48e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x2f48e4: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x2f48e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2f48e8: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x2f48e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f48ec: 0x29280061  slti        $t0, $t1, 0x61
    ctx->pc = 0x2f48ecu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2f48f0: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x2f48f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x2f48f4: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f48f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f48f8: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x2f48f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x2f48fc: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f48fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4900: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x2f4900u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f4904: 0x10e0003b  beqz        $a3, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F4904u;
    {
        const bool branch_taken_0x2f4904 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4904u;
            // 0x2f4908: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4904) {
            ctx->pc = 0x2F49F4u;
            goto label_2f49f4;
        }
    }
    ctx->pc = 0x2F490Cu;
    // 0x2f490c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F490Cu;
    {
        const bool branch_taken_0x2f490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f490c) {
            ctx->pc = 0x2F4910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F490Cu;
            // 0x2f4910: 0x90870001  lbu         $a3, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4920u;
            goto label_2f4920;
        }
    }
    ctx->pc = 0x2F4914u;
    // 0x2f4914: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f4914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f491c: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x2f491cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2f4920:
    // 0x2f4920: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4920u;
    {
        const bool branch_taken_0x2f4920 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f4920) {
            ctx->pc = 0x2F4924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4920u;
            // 0x2f4924: 0x90890000  lbu         $t1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4930u;
            goto label_2f4930;
        }
    }
    ctx->pc = 0x2F4928u;
    // 0x2f4928: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2F4928u;
    {
        const bool branch_taken_0x2f4928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F492Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4928u;
            // 0x2f492c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4928) {
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F4930u;
label_2f4930:
    // 0x2f4930: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x2f4930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4934: 0x29280081  slti        $t0, $t1, 0x81
    ctx->pc = 0x2f4934u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2f4938: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x2f4938u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x2f493c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f493cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4940: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x2f4940u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2f4944: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4944u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4948: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x2f4948u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f494c: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x2f494cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4950: 0x29280061  slti        $t0, $t1, 0x61
    ctx->pc = 0x2f4950u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2f4954: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x2f4954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x2f4958: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f495c: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x2f495cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x2f4960: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4964: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x2f4964u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f4968: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4968u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f496c: 0x54e80007  bnel        $a3, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F496Cu;
    {
        const bool branch_taken_0x2f496c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x2f496c) {
            ctx->pc = 0x2F4970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F496Cu;
            // 0x2f4970: 0x90850002  lbu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F498Cu;
            goto label_2f498c;
        }
    }
    ctx->pc = 0x2F4974u;
    // 0x2f4974: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f4974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f4978: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4978u;
    {
        const bool branch_taken_0x2f4978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4978) {
            ctx->pc = 0x2F497Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4978u;
            // 0x2f497c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4984u;
            goto label_2f4984;
        }
    }
    ctx->pc = 0x2F4980u;
    // 0x2f4980: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f4980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f4984:
    // 0x2f4984: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2F4984u;
    {
        const bool branch_taken_0x2f4984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4984) {
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F498Cu;
label_2f498c:
    // 0x2f498c: 0x28a40081  slti        $a0, $a1, 0x81
    ctx->pc = 0x2f498cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2f4990: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2f4990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f4994: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f4994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f4998: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2f4998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2f499c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f499cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f49a0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2f49a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f49a4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2f49a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f49a8: 0x28a40061  slti        $a0, $a1, 0x61
    ctx->pc = 0x2f49a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2f49ac: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2f49acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f49b0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f49b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f49b4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f49b8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f49b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f49bc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2f49bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f49c0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f49c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f49c4: 0x54e40007  bnel        $a3, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F49C4u;
    {
        const bool branch_taken_0x2f49c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f49c4) {
            ctx->pc = 0x2F49C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49C4u;
            // 0x2f49c8: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F49E4u;
            goto label_2f49e4;
        }
    }
    ctx->pc = 0x2F49CCu;
    // 0x2f49cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f49ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f49d0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F49D0u;
    {
        const bool branch_taken_0x2f49d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f49d0) {
            ctx->pc = 0x2F49D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49D0u;
            // 0x2f49d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F49DCu;
            goto label_2f49dc;
        }
    }
    ctx->pc = 0x2F49D8u;
    // 0x2f49d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f49dc:
    // 0x2f49dc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F49DCu;
    {
        const bool branch_taken_0x2f49dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f49dc) {
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F49E4u;
label_2f49e4:
    // 0x2f49e4: 0x5462003a  bnel        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2F49E4u;
    {
        const bool branch_taken_0x2f49e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f49e4) {
            ctx->pc = 0x2F49E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49E4u;
            // 0x2f49e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F49ECu;
    // 0x2f49ec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2F49ECu;
    {
        const bool branch_taken_0x2f49ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F49F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49ECu;
            // 0x2f49f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49ec) {
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F49F4u;
label_2f49f4:
    // 0x2f49f4: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x2f49f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2f49f8: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F49F8u;
    {
        const bool branch_taken_0x2f49f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f49f8) {
            ctx->pc = 0x2F49FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F49F8u;
            // 0x2f49fc: 0x90890000  lbu         $t1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A08u;
            goto label_2f4a08;
        }
    }
    ctx->pc = 0x2F4A00u;
    // 0x2f4a00: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2F4A00u;
    {
        const bool branch_taken_0x2f4a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A00u;
            // 0x2f4a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a00) {
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F4A08u;
label_2f4a08:
    // 0x2f4a08: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x2f4a08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4a0c: 0x29280081  slti        $t0, $t1, 0x81
    ctx->pc = 0x2f4a0cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2f4a10: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x2f4a10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x2f4a14: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4a14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4a18: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x2f4a18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2f4a1c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4a1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4a20: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x2f4a20u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f4a24: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x2f4a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4a28: 0x29280061  slti        $t0, $t1, 0x61
    ctx->pc = 0x2f4a28u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2f4a2c: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x2f4a2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x2f4a30: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4a30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4a34: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x2f4a34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x2f4a38: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4a38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4a3c: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x2f4a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f4a40: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2f4a40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f4a44: 0x54e80007  bnel        $a3, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4A44u;
    {
        const bool branch_taken_0x2f4a44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x2f4a44) {
            ctx->pc = 0x2F4A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A44u;
            // 0x2f4a48: 0x90850002  lbu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A64u;
            goto label_2f4a64;
        }
    }
    ctx->pc = 0x2F4A4Cu;
    // 0x2f4a4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f4a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f4a50: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4A50u;
    {
        const bool branch_taken_0x2f4a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4a50) {
            ctx->pc = 0x2F4A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A50u;
            // 0x2f4a54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A5Cu;
            goto label_2f4a5c;
        }
    }
    ctx->pc = 0x2F4A58u;
    // 0x2f4a58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f4a5c:
    // 0x2f4a5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F4A5Cu;
    {
        const bool branch_taken_0x2f4a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4a5c) {
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F4A64u;
label_2f4a64:
    // 0x2f4a64: 0x28a40081  slti        $a0, $a1, 0x81
    ctx->pc = 0x2f4a64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2f4a68: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2f4a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f4a6c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f4a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f4a70: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2f4a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2f4a74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f4a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f4a78: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2f4a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f4a7c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2f4a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f4a80: 0x28a40061  slti        $a0, $a1, 0x61
    ctx->pc = 0x2f4a80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2f4a84: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2f4a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f4a88: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f4a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f4a8c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f4a90: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f4a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f4a94: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2f4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f4a98: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f4a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f4a9c: 0x54e40007  bnel        $a3, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4A9Cu;
    {
        const bool branch_taken_0x2f4a9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f4a9c) {
            ctx->pc = 0x2F4AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4A9Cu;
            // 0x2f4aa0: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4ABCu;
            goto label_2f4abc;
        }
    }
    ctx->pc = 0x2F4AA4u;
    // 0x2f4aa4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f4aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f4aa8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4AA8u;
    {
        const bool branch_taken_0x2f4aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4aa8) {
            ctx->pc = 0x2F4AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4AA8u;
            // 0x2f4aac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4AB4u;
            goto label_2f4ab4;
        }
    }
    ctx->pc = 0x2F4AB0u;
    // 0x2f4ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f4ab4:
    // 0x2f4ab4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4AB4u;
    {
        const bool branch_taken_0x2f4ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ab4) {
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F4ABCu;
label_2f4abc:
    // 0x2f4abc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4ABCu;
    {
        const bool branch_taken_0x2f4abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4abc) {
            ctx->pc = 0x2F4ACCu;
            goto label_2f4acc;
        }
    }
    ctx->pc = 0x2F4AC4u;
    // 0x2f4ac4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4AC4u;
    {
        const bool branch_taken_0x2f4ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4AC4u;
            // 0x2f4ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ac4) {
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F4ACCu;
label_2f4acc:
    // 0x2f4acc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f4accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f4ad0:
    // 0x2f4ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4AD8u;
    // 0x2f4ad8: 0x0  nop
    ctx->pc = 0x2f4ad8u;
    // NOP
    // 0x2f4adc: 0x0  nop
    ctx->pc = 0x2f4adcu;
    // NOP
}
