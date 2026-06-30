#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EB080
// Address: 0x4eb080 - 0x4eb1b0
void sub_004EB080_0x4eb080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB080_0x4eb080");
#endif

    switch (ctx->pc) {
        case 0x4eb11cu: goto label_4eb11c;
        default: break;
    }

    ctx->pc = 0x4eb080u;

    // 0x4eb080: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x4eb080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4eb084: 0x3c0542b4  lui         $a1, 0x42B4
    ctx->pc = 0x4eb084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17076 << 16));
    // 0x4eb088: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4eb088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4eb08c: 0x8cc60110  lw          $a2, 0x110($a2)
    ctx->pc = 0x4eb08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
    // 0x4eb090: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x4eb090u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x4eb094: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x4eb094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x4eb098: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x4eb098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x4eb09c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4eb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x4eb0a0: 0x10c30014  beq         $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x4EB0A0u;
    {
        const bool branch_taken_0x4eb0a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x4EB0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB0A0u;
            // 0x4eb0a4: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb0a0) {
            ctx->pc = 0x4EB0F4u;
            goto label_4eb0f4;
        }
    }
    ctx->pc = 0x4EB0A8u;
    // 0x4eb0a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4eb0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4eb0ac: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4EB0ACu;
    {
        const bool branch_taken_0x4eb0ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb0ac) {
            ctx->pc = 0x4EB0F4u;
            goto label_4eb0f4;
        }
    }
    ctx->pc = 0x4EB0B4u;
    // 0x4eb0b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4eb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4eb0b8: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4EB0B8u;
    {
        const bool branch_taken_0x4eb0b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb0b8) {
            ctx->pc = 0x4EB0E4u;
            goto label_4eb0e4;
        }
    }
    ctx->pc = 0x4EB0C0u;
    // 0x4eb0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4eb0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4eb0c4: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB0C4u;
    {
        const bool branch_taken_0x4eb0c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb0c4) {
            ctx->pc = 0x4EB0D4u;
            goto label_4eb0d4;
        }
    }
    ctx->pc = 0x4EB0CCu;
    // 0x4eb0cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4EB0CCu;
    {
        const bool branch_taken_0x4eb0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB0CCu;
            // 0x4eb0d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb0cc) {
            ctx->pc = 0x4EB104u;
            goto label_4eb104;
        }
    }
    ctx->pc = 0x4EB0D4u;
label_4eb0d4:
    // 0x4eb0d4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4eb0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x4eb0d8: 0x24638610  addiu       $v1, $v1, -0x79F0
    ctx->pc = 0x4eb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936080));
    // 0x4eb0dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EB0DCu;
    {
        const bool branch_taken_0x4eb0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB0DCu;
            // 0x4eb0e0: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb0dc) {
            ctx->pc = 0x4EB100u;
            goto label_4eb100;
        }
    }
    ctx->pc = 0x4EB0E4u;
label_4eb0e4:
    // 0x4eb0e4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4eb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x4eb0e8: 0x24638630  addiu       $v1, $v1, -0x79D0
    ctx->pc = 0x4eb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936112));
    // 0x4eb0ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EB0ECu;
    {
        const bool branch_taken_0x4eb0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB0ECu;
            // 0x4eb0f0: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb0ec) {
            ctx->pc = 0x4EB100u;
            goto label_4eb100;
        }
    }
    ctx->pc = 0x4EB0F4u;
label_4eb0f4:
    // 0x4eb0f4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4eb0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x4eb0f8: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x4eb0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x4eb0fc: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x4eb0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_4eb100:
    // 0x4eb100: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4eb100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eb104:
    // 0x4eb104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4eb104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb108: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4eb108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb10c: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x4eb10cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4eb110: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x4eb110u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4eb114: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x4eb114u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4eb118: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x4eb118u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4eb11c:
    // 0x4eb11c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4eb11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4eb120: 0x24e3001c  addiu       $v1, $a3, 0x1C
    ctx->pc = 0x4eb120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x4eb124: 0x300482d  daddu       $t1, $t8, $zero
    ctx->pc = 0x4eb124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb128: 0xa85821  addu        $t3, $a1, $t0
    ctx->pc = 0x4eb128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x4eb12c: 0x8d6c0094  lw          $t4, 0x94($t3)
    ctx->pc = 0x4eb12cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 148)));
    // 0x4eb130: 0x25650094  addiu       $a1, $t3, 0x94
    ctx->pc = 0x4eb130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 148));
    // 0x4eb134: 0x8d6b009c  lw          $t3, 0x9C($t3)
    ctx->pc = 0x4eb134u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 156)));
    // 0x4eb138: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x4eb138u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x4eb13c: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x4eb13cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x4eb140: 0x10cf0005  beq         $a2, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EB140u;
    {
        const bool branch_taken_0x4eb140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 15));
        ctx->pc = 0x4EB144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB140u;
            // 0x4eb144: 0x18bc821  addu        $t9, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb140) {
            ctx->pc = 0x4EB158u;
            goto label_4eb158;
        }
    }
    ctx->pc = 0x4EB148u;
    // 0x4eb148: 0x10ce0003  beq         $a2, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB148u;
    {
        const bool branch_taken_0x4eb148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 14));
        if (branch_taken_0x4eb148) {
            ctx->pc = 0x4EB158u;
            goto label_4eb158;
        }
    }
    ctx->pc = 0x4EB150u;
    // 0x4eb150: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4EB150u;
    {
        const bool branch_taken_0x4eb150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb150) {
            ctx->pc = 0x4EB168u;
            goto label_4eb168;
        }
    }
    ctx->pc = 0x4EB158u;
label_4eb158:
    // 0x4eb158: 0x314b0001  andi        $t3, $t2, 0x1
    ctx->pc = 0x4eb158u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x4eb15c: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x4EB15Cu;
    {
        const bool branch_taken_0x4eb15c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb15c) {
            ctx->pc = 0x4EB168u;
            goto label_4eb168;
        }
    }
    ctx->pc = 0x4EB164u;
    // 0x4eb164: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x4eb164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4eb168:
    // 0x4eb168: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4eb168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4eb16c: 0x8c8c0018  lw          $t4, 0x18($a0)
    ctx->pc = 0x4eb16cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4eb170: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4eb170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4eb174: 0x146582a  slt         $t3, $t2, $a2
    ctx->pc = 0x4eb174u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4eb178: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4eb178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4eb17c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4eb17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4eb180: 0x858c0000  lh          $t4, 0x0($t4)
    ctx->pc = 0x4eb180u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eb184: 0x12c4818  mult        $t1, $t1, $t4
    ctx->pc = 0x4eb184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4eb188: 0x3294821  addu        $t1, $t9, $t1
    ctx->pc = 0x4eb188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x4eb18c: 0xa4690004  sh          $t1, 0x4($v1)
    ctx->pc = 0x4eb18cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x4eb190: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x4eb190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4eb194: 0x1560ffe1  bnez        $t3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4EB194u;
    {
        const bool branch_taken_0x4eb194 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB194u;
            // 0x4eb198: 0xa4650006  sh          $a1, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb194) {
            ctx->pc = 0x4EB11Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eb11c;
        }
    }
    ctx->pc = 0x4EB19Cu;
    // 0x4eb19c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EB1A4u;
    // 0x4eb1a4: 0x0  nop
    ctx->pc = 0x4eb1a4u;
    // NOP
    // 0x4eb1a8: 0x0  nop
    ctx->pc = 0x4eb1a8u;
    // NOP
    // 0x4eb1ac: 0x0  nop
    ctx->pc = 0x4eb1acu;
    // NOP
}
