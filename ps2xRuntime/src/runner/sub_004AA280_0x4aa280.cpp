#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AA280
// Address: 0x4aa280 - 0x4aa3c0
void sub_004AA280_0x4aa280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA280_0x4aa280");
#endif

    switch (ctx->pc) {
        case 0x4aa2c4u: goto label_4aa2c4;
        case 0x4aa2e8u: goto label_4aa2e8;
        case 0x4aa2f0u: goto label_4aa2f0;
        case 0x4aa308u: goto label_4aa308;
        case 0x4aa364u: goto label_4aa364;
        case 0x4aa394u: goto label_4aa394;
        default: break;
    }

    ctx->pc = 0x4aa280u;

    // 0x4aa280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4aa280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4aa284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4aa284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4aa288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4aa288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4aa28c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aa28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4aa290: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4aa290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4aa294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4aa298: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4aa298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4aa29c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA29Cu;
    {
        const bool branch_taken_0x4aa29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA29Cu;
            // 0x4aa2a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa29c) {
            ctx->pc = 0x4AA2ACu;
            goto label_4aa2ac;
        }
    }
    ctx->pc = 0x4AA2A4u;
    // 0x4aa2a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA2A4u;
    {
        const bool branch_taken_0x4aa2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA2A4u;
            // 0x4aa2a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa2a4) {
            ctx->pc = 0x4AA2B0u;
            goto label_4aa2b0;
        }
    }
    ctx->pc = 0x4AA2ACu;
label_4aa2ac:
    // 0x4aa2ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4aa2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4aa2b0:
    // 0x4aa2b0: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x4aa2b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4aa2b4: 0x5020003c  beql        $at, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x4AA2B4u;
    {
        const bool branch_taken_0x4aa2b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa2b4) {
            ctx->pc = 0x4AA2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA2B4u;
            // 0x4aa2b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA3A8u;
            goto label_4aa3a8;
        }
    }
    ctx->pc = 0x4AA2BCu;
    // 0x4aa2bc: 0xc0b64dc  jal         func_2D9370
    ctx->pc = 0x4AA2BCu;
    SET_GPR_U32(ctx, 31, 0x4AA2C4u);
    ctx->pc = 0x4AA2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA2BCu;
            // 0x4aa2c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9370u;
    if (runtime->hasFunction(0x2D9370u)) {
        auto targetFn = runtime->lookupFunction(0x2D9370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA2C4u; }
        if (ctx->pc != 0x4AA2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9370_0x2d9370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA2C4u; }
        if (ctx->pc != 0x4AA2C4u) { return; }
    }
    ctx->pc = 0x4AA2C4u;
label_4aa2c4:
    // 0x4aa2c4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x4aa2c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4aa2c8: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4AA2C8u;
    {
        const bool branch_taken_0x4aa2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa2c8) {
            ctx->pc = 0x4AA2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA2C8u;
            // 0x4aa2cc: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA2F4u;
            goto label_4aa2f4;
        }
    }
    ctx->pc = 0x4AA2D0u;
    // 0x4aa2d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4aa2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4aa2d4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4aa2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4aa2d8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4aa2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4aa2dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4aa2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4aa2e0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4AA2E0u;
    SET_GPR_U32(ctx, 31, 0x4AA2E8u);
    ctx->pc = 0x4AA2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA2E0u;
            // 0x4aa2e4: 0x24a552d0  addiu       $a1, $a1, 0x52D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA2E8u; }
        if (ctx->pc != 0x4AA2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA2E8u; }
        if (ctx->pc != 0x4AA2E8u) { return; }
    }
    ctx->pc = 0x4AA2E8u;
label_4aa2e8:
    // 0x4aa2e8: 0xc04981a  jal         func_126068
    ctx->pc = 0x4AA2E8u;
    SET_GPR_U32(ctx, 31, 0x4AA2F0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA2F0u; }
        if (ctx->pc != 0x4AA2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA2F0u; }
        if (ctx->pc != 0x4AA2F0u) { return; }
    }
    ctx->pc = 0x4AA2F0u;
label_4aa2f0:
    // 0x4aa2f0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x4aa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4aa2f4:
    // 0x4aa2f4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x4aa2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4aa2f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4aa2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4aa2fc: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x4aa2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x4aa300: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x4AA300u;
    SET_GPR_U32(ctx, 31, 0x4AA308u);
    ctx->pc = 0x4AA304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA300u;
            // 0x4aa304: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA308u; }
        if (ctx->pc != 0x4AA308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA308u; }
        if (ctx->pc != 0x4AA308u) { return; }
    }
    ctx->pc = 0x4AA308u;
label_4aa308:
    // 0x4aa308: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4aa308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4aa30c: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x4AA30Cu;
    {
        const bool branch_taken_0x4aa30c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA30Cu;
            // 0x4aa310: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa30c) {
            ctx->pc = 0x4AA394u;
            goto label_4aa394;
        }
    }
    ctx->pc = 0x4AA314u;
    // 0x4aa314: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4aa314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4aa318: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AA318u;
    {
        const bool branch_taken_0x4aa318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA318u;
            // 0x4aa31c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa318) {
            ctx->pc = 0x4AA33Cu;
            goto label_4aa33c;
        }
    }
    ctx->pc = 0x4AA320u;
    // 0x4aa320: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x4aa320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4aa324: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4aa324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4aa328: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4aa328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4aa32c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x4aa32cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4aa330: 0x1810  mfhi        $v1
    ctx->pc = 0x4aa330u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4aa334: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA334u;
    {
        const bool branch_taken_0x4aa334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA334u;
            // 0x4aa338: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa334) {
            ctx->pc = 0x4AA344u;
            goto label_4aa344;
        }
    }
    ctx->pc = 0x4AA33Cu;
label_4aa33c:
    // 0x4aa33c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4aa33cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa340: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4aa340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4aa344:
    // 0x4aa344: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4aa344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4aa348: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x4aa348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4aa34c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x4aa34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4aa350: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x4aa350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4aa354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aa354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4aa358: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x4aa358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4aa35c: 0x10e50008  beq         $a3, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AA35Cu;
    {
        const bool branch_taken_0x4aa35c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x4aa35c) {
            ctx->pc = 0x4AA380u;
            goto label_4aa380;
        }
    }
    ctx->pc = 0x4AA364u;
label_4aa364:
    // 0x4aa364: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4aa364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aa368: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4aa368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4aa36c: 0x14e40002  bne         $a3, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA36Cu;
    {
        const bool branch_taken_0x4aa36c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AA370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA36Cu;
            // 0x4aa370: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa36c) {
            ctx->pc = 0x4AA378u;
            goto label_4aa378;
        }
    }
    ctx->pc = 0x4AA374u;
    // 0x4aa374: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4aa374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4aa378:
    // 0x4aa378: 0x14e5fffa  bne         $a3, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AA378u;
    {
        const bool branch_taken_0x4aa378 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x4AA37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA378u;
            // 0x4aa37c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa378) {
            ctx->pc = 0x4AA364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aa364;
        }
    }
    ctx->pc = 0x4AA380u;
label_4aa380:
    // 0x4aa380: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x4aa380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4aa384: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AA384u;
    {
        const bool branch_taken_0x4aa384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa384) {
            ctx->pc = 0x4AA388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA384u;
            // 0x4aa388: 0xae500010  sw          $s0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA398u;
            goto label_4aa398;
        }
    }
    ctx->pc = 0x4AA38Cu;
    // 0x4aa38c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x4AA38Cu;
    SET_GPR_U32(ctx, 31, 0x4AA394u);
    ctx->pc = 0x4AA390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA38Cu;
            // 0x4aa390: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA394u; }
        if (ctx->pc != 0x4AA394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA394u; }
        if (ctx->pc != 0x4AA394u) { return; }
    }
    ctx->pc = 0x4AA394u;
label_4aa394:
    // 0x4aa394: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x4aa394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
label_4aa398:
    // 0x4aa398: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4aa398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4aa39c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x4aa39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x4aa3a0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x4aa3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x4aa3a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4aa3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4aa3a8:
    // 0x4aa3a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4aa3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aa3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4aa3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA3B4u;
            // 0x4aa3b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AA3BCu;
    // 0x4aa3bc: 0x0  nop
    ctx->pc = 0x4aa3bcu;
    // NOP
}
