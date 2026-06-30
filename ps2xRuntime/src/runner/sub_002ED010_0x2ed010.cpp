#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED010
// Address: 0x2ed010 - 0x2ed450
void sub_002ED010_0x2ed010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED010_0x2ed010");
#endif

    switch (ctx->pc) {
        case 0x2ed0a0u: goto label_2ed0a0;
        case 0x2ed100u: goto label_2ed100;
        case 0x2ed160u: goto label_2ed160;
        case 0x2ed1c0u: goto label_2ed1c0;
        case 0x2ed36cu: goto label_2ed36c;
        case 0x2ed38cu: goto label_2ed38c;
        case 0x2ed3dcu: goto label_2ed3dc;
        case 0x2ed3e4u: goto label_2ed3e4;
        default: break;
    }

    ctx->pc = 0x2ed010u;

    // 0x2ed010: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ed010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ed014: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x2ed014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2ed018: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ed018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ed01c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ed01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ed020: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ed020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ed024: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ed024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ed028: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2ed028u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed02c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ed02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ed030: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2ed030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed034: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ed034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ed038: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ed038u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed03c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ed03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ed040: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ed040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ed044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ed048: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ed048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed04c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ed04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ed050: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ed050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ed054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ed058: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2ED058u;
    {
        const bool branch_taken_0x2ed058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED058u;
            // 0x2ed05c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed058) {
            ctx->pc = 0x2ED2E0u;
            goto label_2ed2e0;
        }
    }
    ctx->pc = 0x2ED060u;
    // 0x2ed060: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ed060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed064: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2ED064u;
    {
        const bool branch_taken_0x2ed064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed064) {
            ctx->pc = 0x2ED290u;
            goto label_2ed290;
        }
    }
    ctx->pc = 0x2ED06Cu;
    // 0x2ed06c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ed06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed070: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2ED070u;
    {
        const bool branch_taken_0x2ed070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed070) {
            ctx->pc = 0x2ED24Cu;
            goto label_2ed24c;
        }
    }
    ctx->pc = 0x2ED078u;
    // 0x2ed078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed07c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2ED07Cu;
    {
        const bool branch_taken_0x2ed07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed07c) {
            ctx->pc = 0x2ED214u;
            goto label_2ed214;
        }
    }
    ctx->pc = 0x2ED084u;
    // 0x2ed084: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED084u;
    {
        const bool branch_taken_0x2ed084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed084) {
            ctx->pc = 0x2ED094u;
            goto label_2ed094;
        }
    }
    ctx->pc = 0x2ED08Cu;
    // 0x2ed08c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2ED08Cu;
    {
        const bool branch_taken_0x2ed08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed08c) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED094u;
label_2ed094:
    // 0x2ed094: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed09c: 0x94430ef8  lhu         $v1, 0xEF8($v0)
    ctx->pc = 0x2ed09cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
label_2ed0a0:
    // 0x2ed0a0: 0x5494000e  bnel        $a0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2ED0A0u;
    {
        const bool branch_taken_0x2ed0a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ed0a0) {
            ctx->pc = 0x2ED0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED0A0u;
            // 0x2ed0a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0DCu;
            goto label_2ed0dc;
        }
    }
    ctx->pc = 0x2ED0A8u;
    // 0x2ed0a8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ed0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ed0ac: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ed0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed0b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED0B0u;
    {
        const bool branch_taken_0x2ed0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed0b0) {
            ctx->pc = 0x2ED0C0u;
            goto label_2ed0c0;
        }
    }
    ctx->pc = 0x2ED0B8u;
    // 0x2ed0b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED0B8u;
    {
        const bool branch_taken_0x2ed0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED0B8u;
            // 0x2ed0bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0b8) {
            ctx->pc = 0x2ED0D4u;
            goto label_2ed0d4;
        }
    }
    ctx->pc = 0x2ED0C0u;
label_2ed0c0:
    // 0x2ed0c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed0c4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ed0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ed0c8: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ed0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ed0cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed0d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ed0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed0d4:
    // 0x2ed0d4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2ED0D4u;
    {
        const bool branch_taken_0x2ed0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed0d4) {
            ctx->pc = 0x2ED20Cu;
            goto label_2ed20c;
        }
    }
    ctx->pc = 0x2ED0DCu;
label_2ed0dc:
    // 0x2ed0dc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ed0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ed0e0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2ED0E0u;
    {
        const bool branch_taken_0x2ed0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed0e0) {
            ctx->pc = 0x2ED0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed0a0;
        }
    }
    ctx->pc = 0x2ED0E8u;
    // 0x2ed0e8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ed0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ed0ec: 0x2822023  subu        $a0, $s4, $v0
    ctx->pc = 0x2ed0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ed0f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed0f4: 0x94430f00  lhu         $v1, 0xF00($v0)
    ctx->pc = 0x2ed0f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ed0f8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ED0F8u;
    {
        const bool branch_taken_0x2ed0f8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ED0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED0F8u;
            // 0x2ed0fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0f8) {
            ctx->pc = 0x2ED148u;
            goto label_2ed148;
        }
    }
    ctx->pc = 0x2ED100u;
label_2ed100:
    // 0x2ed100: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED100u;
    {
        const bool branch_taken_0x2ed100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ed100) {
            ctx->pc = 0x2ED104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED100u;
            // 0x2ed104: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED138u;
            goto label_2ed138;
        }
    }
    ctx->pc = 0x2ED108u;
    // 0x2ed108: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ed108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ed10c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED10Cu;
    {
        const bool branch_taken_0x2ed10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed10c) {
            ctx->pc = 0x2ED11Cu;
            goto label_2ed11c;
        }
    }
    ctx->pc = 0x2ED114u;
    // 0x2ed114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED114u;
    {
        const bool branch_taken_0x2ed114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED114u;
            // 0x2ed118: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed114) {
            ctx->pc = 0x2ED130u;
            goto label_2ed130;
        }
    }
    ctx->pc = 0x2ED11Cu;
label_2ed11c:
    // 0x2ed11c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed120: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ed120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ed124: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2ed124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2ed128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed12c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ed12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed130:
    // 0x2ed130: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2ED130u;
    {
        const bool branch_taken_0x2ed130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed130) {
            ctx->pc = 0x2ED20Cu;
            goto label_2ed20c;
        }
    }
    ctx->pc = 0x2ED138u;
label_2ed138:
    // 0x2ed138: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ed138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ed13c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2ED13Cu;
    {
        const bool branch_taken_0x2ed13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed13c) {
            ctx->pc = 0x2ED100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed100;
        }
    }
    ctx->pc = 0x2ED144u;
    // 0x2ed144: 0x0  nop
    ctx->pc = 0x2ed144u;
    // NOP
label_2ed148:
    // 0x2ed148: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ed148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ed14c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ed14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ed150: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed154: 0x94430f08  lhu         $v1, 0xF08($v0)
    ctx->pc = 0x2ed154u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ed158: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ED158u;
    {
        const bool branch_taken_0x2ed158 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ED15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED158u;
            // 0x2ed15c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed158) {
            ctx->pc = 0x2ED1A8u;
            goto label_2ed1a8;
        }
    }
    ctx->pc = 0x2ED160u;
label_2ed160:
    // 0x2ed160: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED160u;
    {
        const bool branch_taken_0x2ed160 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ed160) {
            ctx->pc = 0x2ED164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED160u;
            // 0x2ed164: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED198u;
            goto label_2ed198;
        }
    }
    ctx->pc = 0x2ED168u;
    // 0x2ed168: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ed168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ed16c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED16Cu;
    {
        const bool branch_taken_0x2ed16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed16c) {
            ctx->pc = 0x2ED17Cu;
            goto label_2ed17c;
        }
    }
    ctx->pc = 0x2ED174u;
    // 0x2ed174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED174u;
    {
        const bool branch_taken_0x2ed174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED174u;
            // 0x2ed178: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed174) {
            ctx->pc = 0x2ED190u;
            goto label_2ed190;
        }
    }
    ctx->pc = 0x2ED17Cu;
label_2ed17c:
    // 0x2ed17c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed180: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ed180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ed184: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ed184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ed188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed18c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ed18cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed190:
    // 0x2ed190: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2ED190u;
    {
        const bool branch_taken_0x2ed190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed190) {
            ctx->pc = 0x2ED20Cu;
            goto label_2ed20c;
        }
    }
    ctx->pc = 0x2ED198u;
label_2ed198:
    // 0x2ed198: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ed198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ed19c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2ED19Cu;
    {
        const bool branch_taken_0x2ed19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed19c) {
            ctx->pc = 0x2ED160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed160;
        }
    }
    ctx->pc = 0x2ED1A4u;
    // 0x2ed1a4: 0x0  nop
    ctx->pc = 0x2ed1a4u;
    // NOP
label_2ed1a8:
    // 0x2ed1a8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ed1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ed1ac: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ed1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ed1b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed1b4: 0x94430f10  lhu         $v1, 0xF10($v0)
    ctx->pc = 0x2ed1b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2ed1b8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ED1B8u;
    {
        const bool branch_taken_0x2ed1b8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ED1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED1B8u;
            // 0x2ed1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1b8) {
            ctx->pc = 0x2ED208u;
            goto label_2ed208;
        }
    }
    ctx->pc = 0x2ED1C0u;
label_2ed1c0:
    // 0x2ed1c0: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED1C0u;
    {
        const bool branch_taken_0x2ed1c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ed1c0) {
            ctx->pc = 0x2ED1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED1C0u;
            // 0x2ed1c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED1F8u;
            goto label_2ed1f8;
        }
    }
    ctx->pc = 0x2ED1C8u;
    // 0x2ed1c8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ed1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ed1cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED1CCu;
    {
        const bool branch_taken_0x2ed1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1cc) {
            ctx->pc = 0x2ED1DCu;
            goto label_2ed1dc;
        }
    }
    ctx->pc = 0x2ED1D4u;
    // 0x2ed1d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED1D4u;
    {
        const bool branch_taken_0x2ed1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED1D4u;
            // 0x2ed1d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1d4) {
            ctx->pc = 0x2ED1F0u;
            goto label_2ed1f0;
        }
    }
    ctx->pc = 0x2ED1DCu;
label_2ed1dc:
    // 0x2ed1dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed1e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ed1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ed1e4: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ed1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ed1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed1ec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ed1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed1f0:
    // 0x2ed1f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED1F0u;
    {
        const bool branch_taken_0x2ed1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1f0) {
            ctx->pc = 0x2ED20Cu;
            goto label_2ed20c;
        }
    }
    ctx->pc = 0x2ED1F8u;
label_2ed1f8:
    // 0x2ed1f8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ed1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ed1fc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2ED1FCu;
    {
        const bool branch_taken_0x2ed1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1fc) {
            ctx->pc = 0x2ED1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed1c0;
        }
    }
    ctx->pc = 0x2ED204u;
    // 0x2ed204: 0x0  nop
    ctx->pc = 0x2ed204u;
    // NOP
label_2ed208:
    // 0x2ed208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ed208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed20c:
    // 0x2ed20c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2ED20Cu;
    {
        const bool branch_taken_0x2ed20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed20c) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED214u;
label_2ed214:
    // 0x2ed214: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed218: 0x94420ef8  lhu         $v0, 0xEF8($v0)
    ctx->pc = 0x2ed218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ed21c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ed21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED220u;
    {
        const bool branch_taken_0x2ed220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed220) {
            ctx->pc = 0x2ED230u;
            goto label_2ed230;
        }
    }
    ctx->pc = 0x2ED228u;
    // 0x2ed228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED228u;
    {
        const bool branch_taken_0x2ed228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed228) {
            ctx->pc = 0x2ED244u;
            goto label_2ed244;
        }
    }
    ctx->pc = 0x2ED230u;
label_2ed230:
    // 0x2ed230: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed234: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ed234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ed238: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ed238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ed23c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed240: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ed240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed244:
    // 0x2ed244: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2ED244u;
    {
        const bool branch_taken_0x2ed244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed244) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED24Cu;
label_2ed24c:
    // 0x2ed24c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ed24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ed250: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed254: 0x94630ef8  lhu         $v1, 0xEF8($v1)
    ctx->pc = 0x2ed254u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ed258: 0x94420f00  lhu         $v0, 0xF00($v0)
    ctx->pc = 0x2ed258u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ed25c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ed25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ed260: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ed260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed264: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED264u;
    {
        const bool branch_taken_0x2ed264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed264) {
            ctx->pc = 0x2ED274u;
            goto label_2ed274;
        }
    }
    ctx->pc = 0x2ED26Cu;
    // 0x2ed26c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED26Cu;
    {
        const bool branch_taken_0x2ed26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed26c) {
            ctx->pc = 0x2ED288u;
            goto label_2ed288;
        }
    }
    ctx->pc = 0x2ED274u;
label_2ed274:
    // 0x2ed274: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ed278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed27c: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2ed27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2ed280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed284: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ed284u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed288:
    // 0x2ed288: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2ED288u;
    {
        const bool branch_taken_0x2ed288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed288) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED290u;
label_2ed290:
    // 0x2ed290: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed294: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ed294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ed298: 0x94440ef8  lhu         $a0, 0xEF8($v0)
    ctx->pc = 0x2ed298u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ed29c: 0x94630f00  lhu         $v1, 0xF00($v1)
    ctx->pc = 0x2ed29cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3840)));
    // 0x2ed2a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed2a4: 0x94420f08  lhu         $v0, 0xF08($v0)
    ctx->pc = 0x2ed2a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ed2a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ed2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ed2ac: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ed2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ed2b0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ed2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed2b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED2B4u;
    {
        const bool branch_taken_0x2ed2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed2b4) {
            ctx->pc = 0x2ED2C4u;
            goto label_2ed2c4;
        }
    }
    ctx->pc = 0x2ED2BCu;
    // 0x2ed2bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED2BCu;
    {
        const bool branch_taken_0x2ed2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed2bc) {
            ctx->pc = 0x2ED2D8u;
            goto label_2ed2d8;
        }
    }
    ctx->pc = 0x2ED2C4u;
label_2ed2c4:
    // 0x2ed2c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed2c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ed2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed2cc: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ed2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ed2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed2d4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ed2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed2d8:
    // 0x2ed2d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2ED2D8u;
    {
        const bool branch_taken_0x2ed2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed2d8) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED2E0u;
label_2ed2e0:
    // 0x2ed2e0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ed2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ed2e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed2e8: 0x94650ef8  lhu         $a1, 0xEF8($v1)
    ctx->pc = 0x2ed2e8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ed2ec: 0x94440f00  lhu         $a0, 0xF00($v0)
    ctx->pc = 0x2ed2ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ed2f0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ed2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ed2f4: 0x94630f08  lhu         $v1, 0xF08($v1)
    ctx->pc = 0x2ed2f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3848)));
    // 0x2ed2f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed2fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ed2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ed300: 0x94420f10  lhu         $v0, 0xF10($v0)
    ctx->pc = 0x2ed300u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2ed304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ed304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ed308: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ed308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ed30c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ed30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ed310: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ed310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED314u;
    {
        const bool branch_taken_0x2ed314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed314) {
            ctx->pc = 0x2ED324u;
            goto label_2ed324;
        }
    }
    ctx->pc = 0x2ED31Cu;
    // 0x2ed31c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED31Cu;
    {
        const bool branch_taken_0x2ed31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed31c) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED324u;
label_2ed324:
    // 0x2ed324: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ed328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed32c: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ed32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ed330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed334: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ed334u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed338:
    // 0x2ed338: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED338u;
    {
        const bool branch_taken_0x2ed338 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed338) {
            ctx->pc = 0x2ED348u;
            goto label_2ed348;
        }
    }
    ctx->pc = 0x2ED340u;
    // 0x2ed340: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2ED340u;
    {
        const bool branch_taken_0x2ed340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED340u;
            // 0x2ed344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed340) {
            ctx->pc = 0x2ED41Cu;
            goto label_2ed41c;
        }
    }
    ctx->pc = 0x2ED348u;
label_2ed348:
    // 0x2ed348: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed34c: 0x944314a0  lhu         $v1, 0x14A0($v0)
    ctx->pc = 0x2ed34cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5280)));
    // 0x2ed350: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed354: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED354u;
    {
        const bool branch_taken_0x2ed354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED354u;
            // 0x2ed358: 0xa7a0009e  sh          $zero, 0x9E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 158), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed354) {
            ctx->pc = 0x2ED364u;
            goto label_2ed364;
        }
    }
    ctx->pc = 0x2ED35Cu;
    // 0x2ed35c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed360: 0xa44014a0  sh          $zero, 0x14A0($v0)
    ctx->pc = 0x2ed360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5280), (uint16_t)GPR_U32(ctx, 0));
label_2ed364:
    // 0x2ed364: 0xc040180  jal         func_100600
    ctx->pc = 0x2ED364u;
    SET_GPR_U32(ctx, 31, 0x2ED36Cu);
    ctx->pc = 0x2ED368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED364u;
            // 0x2ed368: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED36Cu; }
        if (ctx->pc != 0x2ED36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED36Cu; }
        if (ctx->pc != 0x2ED36Cu) { return; }
    }
    ctx->pc = 0x2ED36Cu;
label_2ed36c:
    // 0x2ed36c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2ED36Cu;
    {
        const bool branch_taken_0x2ed36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED36Cu;
            // 0x2ed370: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed36c) {
            ctx->pc = 0x2ED3E4u;
            goto label_2ed3e4;
        }
    }
    ctx->pc = 0x2ED374u;
    // 0x2ed374: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ed374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ed378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed37c: 0x3445f76e  ori         $a1, $v0, 0xF76E
    ctx->pc = 0x2ed37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63342);
    // 0x2ed380: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ed380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ed384: 0xc0ba470  jal         func_2E91C0
    ctx->pc = 0x2ED384u;
    SET_GPR_U32(ctx, 31, 0x2ED38Cu);
    ctx->pc = 0x2ED388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED384u;
            // 0x2ed388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E91C0u;
    if (runtime->hasFunction(0x2E91C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E91C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED38Cu; }
        if (ctx->pc != 0x2ED38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E91C0_0x2e91c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED38Cu; }
        if (ctx->pc != 0x2ED38Cu) { return; }
    }
    ctx->pc = 0x2ED38Cu;
label_2ed38c:
    // 0x2ed38c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ed38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ed390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ed390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed394: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x2ed394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x2ed398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed39c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ed39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ed3a0: 0x27a6009e  addiu       $a2, $sp, 0x9E
    ctx->pc = 0x2ed3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 158));
    // 0x2ed3a4: 0xa2150078  sb          $s5, 0x78($s0)
    ctx->pc = 0x2ed3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 21));
    // 0x2ed3a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ed3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed3ac: 0xa2170079  sb          $s7, 0x79($s0)
    ctx->pc = 0x2ed3acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 23));
    // 0x2ed3b0: 0xa614007a  sh          $s4, 0x7A($s0)
    ctx->pc = 0x2ed3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 20));
    // 0x2ed3b4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2ed3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2ed3b8: 0xa2000084  sb          $zero, 0x84($s0)
    ctx->pc = 0x2ed3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed3bc: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2ed3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x2ed3c0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x2ed3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x2ed3c4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2ed3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2ed3c8: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x2ed3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x2ed3cc: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2ed3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2ed3d0: 0xae1300f4  sw          $s3, 0xF4($s0)
    ctx->pc = 0x2ed3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 19));
    // 0x2ed3d4: 0xc0ba43c  jal         func_2E90F0
    ctx->pc = 0x2ED3D4u;
    SET_GPR_U32(ctx, 31, 0x2ED3DCu);
    ctx->pc = 0x2ED3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3D4u;
            // 0x2ed3d8: 0xae1600f8  sw          $s6, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E90F0u;
    if (runtime->hasFunction(0x2E90F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED3DCu; }
        if (ctx->pc != 0x2ED3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E90F0_0x2e90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED3DCu; }
        if (ctx->pc != 0x2ED3DCu) { return; }
    }
    ctx->pc = 0x2ED3DCu;
label_2ed3dc:
    // 0x2ed3dc: 0xc0ba1e8  jal         func_2E87A0
    ctx->pc = 0x2ED3DCu;
    SET_GPR_U32(ctx, 31, 0x2ED3E4u);
    ctx->pc = 0x2ED3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3DCu;
            // 0x2ed3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E87A0u;
    if (runtime->hasFunction(0x2E87A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E87A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED3E4u; }
        if (ctx->pc != 0x2ED3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E87A0_0x2e87a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED3E4u; }
        if (ctx->pc != 0x2ED3E4u) { return; }
    }
    ctx->pc = 0x2ED3E4u;
label_2ed3e4:
    // 0x2ed3e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed3e8: 0x8c4214b0  lw          $v0, 0x14B0($v0)
    ctx->pc = 0x2ed3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5296)));
    // 0x2ed3ec: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x2ed3ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ed3f0: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED3F0u;
    {
        const bool branch_taken_0x2ed3f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3f0) {
            ctx->pc = 0x2ED3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3F0u;
            // 0x2ed3f4: 0x97a2009e  lhu         $v0, 0x9E($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 158)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED41Cu;
            goto label_2ed41c;
        }
    }
    ctx->pc = 0x2ED3F8u;
    // 0x2ed3f8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2ed3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ed3fc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2ed3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ed400: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ed400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ed404: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ed404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ed408: 0x248414c0  addiu       $a0, $a0, 0x14C0
    ctx->pc = 0x2ed408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
    // 0x2ed40c: 0xac4314b0  sw          $v1, 0x14B0($v0)
    ctx->pc = 0x2ed40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5296), GPR_U32(ctx, 3));
    // 0x2ed410: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2ed410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ed414: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2ed414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2ed418: 0x97a2009e  lhu         $v0, 0x9E($sp)
    ctx->pc = 0x2ed418u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 158)));
label_2ed41c:
    // 0x2ed41c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ed41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed420: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ed420u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed424: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ed424u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed428: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ed428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed42c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ed42cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ed430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ed434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed440: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED440u;
            // 0x2ed444: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED448u;
    // 0x2ed448: 0x0  nop
    ctx->pc = 0x2ed448u;
    // NOP
    // 0x2ed44c: 0x0  nop
    ctx->pc = 0x2ed44cu;
    // NOP
}
