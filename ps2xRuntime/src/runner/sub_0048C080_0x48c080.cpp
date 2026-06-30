#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048C080
// Address: 0x48c080 - 0x48c1f0
void sub_0048C080_0x48c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C080_0x48c080");
#endif

    switch (ctx->pc) {
        case 0x48c080u: goto label_48c080;
        case 0x48c084u: goto label_48c084;
        case 0x48c088u: goto label_48c088;
        case 0x48c08cu: goto label_48c08c;
        case 0x48c090u: goto label_48c090;
        case 0x48c094u: goto label_48c094;
        case 0x48c098u: goto label_48c098;
        case 0x48c09cu: goto label_48c09c;
        case 0x48c0a0u: goto label_48c0a0;
        case 0x48c0a4u: goto label_48c0a4;
        case 0x48c0a8u: goto label_48c0a8;
        case 0x48c0acu: goto label_48c0ac;
        case 0x48c0b0u: goto label_48c0b0;
        case 0x48c0b4u: goto label_48c0b4;
        case 0x48c0b8u: goto label_48c0b8;
        case 0x48c0bcu: goto label_48c0bc;
        case 0x48c0c0u: goto label_48c0c0;
        case 0x48c0c4u: goto label_48c0c4;
        case 0x48c0c8u: goto label_48c0c8;
        case 0x48c0ccu: goto label_48c0cc;
        case 0x48c0d0u: goto label_48c0d0;
        case 0x48c0d4u: goto label_48c0d4;
        case 0x48c0d8u: goto label_48c0d8;
        case 0x48c0dcu: goto label_48c0dc;
        case 0x48c0e0u: goto label_48c0e0;
        case 0x48c0e4u: goto label_48c0e4;
        case 0x48c0e8u: goto label_48c0e8;
        case 0x48c0ecu: goto label_48c0ec;
        case 0x48c0f0u: goto label_48c0f0;
        case 0x48c0f4u: goto label_48c0f4;
        case 0x48c0f8u: goto label_48c0f8;
        case 0x48c0fcu: goto label_48c0fc;
        case 0x48c100u: goto label_48c100;
        case 0x48c104u: goto label_48c104;
        case 0x48c108u: goto label_48c108;
        case 0x48c10cu: goto label_48c10c;
        case 0x48c110u: goto label_48c110;
        case 0x48c114u: goto label_48c114;
        case 0x48c118u: goto label_48c118;
        case 0x48c11cu: goto label_48c11c;
        case 0x48c120u: goto label_48c120;
        case 0x48c124u: goto label_48c124;
        case 0x48c128u: goto label_48c128;
        case 0x48c12cu: goto label_48c12c;
        case 0x48c130u: goto label_48c130;
        case 0x48c134u: goto label_48c134;
        case 0x48c138u: goto label_48c138;
        case 0x48c13cu: goto label_48c13c;
        case 0x48c140u: goto label_48c140;
        case 0x48c144u: goto label_48c144;
        case 0x48c148u: goto label_48c148;
        case 0x48c14cu: goto label_48c14c;
        case 0x48c150u: goto label_48c150;
        case 0x48c154u: goto label_48c154;
        case 0x48c158u: goto label_48c158;
        case 0x48c15cu: goto label_48c15c;
        case 0x48c160u: goto label_48c160;
        case 0x48c164u: goto label_48c164;
        case 0x48c168u: goto label_48c168;
        case 0x48c16cu: goto label_48c16c;
        case 0x48c170u: goto label_48c170;
        case 0x48c174u: goto label_48c174;
        case 0x48c178u: goto label_48c178;
        case 0x48c17cu: goto label_48c17c;
        case 0x48c180u: goto label_48c180;
        case 0x48c184u: goto label_48c184;
        case 0x48c188u: goto label_48c188;
        case 0x48c18cu: goto label_48c18c;
        case 0x48c190u: goto label_48c190;
        case 0x48c194u: goto label_48c194;
        case 0x48c198u: goto label_48c198;
        case 0x48c19cu: goto label_48c19c;
        case 0x48c1a0u: goto label_48c1a0;
        case 0x48c1a4u: goto label_48c1a4;
        case 0x48c1a8u: goto label_48c1a8;
        case 0x48c1acu: goto label_48c1ac;
        case 0x48c1b0u: goto label_48c1b0;
        case 0x48c1b4u: goto label_48c1b4;
        case 0x48c1b8u: goto label_48c1b8;
        case 0x48c1bcu: goto label_48c1bc;
        case 0x48c1c0u: goto label_48c1c0;
        case 0x48c1c4u: goto label_48c1c4;
        case 0x48c1c8u: goto label_48c1c8;
        case 0x48c1ccu: goto label_48c1cc;
        case 0x48c1d0u: goto label_48c1d0;
        case 0x48c1d4u: goto label_48c1d4;
        case 0x48c1d8u: goto label_48c1d8;
        case 0x48c1dcu: goto label_48c1dc;
        case 0x48c1e0u: goto label_48c1e0;
        case 0x48c1e4u: goto label_48c1e4;
        case 0x48c1e8u: goto label_48c1e8;
        case 0x48c1ecu: goto label_48c1ec;
        default: break;
    }

    ctx->pc = 0x48c080u;

label_48c080:
    // 0x48c080: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_48c084:
    // 0x48c084: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x48c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_48c088:
    // 0x48c088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48c08c:
    // 0x48c08c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48c08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48c090:
    // 0x48c090: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x48c090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48c094:
    // 0x48c094: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48c094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48c098:
    // 0x48c098: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x48c098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48c09c:
    // 0x48c09c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48c0a0:
    // 0x48c0a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c0a4:
    // 0x48c0a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48c0a8:
    // 0x48c0a8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x48c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_48c0ac:
    // 0x48c0ac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c0b0:
    // 0x48c0b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c0b4:
    // 0x48c0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c0b8:
    // 0x48c0b8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x48c0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c0bc:
    // 0x48c0bc: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x48c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_48c0c0:
    // 0x48c0c0: 0x8e3000b4  lw          $s0, 0xB4($s1)
    ctx->pc = 0x48c0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_48c0c4:
    // 0x48c0c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48c0c8:
    // 0x48c0c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x48c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_48c0cc:
    // 0x48c0cc: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48c0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_48c0d0:
    // 0x48c0d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48c0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48c0d4:
    // 0x48c0d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48c0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48c0d8:
    // 0x48c0d8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_48c0dc:
    if (ctx->pc == 0x48C0DCu) {
        ctx->pc = 0x48C0DCu;
            // 0x48c0dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C0E0u;
        goto label_48c0e0;
    }
    ctx->pc = 0x48C0D8u;
    {
        const bool branch_taken_0x48c0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C0D8u;
            // 0x48c0dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c0d8) {
            ctx->pc = 0x48C140u;
            goto label_48c140;
        }
    }
    ctx->pc = 0x48C0E0u;
label_48c0e0:
    // 0x48c0e0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48c0e4:
    // 0x48c0e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48c0e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48c0e8:
    // 0x48c0e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c0ec:
    // 0x48c0ec: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x48c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_48c0f0:
    // 0x48c0f0: 0xc04af96  jal         func_12BE58
label_48c0f4:
    if (ctx->pc == 0x48C0F4u) {
        ctx->pc = 0x48C0F4u;
            // 0x48c0f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C0F8u;
        goto label_48c0f8;
    }
    ctx->pc = 0x48C0F0u;
    SET_GPR_U32(ctx, 31, 0x48C0F8u);
    ctx->pc = 0x48C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C0F0u;
            // 0x48c0f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C0F8u; }
        if (ctx->pc != 0x48C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C0F8u; }
        if (ctx->pc != 0x48C0F8u) { return; }
    }
    ctx->pc = 0x48C0F8u;
label_48c0f8:
    // 0x48c0f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_48c0fc:
    if (ctx->pc == 0x48C0FCu) {
        ctx->pc = 0x48C0FCu;
            // 0x48c0fc: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48C100u;
        goto label_48c100;
    }
    ctx->pc = 0x48C0F8u;
    {
        const bool branch_taken_0x48c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c0f8) {
            ctx->pc = 0x48C0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C0F8u;
            // 0x48c0fc: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C114u;
            goto label_48c114;
        }
    }
    ctx->pc = 0x48C100u;
label_48c100:
    // 0x48c100: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48c100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48c104:
    // 0x48c104: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48c104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48c108:
    // 0x48c108: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c10c:
    // 0x48c10c: 0x1000000c  b           . + 4 + (0xC << 2)
label_48c110:
    if (ctx->pc == 0x48C110u) {
        ctx->pc = 0x48C110u;
            // 0x48c110: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x48C114u;
        goto label_48c114;
    }
    ctx->pc = 0x48C10Cu;
    {
        const bool branch_taken_0x48c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C10Cu;
            // 0x48c110: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c10c) {
            ctx->pc = 0x48C140u;
            goto label_48c140;
        }
    }
    ctx->pc = 0x48C114u;
label_48c114:
    // 0x48c114: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x48c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_48c118:
    // 0x48c118: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48c118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48c11c:
    // 0x48c11c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x48c11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48c120:
    // 0x48c120: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x48c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_48c124:
    // 0x48c124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c128:
    // 0x48c128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c12c:
    // 0x48c12c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48c12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_48c130:
    // 0x48c130: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48c130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48c134:
    // 0x48c134: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48c134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48c138:
    // 0x48c138: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_48c13c:
    if (ctx->pc == 0x48C13Cu) {
        ctx->pc = 0x48C13Cu;
            // 0x48c13c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48C140u;
        goto label_48c140;
    }
    ctx->pc = 0x48C138u;
    {
        const bool branch_taken_0x48c138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c138) {
            ctx->pc = 0x48C13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C138u;
            // 0x48c13c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C0E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48c0e4;
        }
    }
    ctx->pc = 0x48C140u;
label_48c140:
    // 0x48c140: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x48c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_48c144:
    // 0x48c144: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x48c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_48c148:
    // 0x48c148: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c14c:
    // 0x48c14c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c150:
    // 0x48c150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c154:
    // 0x48c154: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c158:
    // 0x48c158: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c15c:
    // 0x48c15c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x48c15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_48c160:
    // 0x48c160: 0x320f809  jalr        $t9
label_48c164:
    if (ctx->pc == 0x48C164u) {
        ctx->pc = 0x48C164u;
            // 0x48c164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C168u;
        goto label_48c168;
    }
    ctx->pc = 0x48C160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C168u);
        ctx->pc = 0x48C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C160u;
            // 0x48c164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C168u; }
            if (ctx->pc != 0x48C168u) { return; }
        }
        }
    }
    ctx->pc = 0x48C168u;
label_48c168:
    // 0x48c168: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x48c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_48c16c:
    // 0x48c16c: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x48c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_48c170:
    // 0x48c170: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x48c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48c174:
    // 0x48c174: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48c174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48c178:
    // 0x48c178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48c178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48c17c:
    // 0x48c17c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x48c17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48c180:
    // 0x48c180: 0x920300c0  lbu         $v1, 0xC0($s0)
    ctx->pc = 0x48c180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 192)));
label_48c184:
    // 0x48c184: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_48c188:
    if (ctx->pc == 0x48C188u) {
        ctx->pc = 0x48C188u;
            // 0x48c188: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x48C18Cu;
        goto label_48c18c;
    }
    ctx->pc = 0x48C184u;
    {
        const bool branch_taken_0x48c184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c184) {
            ctx->pc = 0x48C188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C184u;
            // 0x48c188: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C1ACu;
            goto label_48c1ac;
        }
    }
    ctx->pc = 0x48C18Cu;
label_48c18c:
    // 0x48c18c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x48c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_48c190:
    // 0x48c190: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x48c190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_48c194:
    // 0x48c194: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x48c194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_48c198:
    // 0x48c198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c19c:
    // 0x48c19c: 0xc04a508  jal         func_129420
label_48c1a0:
    if (ctx->pc == 0x48C1A0u) {
        ctx->pc = 0x48C1A0u;
            // 0x48c1a0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48C1A4u;
        goto label_48c1a4;
    }
    ctx->pc = 0x48C19Cu;
    SET_GPR_U32(ctx, 31, 0x48C1A4u);
    ctx->pc = 0x48C1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C19Cu;
            // 0x48c1a0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C1A4u; }
        if (ctx->pc != 0x48C1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C1A4u; }
        if (ctx->pc != 0x48C1A4u) { return; }
    }
    ctx->pc = 0x48C1A4u;
label_48c1a4:
    // 0x48c1a4: 0xa20000c0  sb          $zero, 0xC0($s0)
    ctx->pc = 0x48c1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 192), (uint8_t)GPR_U32(ctx, 0));
label_48c1a8:
    // 0x48c1a8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x48c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_48c1ac:
    // 0x48c1ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x48c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48c1b0:
    // 0x48c1b0: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x48c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_48c1b4:
    // 0x48c1b4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x48c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48c1b8:
    // 0x48c1b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48c1bc:
    // 0x48c1bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48c1c0:
    // 0x48c1c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48c1c4:
    // 0x48c1c4: 0xa4650046  sh          $a1, 0x46($v1)
    ctx->pc = 0x48c1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 5));
label_48c1c8:
    // 0x48c1c8: 0xa2800014  sb          $zero, 0x14($s4)
    ctx->pc = 0x48c1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 20), (uint8_t)GPR_U32(ctx, 0));
label_48c1cc:
    // 0x48c1cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48c1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_48c1d0:
    // 0x48c1d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48c1d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48c1d4:
    // 0x48c1d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48c1d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48c1d8:
    // 0x48c1d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48c1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48c1dc:
    // 0x48c1dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48c1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48c1e0:
    // 0x48c1e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c1e4:
    // 0x48c1e4: 0x3e00008  jr          $ra
label_48c1e8:
    if (ctx->pc == 0x48C1E8u) {
        ctx->pc = 0x48C1E8u;
            // 0x48c1e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x48C1ECu;
        goto label_48c1ec;
    }
    ctx->pc = 0x48C1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C1E4u;
            // 0x48c1e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C1ECu;
label_48c1ec:
    // 0x48c1ec: 0x0  nop
    ctx->pc = 0x48c1ecu;
    // NOP
}
