#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E4D0
// Address: 0x26e4d0 - 0x26e800
void sub_0026E4D0_0x26e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E4D0_0x26e4d0");
#endif

    switch (ctx->pc) {
        case 0x26e530u: goto label_26e530;
        case 0x26e574u: goto label_26e574;
        case 0x26e5d4u: goto label_26e5d4;
        case 0x26e61cu: goto label_26e61c;
        case 0x26e664u: goto label_26e664;
        case 0x26e6b4u: goto label_26e6b4;
        case 0x26e700u: goto label_26e700;
        case 0x26e74cu: goto label_26e74c;
        case 0x26e79cu: goto label_26e79c;
        case 0x26e7e4u: goto label_26e7e4;
        default: break;
    }

    ctx->pc = 0x26e4d0u;

    // 0x26e4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e4d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26e4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e4dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26e4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4e0: 0x2e210100  sltiu       $at, $s1, 0x100
    ctx->pc = 0x26e4e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x26e4e4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x26E4E4u;
    {
        const bool branch_taken_0x26e4e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4E4u;
            // 0x26e4e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4e4) {
            ctx->pc = 0x26E580u;
            goto label_26e580;
        }
    }
    ctx->pc = 0x26E4ECu;
    // 0x26e4ec: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26e4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e4f0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e4f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e4f8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e4fc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e500: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e504: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26e504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26e508: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e50c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e510: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e514: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e518: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e51c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e51cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e520: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E520u;
    {
        const bool branch_taken_0x26e520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e520) {
            ctx->pc = 0x26E530u;
            goto label_26e530;
        }
    }
    ctx->pc = 0x26E528u;
    // 0x26e528: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E528u;
    SET_GPR_U32(ctx, 31, 0x26E530u);
    ctx->pc = 0x26E52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E528u;
            // 0x26e52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E530u; }
        if (ctx->pc != 0x26E530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E530u; }
        if (ctx->pc != 0x26E530u) { return; }
    }
    ctx->pc = 0x26E530u;
label_26e530:
    // 0x26e530: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e534: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e538: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x26e538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26e53c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e540: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e540u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e544: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e548: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e54c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e554: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e558: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e55c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e560: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e560u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e564: 0x146000a0  bnez        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26E564u;
    {
        const bool branch_taken_0x26e564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E564u;
            // 0x26e568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e564) {
            ctx->pc = 0x26E7E8u;
            goto label_26e7e8;
        }
    }
    ctx->pc = 0x26E56Cu;
    // 0x26e56c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E56Cu;
    SET_GPR_U32(ctx, 31, 0x26E574u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E574u; }
        if (ctx->pc != 0x26E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E574u; }
        if (ctx->pc != 0x26E574u) { return; }
    }
    ctx->pc = 0x26E574u;
label_26e574:
    // 0x26e574: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x26E574u;
    {
        const bool branch_taken_0x26e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e574) {
            ctx->pc = 0x26E7E8u;
            goto label_26e7e8;
        }
    }
    ctx->pc = 0x26E57Cu;
    // 0x26e57c: 0x0  nop
    ctx->pc = 0x26e57cu;
    // NOP
label_26e580:
    // 0x26e580: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26e580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26e584: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x26e584u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x26e588: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x26E588u;
    {
        const bool branch_taken_0x26e588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e588) {
            ctx->pc = 0x26E670u;
            goto label_26e670;
        }
    }
    ctx->pc = 0x26E590u;
    // 0x26e590: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26e590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e594: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e598: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e59c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e5a0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e5a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e5a8: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26e5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26e5ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e5b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e5b4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e5b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e5bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e5c0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e5c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e5c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E5C4u;
    {
        const bool branch_taken_0x26e5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e5c4) {
            ctx->pc = 0x26E5D8u;
            goto label_26e5d8;
        }
    }
    ctx->pc = 0x26E5CCu;
    // 0x26e5cc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E5CCu;
    SET_GPR_U32(ctx, 31, 0x26E5D4u);
    ctx->pc = 0x26E5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5CCu;
            // 0x26e5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5D4u; }
        if (ctx->pc != 0x26E5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5D4u; }
        if (ctx->pc != 0x26E5D4u) { return; }
    }
    ctx->pc = 0x26E5D4u;
label_26e5d4:
    // 0x26e5d4: 0x0  nop
    ctx->pc = 0x26e5d4u;
    // NOP
label_26e5d8:
    // 0x26e5d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e5dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e5e0: 0x113203  sra         $a2, $s1, 8
    ctx->pc = 0x26e5e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 8));
    // 0x26e5e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e5e8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e5ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e5f0: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e5f4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e5f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e5fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e600: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e604: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e608: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e60c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E60Cu;
    {
        const bool branch_taken_0x26e60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E60Cu;
            // 0x26e610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e60c) {
            ctx->pc = 0x26E620u;
            goto label_26e620;
        }
    }
    ctx->pc = 0x26E614u;
    // 0x26e614: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E614u;
    SET_GPR_U32(ctx, 31, 0x26E61Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E61Cu; }
        if (ctx->pc != 0x26E61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E61Cu; }
        if (ctx->pc != 0x26E61Cu) { return; }
    }
    ctx->pc = 0x26E61Cu;
label_26e61c:
    // 0x26e61c: 0x0  nop
    ctx->pc = 0x26e61cu;
    // NOP
label_26e620:
    // 0x26e620: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e624: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e628: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26e628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26e62c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e630: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e630u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e634: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e638: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e63c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e640: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e644: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e648: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e64c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e650: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e654: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x26E654u;
    {
        const bool branch_taken_0x26e654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E654u;
            // 0x26e658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e654) {
            ctx->pc = 0x26E7E8u;
            goto label_26e7e8;
        }
    }
    ctx->pc = 0x26E65Cu;
    // 0x26e65c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E65Cu;
    SET_GPR_U32(ctx, 31, 0x26E664u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E664u; }
        if (ctx->pc != 0x26E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E664u; }
        if (ctx->pc != 0x26E664u) { return; }
    }
    ctx->pc = 0x26E664u;
label_26e664:
    // 0x26e664: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x26E664u;
    {
        const bool branch_taken_0x26e664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e664) {
            ctx->pc = 0x26E7E8u;
            goto label_26e7e8;
        }
    }
    ctx->pc = 0x26E66Cu;
    // 0x26e66c: 0x0  nop
    ctx->pc = 0x26e66cu;
    // NOP
label_26e670:
    // 0x26e670: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26e670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e674: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e678: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e67c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e680: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e680u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e684: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e688: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26e688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26e68c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e690: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e694: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e698: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e69c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e6a0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e6a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e6a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E6A4u;
    {
        const bool branch_taken_0x26e6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e6a4) {
            ctx->pc = 0x26E6B8u;
            goto label_26e6b8;
        }
    }
    ctx->pc = 0x26E6ACu;
    // 0x26e6ac: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E6ACu;
    SET_GPR_U32(ctx, 31, 0x26E6B4u);
    ctx->pc = 0x26E6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6ACu;
            // 0x26e6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6B4u; }
        if (ctx->pc != 0x26E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E6B4u; }
        if (ctx->pc != 0x26E6B4u) { return; }
    }
    ctx->pc = 0x26E6B4u;
label_26e6b4:
    // 0x26e6b4: 0x0  nop
    ctx->pc = 0x26e6b4u;
    // NOP
label_26e6b8:
    // 0x26e6b8: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x26e6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x26e6bc: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x26e6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x26e6c0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e6c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e6c8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e6cc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e6d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e6d4: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e6d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e6dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e6e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e6e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e6e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e6ec: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e6f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E6F0u;
    {
        const bool branch_taken_0x26e6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6F0u;
            // 0x26e6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6f0) {
            ctx->pc = 0x26E700u;
            goto label_26e700;
        }
    }
    ctx->pc = 0x26E6F8u;
    // 0x26e6f8: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E6F8u;
    SET_GPR_U32(ctx, 31, 0x26E700u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E700u; }
        if (ctx->pc != 0x26E700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E700u; }
        if (ctx->pc != 0x26E700u) { return; }
    }
    ctx->pc = 0x26E700u;
label_26e700:
    // 0x26e700: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x26e700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x26e704: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26e704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26e708: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e70c: 0x33402  srl         $a2, $v1, 16
    ctx->pc = 0x26e70cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x26e710: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e714: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e718: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e718u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e71c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e720: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e724: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e72c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e730: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e734: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e738: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e73c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E73Cu;
    {
        const bool branch_taken_0x26e73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E73Cu;
            // 0x26e740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e73c) {
            ctx->pc = 0x26E750u;
            goto label_26e750;
        }
    }
    ctx->pc = 0x26E744u;
    // 0x26e744: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E744u;
    SET_GPR_U32(ctx, 31, 0x26E74Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E74Cu; }
        if (ctx->pc != 0x26E74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E74Cu; }
        if (ctx->pc != 0x26E74Cu) { return; }
    }
    ctx->pc = 0x26E74Cu;
label_26e74c:
    // 0x26e74c: 0x0  nop
    ctx->pc = 0x26e74cu;
    // NOP
label_26e750:
    // 0x26e750: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x26e750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x26e754: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26e754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26e758: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e75c: 0x33602  srl         $a2, $v1, 24
    ctx->pc = 0x26e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x26e760: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e764: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e768: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e768u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e76c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e770: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e774: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e778: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e77c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e780: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e784: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e788: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e78c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E78Cu;
    {
        const bool branch_taken_0x26e78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E78Cu;
            // 0x26e790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e78c) {
            ctx->pc = 0x26E7A0u;
            goto label_26e7a0;
        }
    }
    ctx->pc = 0x26E794u;
    // 0x26e794: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E794u;
    SET_GPR_U32(ctx, 31, 0x26E79Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E79Cu; }
        if (ctx->pc != 0x26E79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E79Cu; }
        if (ctx->pc != 0x26E79Cu) { return; }
    }
    ctx->pc = 0x26E79Cu;
label_26e79c:
    // 0x26e79c: 0x0  nop
    ctx->pc = 0x26e79cu;
    // NOP
label_26e7a0:
    // 0x26e7a0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e7a4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e7a8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x26e7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26e7ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e7b0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e7b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e7b8: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e7bc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e7c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e7c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e7c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e7cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e7d0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e7d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e7d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E7D4u;
    {
        const bool branch_taken_0x26e7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7D4u;
            // 0x26e7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7d4) {
            ctx->pc = 0x26E7E8u;
            goto label_26e7e8;
        }
    }
    ctx->pc = 0x26E7DCu;
    // 0x26e7dc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E7DCu;
    SET_GPR_U32(ctx, 31, 0x26E7E4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E7E4u; }
        if (ctx->pc != 0x26E7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E7E4u; }
        if (ctx->pc != 0x26E7E4u) { return; }
    }
    ctx->pc = 0x26E7E4u;
label_26e7e4:
    // 0x26e7e4: 0x0  nop
    ctx->pc = 0x26e7e4u;
    // NOP
label_26e7e8:
    // 0x26e7e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26e7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x26E7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7F4u;
            // 0x26e7f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E7FCu;
    // 0x26e7fc: 0x0  nop
    ctx->pc = 0x26e7fcu;
    // NOP
}
