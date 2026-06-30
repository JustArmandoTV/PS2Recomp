#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD078
// Address: 0x1cd078 - 0x1cd4a0
void sub_001CD078_0x1cd078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD078_0x1cd078");
#endif

    switch (ctx->pc) {
        case 0x1cd0d0u: goto label_1cd0d0;
        case 0x1cd120u: goto label_1cd120;
        case 0x1cd164u: goto label_1cd164;
        case 0x1cd194u: goto label_1cd194;
        case 0x1cd230u: goto label_1cd230;
        case 0x1cd280u: goto label_1cd280;
        case 0x1cd2c4u: goto label_1cd2c4;
        case 0x1cd2f4u: goto label_1cd2f4;
        case 0x1cd390u: goto label_1cd390;
        case 0x1cd3e0u: goto label_1cd3e0;
        case 0x1cd434u: goto label_1cd434;
        case 0x1cd464u: goto label_1cd464;
        default: break;
    }

    ctx->pc = 0x1cd078u;

    // 0x1cd078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd07c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1cd07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd080: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd084: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1cd084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd088: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cd088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cd08c: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1cd08cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x1cd090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd094: 0x2646a70c  addiu       $a2, $s2, -0x58F4
    ctx->pc = 0x1cd094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944524));
    // 0x1cd098: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cd098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cd09c: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1cd09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1cd0a0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1cd0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cd0a4: 0x80830ab7  lb          $v1, 0xAB7($a0)
    ctx->pc = 0x1cd0a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2743)));
    // 0x1cd0a8: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CD0A8u;
    {
        const bool branch_taken_0x1cd0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0A8u;
            // 0x1cd0ac: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0a8) {
            ctx->pc = 0x1CD1B4u;
            goto label_1cd1b4;
        }
    }
    ctx->pc = 0x1CD0B0u;
    // 0x1cd0b0: 0xa0910ab7  sb          $s1, 0xAB7($a0)
    ctx->pc = 0x1cd0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2743), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cd0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd0b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cd0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cd0bc: 0x90640ab8  lbu         $a0, 0xAB8($v1)
    ctx->pc = 0x1cd0bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cd0c0: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CD0C0u;
    {
        const bool branch_taken_0x1cd0c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd0c0) {
            ctx->pc = 0x1CD0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0C0u;
            // 0x1cd0c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD0F0u;
            goto label_1cd0f0;
        }
    }
    ctx->pc = 0x1CD0C8u;
    // 0x1cd0c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD0C8u;
    {
        const bool branch_taken_0x1cd0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0C8u;
            // 0x1cd0cc: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0c8) {
            ctx->pc = 0x1CD0F0u;
            goto label_1cd0f0;
        }
    }
    ctx->pc = 0x1CD0D0u;
label_1cd0d0:
    // 0x1cd0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd0d4: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x1cd0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cd0d8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cd0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd0dc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1cd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cd0e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cd0e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CD0E4u;
    {
        const bool branch_taken_0x1cd0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0E4u;
            // 0x1cd0e8: 0xa0430b8c  sb          $v1, 0xB8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2956), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0e4) {
            ctx->pc = 0x1CD144u;
            goto label_1cd144;
        }
    }
    ctx->pc = 0x1CD0ECu;
    // 0x1cd0ec: 0x0  nop
    ctx->pc = 0x1cd0ecu;
    // NOP
label_1cd0f0:
    // 0x1cd0f0: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x1cd0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1cd0f4: 0x2c4200a9  sltiu       $v0, $v0, 0xA9
    ctx->pc = 0x1cd0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)169) ? 1 : 0);
    // 0x1cd0f8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD0F8u;
    {
        const bool branch_taken_0x1cd0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd0f8) {
            ctx->pc = 0x1CD0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0F8u;
            // 0x1cd0fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD144u;
            goto label_1cd144;
        }
    }
    ctx->pc = 0x1CD100u;
    // 0x1cd100: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD100u;
    {
        const bool branch_taken_0x1cd100 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD100u;
            // 0x1cd104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd100) {
            ctx->pc = 0x1CD144u;
            goto label_1cd144;
        }
    }
    ctx->pc = 0x1CD108u;
    // 0x1cd108: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1cd10c: 0x244aa70c  addiu       $t2, $v0, -0x58F4
    ctx->pc = 0x1cd10cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944524));
    // 0x1cd110: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1cd110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cd114: 0x24640acc  addiu       $a0, $v1, 0xACC
    ctx->pc = 0x1cd114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2764));
    // 0x1cd118: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cd118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd11c: 0x0  nop
    ctx->pc = 0x1cd11cu;
    // NOP
label_1cd120:
    // 0x1cd120: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1cd120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd124: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CD124u;
    {
        const bool branch_taken_0x1cd124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD124u;
            // 0x1cd128: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd124) {
            ctx->pc = 0x1CD0D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd0d0;
        }
    }
    ctx->pc = 0x1CD12Cu;
    // 0x1cd12c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cd130: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1cd130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1cd134: 0x0  nop
    ctx->pc = 0x1cd134u;
    // NOP
    // 0x1cd138: 0x0  nop
    ctx->pc = 0x1cd138u;
    // NOP
    // 0x1cd13c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CD13Cu;
    {
        const bool branch_taken_0x1cd13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD13Cu;
            // 0x1cd140: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd13c) {
            ctx->pc = 0x1CD120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd120;
        }
    }
    ctx->pc = 0x1CD144u;
label_1cd144:
    // 0x1cd144: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD144u;
    {
        const bool branch_taken_0x1cd144 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1CD148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD144u;
            // 0x1cd148: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd144) {
            ctx->pc = 0x1CD1A0u;
            goto label_1cd1a0;
        }
    }
    ctx->pc = 0x1CD14Cu;
    // 0x1cd14c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1cd14cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd150: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd154: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x1cd154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x1cd158: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd15c: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD15Cu;
    SET_GPR_U32(ctx, 31, 0x1CD164u);
    ctx->pc = 0x1CD160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD15Cu;
            // 0x1cd160: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD164u; }
        if (ctx->pc != 0x1CD164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD164u; }
        if (ctx->pc != 0x1CD164u) { return; }
    }
    ctx->pc = 0x1CD164u;
label_1cd164:
    // 0x1cd164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd168: 0x8e42a70c  lw          $v0, -0x58F4($s2)
    ctx->pc = 0x1cd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
    // 0x1cd16c: 0x90430ab8  lbu         $v1, 0xAB8($v0)
    ctx->pc = 0x1cd16cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2744)));
    // 0x1cd170: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD170u;
    {
        const bool branch_taken_0x1cd170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd170) {
            ctx->pc = 0x1CD174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD170u;
            // 0x1cd174: 0x8e43a70c  lw          $v1, -0x58F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD1A8u;
            goto label_1cd1a8;
        }
    }
    ctx->pc = 0x1CD178u;
    // 0x1cd178: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd17c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd180: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd184: 0x24061200  addiu       $a2, $zero, 0x1200
    ctx->pc = 0x1cd184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x1cd188: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x1cd188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1cd18c: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD18Cu;
    SET_GPR_U32(ctx, 31, 0x1CD194u);
    ctx->pc = 0x1CD190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD18Cu;
            // 0x1cd190: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD194u; }
        if (ctx->pc != 0x1CD194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD194u; }
        if (ctx->pc != 0x1CD194u) { return; }
    }
    ctx->pc = 0x1CD194u;
label_1cd194:
    // 0x1cd194: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD194u;
    {
        const bool branch_taken_0x1cd194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD194u;
            // 0x1cd198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd194) {
            ctx->pc = 0x1CD1A4u;
            goto label_1cd1a4;
        }
    }
    ctx->pc = 0x1CD19Cu;
    // 0x1cd19c: 0x0  nop
    ctx->pc = 0x1cd19cu;
    // NOP
label_1cd1a0:
    // 0x1cd1a0: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1cd1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cd1a4:
    // 0x1cd1a4: 0x8e43a70c  lw          $v1, -0x58F4($s2)
    ctx->pc = 0x1cd1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
label_1cd1a8:
    // 0x1cd1a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cd1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1ac: 0x84100b  movn        $v0, $a0, $a0
    ctx->pc = 0x1cd1acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1cd1b0: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd1b4:
    // 0x1cd1b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd1b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd1bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd1c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cd1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1C4u;
            // 0x1cd1c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD1CCu;
    // 0x1cd1cc: 0x0  nop
    ctx->pc = 0x1cd1ccu;
    // NOP
    // 0x1cd1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd1d4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1cd1d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd1dc: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1cd1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd1e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cd1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cd1e4: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1cd1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x1cd1e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd1ec: 0x264aa70c  addiu       $t2, $s2, -0x58F4
    ctx->pc = 0x1cd1ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944524));
    // 0x1cd1f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cd1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cd1f4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1cd1f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1f8: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1cd1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1cd1fc: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x1cd1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cd200: 0x80830ab7  lb          $v1, 0xAB7($a0)
    ctx->pc = 0x1cd200u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2743)));
    // 0x1cd204: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1CD204u;
    {
        const bool branch_taken_0x1cd204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD204u;
            // 0x1cd208: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd204) {
            ctx->pc = 0x1CD314u;
            goto label_1cd314;
        }
    }
    ctx->pc = 0x1CD20Cu;
    // 0x1cd20c: 0xa0910ab7  sb          $s1, 0xAB7($a0)
    ctx->pc = 0x1cd20cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2743), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cd210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd214: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1cd214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cd218: 0x90640ab8  lbu         $a0, 0xAB8($v1)
    ctx->pc = 0x1cd218u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cd21c: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD21Cu;
    {
        const bool branch_taken_0x1cd21c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd21c) {
            ctx->pc = 0x1CD220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD21Cu;
            // 0x1cd220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD250u;
            goto label_1cd250;
        }
    }
    ctx->pc = 0x1CD224u;
    // 0x1cd224: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CD224u;
    {
        const bool branch_taken_0x1cd224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD224u;
            // 0x1cd228: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd224) {
            ctx->pc = 0x1CD250u;
            goto label_1cd250;
        }
    }
    ctx->pc = 0x1CD22Cu;
    // 0x1cd22c: 0x0  nop
    ctx->pc = 0x1cd22cu;
    // NOP
label_1cd230:
    // 0x1cd230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd234: 0x24b10001  addiu       $s1, $a1, 0x1
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cd238: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cd238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd23c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1cd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cd240: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cd240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cd244: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CD244u;
    {
        const bool branch_taken_0x1cd244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD244u;
            // 0x1cd248: 0xa0430b8c  sb          $v1, 0xB8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2956), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd244) {
            ctx->pc = 0x1CD2A4u;
            goto label_1cd2a4;
        }
    }
    ctx->pc = 0x1CD24Cu;
    // 0x1cd24c: 0x0  nop
    ctx->pc = 0x1cd24cu;
    // NOP
label_1cd250:
    // 0x1cd250: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x1cd250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1cd254: 0x2c4200a9  sltiu       $v0, $v0, 0xA9
    ctx->pc = 0x1cd254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)169) ? 1 : 0);
    // 0x1cd258: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD258u;
    {
        const bool branch_taken_0x1cd258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd258) {
            ctx->pc = 0x1CD25Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD258u;
            // 0x1cd25c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD2A4u;
            goto label_1cd2a4;
        }
    }
    ctx->pc = 0x1CD260u;
    // 0x1cd260: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD260u;
    {
        const bool branch_taken_0x1cd260 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD260u;
            // 0x1cd264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd260) {
            ctx->pc = 0x1CD2A4u;
            goto label_1cd2a4;
        }
    }
    ctx->pc = 0x1CD268u;
    // 0x1cd268: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cd268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1cd26c: 0x244aa70c  addiu       $t2, $v0, -0x58F4
    ctx->pc = 0x1cd26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944524));
    // 0x1cd270: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1cd270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cd274: 0x24640acc  addiu       $a0, $v1, 0xACC
    ctx->pc = 0x1cd274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2764));
    // 0x1cd278: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cd278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd27c: 0x0  nop
    ctx->pc = 0x1cd27cu;
    // NOP
label_1cd280:
    // 0x1cd280: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1cd280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd284: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CD284u;
    {
        const bool branch_taken_0x1cd284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD284u;
            // 0x1cd288: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd284) {
            ctx->pc = 0x1CD230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd230;
        }
    }
    ctx->pc = 0x1CD28Cu;
    // 0x1cd28c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cd290: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1cd290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1cd294: 0x0  nop
    ctx->pc = 0x1cd294u;
    // NOP
    // 0x1cd298: 0x0  nop
    ctx->pc = 0x1cd298u;
    // NOP
    // 0x1cd29c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CD29Cu;
    {
        const bool branch_taken_0x1cd29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD29Cu;
            // 0x1cd2a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd29c) {
            ctx->pc = 0x1CD280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd280;
        }
    }
    ctx->pc = 0x1CD2A4u;
label_1cd2a4:
    // 0x1cd2a4: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD2A4u;
    {
        const bool branch_taken_0x1cd2a4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1CD2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2A4u;
            // 0x1cd2a8: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2a4) {
            ctx->pc = 0x1CD300u;
            goto label_1cd300;
        }
    }
    ctx->pc = 0x1CD2ACu;
    // 0x1cd2ac: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1cd2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1cd2b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd2b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2b8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1cd2b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2bc: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD2BCu;
    SET_GPR_U32(ctx, 31, 0x1CD2C4u);
    ctx->pc = 0x1CD2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2BCu;
            // 0x1cd2c0: 0x24060f00  addiu       $a2, $zero, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2C4u; }
        if (ctx->pc != 0x1CD2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2C4u; }
        if (ctx->pc != 0x1CD2C4u) { return; }
    }
    ctx->pc = 0x1CD2C4u;
label_1cd2c4:
    // 0x1cd2c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2c8: 0x8e42a70c  lw          $v0, -0x58F4($s2)
    ctx->pc = 0x1cd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
    // 0x1cd2cc: 0x90430ab8  lbu         $v1, 0xAB8($v0)
    ctx->pc = 0x1cd2ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2744)));
    // 0x1cd2d0: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD2D0u;
    {
        const bool branch_taken_0x1cd2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd2d0) {
            ctx->pc = 0x1CD2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2D0u;
            // 0x1cd2d4: 0x8e43a70c  lw          $v1, -0x58F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD308u;
            goto label_1cd308;
        }
    }
    ctx->pc = 0x1CD2D8u;
    // 0x1cd2d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd2dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd2e4: 0x24061200  addiu       $a2, $zero, 0x1200
    ctx->pc = 0x1cd2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x1cd2e8: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x1cd2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1cd2ec: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD2ECu;
    SET_GPR_U32(ctx, 31, 0x1CD2F4u);
    ctx->pc = 0x1CD2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2ECu;
            // 0x1cd2f0: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2F4u; }
        if (ctx->pc != 0x1CD2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2F4u; }
        if (ctx->pc != 0x1CD2F4u) { return; }
    }
    ctx->pc = 0x1CD2F4u;
label_1cd2f4:
    // 0x1cd2f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD2F4u;
    {
        const bool branch_taken_0x1cd2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2F4u;
            // 0x1cd2f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2f4) {
            ctx->pc = 0x1CD304u;
            goto label_1cd304;
        }
    }
    ctx->pc = 0x1CD2FCu;
    // 0x1cd2fc: 0x0  nop
    ctx->pc = 0x1cd2fcu;
    // NOP
label_1cd300:
    // 0x1cd300: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1cd300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cd304:
    // 0x1cd304: 0x8e43a70c  lw          $v1, -0x58F4($s2)
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
label_1cd308:
    // 0x1cd308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cd308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd30c: 0x84100b  movn        $v0, $a0, $a0
    ctx->pc = 0x1cd30cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1cd310: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd314:
    // 0x1cd314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd31c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd320: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cd320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd324: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD324u;
            // 0x1cd328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD32Cu;
    // 0x1cd32c: 0x0  nop
    ctx->pc = 0x1cd32cu;
    // NOP
    // 0x1cd330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd334: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1cd334u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd338: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd33c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1cd33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd340: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cd340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cd344: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1cd344u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x1cd348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd34c: 0x264ba70c  addiu       $t3, $s2, -0x58F4
    ctx->pc = 0x1cd34cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944524));
    // 0x1cd350: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cd350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cd354: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1cd354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd358: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x1cd358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1cd35c: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1cd35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cd360: 0x80830ab7  lb          $v1, 0xAB7($a0)
    ctx->pc = 0x1cd360u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2743)));
    // 0x1cd364: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1CD364u;
    {
        const bool branch_taken_0x1cd364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD364u;
            // 0x1cd368: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd364) {
            ctx->pc = 0x1CD484u;
            goto label_1cd484;
        }
    }
    ctx->pc = 0x1CD36Cu;
    // 0x1cd36c: 0xa0910ab7  sb          $s1, 0xAB7($a0)
    ctx->pc = 0x1cd36cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2743), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cd370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd374: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1cd374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cd378: 0x90640ab8  lbu         $a0, 0xAB8($v1)
    ctx->pc = 0x1cd378u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cd37c: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD37Cu;
    {
        const bool branch_taken_0x1cd37c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd37c) {
            ctx->pc = 0x1CD380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD37Cu;
            // 0x1cd380: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD3B0u;
            goto label_1cd3b0;
        }
    }
    ctx->pc = 0x1CD384u;
    // 0x1cd384: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CD384u;
    {
        const bool branch_taken_0x1cd384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD384u;
            // 0x1cd388: 0x240a0018  addiu       $t2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd384) {
            ctx->pc = 0x1CD3B0u;
            goto label_1cd3b0;
        }
    }
    ctx->pc = 0x1CD38Cu;
    // 0x1cd38c: 0x0  nop
    ctx->pc = 0x1cd38cu;
    // NOP
label_1cd390:
    // 0x1cd390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd394: 0x25110001  addiu       $s1, $t0, 0x1
    ctx->pc = 0x1cd394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cd398: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cd398u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd39c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1cd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cd3a0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1cd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1cd3a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CD3A4u;
    {
        const bool branch_taken_0x1cd3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3A4u;
            // 0x1cd3a8: 0xa0430b8c  sb          $v1, 0xB8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2956), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3a4) {
            ctx->pc = 0x1CD404u;
            goto label_1cd404;
        }
    }
    ctx->pc = 0x1CD3ACu;
    // 0x1cd3ac: 0x0  nop
    ctx->pc = 0x1cd3acu;
    // NOP
label_1cd3b0:
    // 0x1cd3b0: 0x24a2fff7  addiu       $v0, $a1, -0x9
    ctx->pc = 0x1cd3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
    // 0x1cd3b4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1cd3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cd3b8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD3B8u;
    {
        const bool branch_taken_0x1cd3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3b8) {
            ctx->pc = 0x1CD3BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3B8u;
            // 0x1cd3bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD404u;
            goto label_1cd404;
        }
    }
    ctx->pc = 0x1CD3C0u;
    // 0x1cd3c0: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD3C0u;
    {
        const bool branch_taken_0x1cd3c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3C0u;
            // 0x1cd3c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3c0) {
            ctx->pc = 0x1CD404u;
            goto label_1cd404;
        }
    }
    ctx->pc = 0x1CD3C8u;
    // 0x1cd3c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1cd3cc: 0x244ba70c  addiu       $t3, $v0, -0x58F4
    ctx->pc = 0x1cd3ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944524));
    // 0x1cd3d0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1cd3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cd3d4: 0x24640acc  addiu       $a0, $v1, 0xACC
    ctx->pc = 0x1cd3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2764));
    // 0x1cd3d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cd3d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3dc: 0x0  nop
    ctx->pc = 0x1cd3dcu;
    // NOP
label_1cd3e0:
    // 0x1cd3e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1cd3e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd3e4: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CD3E4u;
    {
        const bool branch_taken_0x1cd3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3E4u;
            // 0x1cd3e8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3e4) {
            ctx->pc = 0x1CD390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd390;
        }
    }
    ctx->pc = 0x1CD3ECu;
    // 0x1cd3ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cd3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cd3f0: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x1cd3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1cd3f4: 0x0  nop
    ctx->pc = 0x1cd3f4u;
    // NOP
    // 0x1cd3f8: 0x0  nop
    ctx->pc = 0x1cd3f8u;
    // NOP
    // 0x1cd3fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CD3FCu;
    {
        const bool branch_taken_0x1cd3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3FCu;
            // 0x1cd400: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3fc) {
            ctx->pc = 0x1CD3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd3e0;
        }
    }
    ctx->pc = 0x1CD404u;
label_1cd404:
    // 0x1cd404: 0x620001a  bltz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CD404u;
    {
        const bool branch_taken_0x1cd404 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1CD408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD404u;
            // 0x1cd408: 0x74400  sll         $t0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd404) {
            ctx->pc = 0x1CD470u;
            goto label_1cd470;
        }
    }
    ctx->pc = 0x1CD40Cu;
    // 0x1cd40c: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1cd40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1cd410: 0xa84025  or          $t0, $a1, $t0
    ctx->pc = 0x1cd410u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1cd414: 0x3185ffff  andi        $a1, $t4, 0xFFFF
    ctx->pc = 0x1cd414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x1cd418: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1cd418u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1cd41c: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x1cd41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1cd420: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd424: 0x350800a0  ori         $t0, $t0, 0xA0
    ctx->pc = 0x1cd424u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)160);
    // 0x1cd428: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x1cd428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x1cd42c: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD42Cu;
    SET_GPR_U32(ctx, 31, 0x1CD434u);
    ctx->pc = 0x1CD430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD42Cu;
            // 0x1cd430: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD434u; }
        if (ctx->pc != 0x1CD434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD434u; }
        if (ctx->pc != 0x1CD434u) { return; }
    }
    ctx->pc = 0x1CD434u;
label_1cd434:
    // 0x1cd434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd438: 0x8e42a70c  lw          $v0, -0x58F4($s2)
    ctx->pc = 0x1cd438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
    // 0x1cd43c: 0x90430ab8  lbu         $v1, 0xAB8($v0)
    ctx->pc = 0x1cd43cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2744)));
    // 0x1cd440: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD440u;
    {
        const bool branch_taken_0x1cd440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd440) {
            ctx->pc = 0x1CD444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD440u;
            // 0x1cd444: 0x8e43a70c  lw          $v1, -0x58F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD478u;
            goto label_1cd478;
        }
    }
    ctx->pc = 0x1CD448u;
    // 0x1cd448: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd44c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd450: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd454: 0x24061200  addiu       $a2, $zero, 0x1200
    ctx->pc = 0x1cd454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x1cd458: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1cd45c: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD45Cu;
    SET_GPR_U32(ctx, 31, 0x1CD464u);
    ctx->pc = 0x1CD460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD45Cu;
            // 0x1cd460: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD464u; }
        if (ctx->pc != 0x1CD464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD464u; }
        if (ctx->pc != 0x1CD464u) { return; }
    }
    ctx->pc = 0x1CD464u;
label_1cd464:
    // 0x1cd464: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD464u;
    {
        const bool branch_taken_0x1cd464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD464u;
            // 0x1cd468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd464) {
            ctx->pc = 0x1CD474u;
            goto label_1cd474;
        }
    }
    ctx->pc = 0x1CD46Cu;
    // 0x1cd46c: 0x0  nop
    ctx->pc = 0x1cd46cu;
    // NOP
label_1cd470:
    // 0x1cd470: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1cd470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cd474:
    // 0x1cd474: 0x8e43a70c  lw          $v1, -0x58F4($s2)
    ctx->pc = 0x1cd474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944524)));
label_1cd478:
    // 0x1cd478: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cd478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd47c: 0x84100b  movn        $v0, $a0, $a0
    ctx->pc = 0x1cd47cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1cd480: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd484:
    // 0x1cd484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd48c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd48cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd490: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cd490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd494: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD494u;
            // 0x1cd498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD49Cu;
    // 0x1cd49c: 0x0  nop
    ctx->pc = 0x1cd49cu;
    // NOP
}
