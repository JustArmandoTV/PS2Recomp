#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497100
// Address: 0x497100 - 0x497510
void sub_00497100_0x497100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497100_0x497100");
#endif

    switch (ctx->pc) {
        case 0x497178u: goto label_497178;
        case 0x497180u: goto label_497180;
        case 0x4971d0u: goto label_4971d0;
        case 0x497214u: goto label_497214;
        case 0x497264u: goto label_497264;
        case 0x4972d8u: goto label_4972d8;
        case 0x497300u: goto label_497300;
        case 0x497350u: goto label_497350;
        case 0x497388u: goto label_497388;
        case 0x4973acu: goto label_4973ac;
        case 0x4973b4u: goto label_4973b4;
        case 0x4973d4u: goto label_4973d4;
        case 0x497418u: goto label_497418;
        case 0x497454u: goto label_497454;
        case 0x4974d8u: goto label_4974d8;
        case 0x4974ecu: goto label_4974ec;
        default: break;
    }

    ctx->pc = 0x497100u;

    // 0x497100: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x497100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x497104: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x497104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x497108: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x497108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x49710c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x497110: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x497110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497114: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x497114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x497118: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x497118u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49711c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x497120: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x497120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x497124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x497128: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x497128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49712c: 0x126000ef  beqz        $s3, . + 4 + (0xEF << 2)
    ctx->pc = 0x49712Cu;
    {
        const bool branch_taken_0x49712c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x497130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49712Cu;
            // 0x497130: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49712c) {
            ctx->pc = 0x4974ECu;
            goto label_4974ec;
        }
    }
    ctx->pc = 0x497134u;
    // 0x497134: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x497134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x497138: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x497138u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x49713c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x49713Cu;
    {
        const bool branch_taken_0x49713c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49713c) {
            ctx->pc = 0x497160u;
            goto label_497160;
        }
    }
    ctx->pc = 0x497144u;
    // 0x497144: 0x3c031fff  lui         $v1, 0x1FFF
    ctx->pc = 0x497144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8191 << 16));
    // 0x497148: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x497148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49714c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49714cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497150: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x497150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x497154: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x497154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497158: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x497158u;
    {
        const bool branch_taken_0x497158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497158) {
            ctx->pc = 0x49715Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497158u;
            // 0x49715c: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497184u;
            goto label_497184;
        }
    }
    ctx->pc = 0x497160u;
label_497160:
    // 0x497160: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x497160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x497164: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x497164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x497168: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x497168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x49716c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x49716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x497170: 0xc049e92  jal         func_127A48
    ctx->pc = 0x497170u;
    SET_GPR_U32(ctx, 31, 0x497178u);
    ctx->pc = 0x497174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497170u;
            // 0x497174: 0x24a50910  addiu       $a1, $a1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497178u; }
        if (ctx->pc != 0x497178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497178u; }
        if (ctx->pc != 0x497178u) { return; }
    }
    ctx->pc = 0x497178u;
label_497178:
    // 0x497178: 0xc04981a  jal         func_126068
    ctx->pc = 0x497178u;
    SET_GPR_U32(ctx, 31, 0x497180u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497180u; }
        if (ctx->pc != 0x497180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497180u; }
        if (ctx->pc != 0x497180u) { return; }
    }
    ctx->pc = 0x497180u;
label_497180:
    // 0x497180: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x497180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_497184:
    // 0x497184: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x497184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x497188: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x497188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x49718c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x49718cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497190: 0x54200064  bnel        $at, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x497190u;
    {
        const bool branch_taken_0x497190 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x497190) {
            ctx->pc = 0x497194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497190u;
            // 0x497194: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497324u;
            goto label_497324;
        }
    }
    ctx->pc = 0x497198u;
    // 0x497198: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x497198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x49719c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x49719cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4971a0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x4971a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4971a4: 0xf41823  subu        $v1, $a3, $s4
    ctx->pc = 0x4971a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x4971a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4971A8u;
    {
        const bool branch_taken_0x4971a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4971ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4971A8u;
            // 0x4971ac: 0x330c3  sra         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4971a8) {
            ctx->pc = 0x4971B8u;
            goto label_4971b8;
        }
    }
    ctx->pc = 0x4971B0u;
    // 0x4971b0: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x4971b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x4971b4: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x4971b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
label_4971b8:
    // 0x4971b8: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x4971b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4971bc: 0x50200025  beql        $at, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x4971BCu;
    {
        const bool branch_taken_0x4971bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4971bc) {
            ctx->pc = 0x4971C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4971BCu;
            // 0x4971c0: 0x1328c0  sll         $a1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497254u;
            goto label_497254;
        }
    }
    ctx->pc = 0x4971C4u;
    // 0x4971c4: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x4971c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4971c8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x4971C8u;
    {
        const bool branch_taken_0x4971c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4971CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4971C8u;
            // 0x4971cc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4971c8) {
            ctx->pc = 0x497208u;
            goto label_497208;
        }
    }
    ctx->pc = 0x4971D0u;
label_4971d0:
    // 0x4971d0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4971D0u;
    {
        const bool branch_taken_0x4971d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4971d0) {
            ctx->pc = 0x4971E8u;
            goto label_4971e8;
        }
    }
    ctx->pc = 0x4971D8u;
    // 0x4971d8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x4971d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4971dc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x4971dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4971e0: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x4971e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4971e4: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x4971e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_4971e8:
    // 0x4971e8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x4971e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4971ec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4971ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x4971f0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x4971f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x4971f4: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x4971f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4971f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4971f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4971fc: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x4971FCu;
    {
        const bool branch_taken_0x4971fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x497200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4971FCu;
            // 0x497200: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4971fc) {
            ctx->pc = 0x4971D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4971d0;
        }
    }
    ctx->pc = 0x497204u;
    // 0x497204: 0x0  nop
    ctx->pc = 0x497204u;
    // NOP
label_497208:
    // 0x497208: 0x287082b  sltu        $at, $s4, $a3
    ctx->pc = 0x497208u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49720c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x49720Cu;
    {
        const bool branch_taken_0x49720c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x497210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49720Cu;
            // 0x497210: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49720c) {
            ctx->pc = 0x4972F8u;
            goto label_4972f8;
        }
    }
    ctx->pc = 0x497214u;
label_497214:
    // 0x497214: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x497214u;
    {
        const bool branch_taken_0x497214 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x497214) {
            ctx->pc = 0x497230u;
            goto label_497230;
        }
    }
    ctx->pc = 0x49721Cu;
    // 0x49721c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x49721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497220: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x497220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497224: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x497224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x497228: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x497228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x49722c: 0x0  nop
    ctx->pc = 0x49722cu;
    // NOP
label_497230:
    // 0x497230: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x497230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x497234: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x497234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x497238: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x497238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x49723c: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x49723cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x497240: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x497240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x497244: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x497244u;
    {
        const bool branch_taken_0x497244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x497248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497244u;
            // 0x497248: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497244) {
            ctx->pc = 0x497214u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497214;
        }
    }
    ctx->pc = 0x49724Cu;
    // 0x49724c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x49724Cu;
    {
        const bool branch_taken_0x49724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49724c) {
            ctx->pc = 0x4972F8u;
            goto label_4972f8;
        }
    }
    ctx->pc = 0x497254u;
label_497254:
    // 0x497254: 0xe54823  subu        $t1, $a3, $a1
    ctx->pc = 0x497254u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x497258: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x497258u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49725c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x49725Cu;
    {
        const bool branch_taken_0x49725c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x497260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49725Cu;
            // 0x497260: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49725c) {
            ctx->pc = 0x4972A0u;
            goto label_4972a0;
        }
    }
    ctx->pc = 0x497264u;
label_497264:
    // 0x497264: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x497264u;
    {
        const bool branch_taken_0x497264 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x497264) {
            ctx->pc = 0x497280u;
            goto label_497280;
        }
    }
    ctx->pc = 0x49726Cu;
    // 0x49726c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x49726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497270: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x497270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497274: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x497274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x497278: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x497278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x49727c: 0x0  nop
    ctx->pc = 0x49727cu;
    // NOP
label_497280:
    // 0x497280: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x497280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x497284: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x497284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x497288: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x497288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x49728c: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x49728cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x497290: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x497290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x497294: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x497294u;
    {
        const bool branch_taken_0x497294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x497298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497294u;
            // 0x497298: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497294) {
            ctx->pc = 0x497264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497264;
        }
    }
    ctx->pc = 0x49729Cu;
    // 0x49729c: 0x0  nop
    ctx->pc = 0x49729cu;
    // NOP
label_4972a0:
    // 0x4972a0: 0xd31823  subu        $v1, $a2, $s3
    ctx->pc = 0x4972a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x4972a4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x4972a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4972a8: 0xe41823  subu        $v1, $a3, $a0
    ctx->pc = 0x4972a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4972ac: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x4972acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4972b0: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4972B0u;
    {
        const bool branch_taken_0x4972b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4972b0) {
            ctx->pc = 0x4972B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4972B0u;
            // 0x4972b4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4972CCu;
            goto label_4972cc;
        }
    }
    ctx->pc = 0x4972B8u;
    // 0x4972b8: 0x247082b  sltu        $at, $s2, $a3
    ctx->pc = 0x4972b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4972bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x4972BCu;
    {
        const bool branch_taken_0x4972bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4972bc) {
            ctx->pc = 0x4972C8u;
            goto label_4972c8;
        }
    }
    ctx->pc = 0x4972C4u;
    // 0x4972c4: 0x2459021  addu        $s2, $s2, $a1
    ctx->pc = 0x4972c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4972c8:
    // 0x4972c8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x4972c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_4972cc:
    // 0x4972cc: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x4972ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4972d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x4972D0u;
    {
        const bool branch_taken_0x4972d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4972d0) {
            ctx->pc = 0x4972F8u;
            goto label_4972f8;
        }
    }
    ctx->pc = 0x4972D8u;
label_4972d8:
    // 0x4972d8: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x4972d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x4972dc: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x4972dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x4972e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4972e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4972e4: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x4972e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4972e8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4972e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4972ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4972ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4972f0: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4972F0u;
    {
        const bool branch_taken_0x4972f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4972F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4972F0u;
            // 0x4972f4: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4972f0) {
            ctx->pc = 0x4972D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4972d8;
        }
    }
    ctx->pc = 0x4972F8u;
label_4972f8:
    // 0x4972f8: 0x5260007d  beql        $s3, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x4972F8u;
    {
        const bool branch_taken_0x4972f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4972f8) {
            ctx->pc = 0x4972FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4972F8u;
            // 0x4972fc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4974F0u;
            goto label_4974f0;
        }
    }
    ctx->pc = 0x497300u;
label_497300:
    // 0x497300: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x497300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497304: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x497304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x497308: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x497308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x49730c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x49730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x497310: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x497310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x497314: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497314u;
    {
        const bool branch_taken_0x497314 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x497318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497314u;
            // 0x497318: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497314) {
            ctx->pc = 0x497300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497300;
        }
    }
    ctx->pc = 0x49731Cu;
    // 0x49731c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x49731Cu;
    {
        const bool branch_taken_0x49731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49731c) {
            ctx->pc = 0x4974ECu;
            goto label_4974ec;
        }
    }
    ctx->pc = 0x497324u;
label_497324:
    // 0x497324: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x497324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x497328: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x497328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x49732c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x49732cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x497330: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x497330u;
    {
        const bool branch_taken_0x497330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x497330) {
            ctx->pc = 0x497334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497330u;
            // 0x497334: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497338u;
            goto label_497338;
        }
    }
    ctx->pc = 0x497338u;
label_497338:
    // 0x497338: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x497338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49733c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x49733Cu;
    {
        const bool branch_taken_0x49733c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49733c) {
            ctx->pc = 0x497380u;
            goto label_497380;
        }
    }
    ctx->pc = 0x497344u;
    // 0x497344: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x497344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
    // 0x497348: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x497348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49734c: 0x3c010fff  lui         $at, 0xFFF
    ctx->pc = 0x49734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
label_497350:
    // 0x497350: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x497350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x497354: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x497354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x497358: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x497358u;
    {
        const bool branch_taken_0x497358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497358) {
            ctx->pc = 0x497368u;
            goto label_497368;
        }
    }
    ctx->pc = 0x497360u;
    // 0x497360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x497360u;
    {
        const bool branch_taken_0x497360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497360u;
            // 0x497364: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497360) {
            ctx->pc = 0x497370u;
            goto label_497370;
        }
    }
    ctx->pc = 0x497368u;
label_497368:
    // 0x497368: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x497368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49736c: 0x0  nop
    ctx->pc = 0x49736cu;
    // NOP
label_497370:
    // 0x497370: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x497370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497374: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x497374u;
    {
        const bool branch_taken_0x497374 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x497374) {
            ctx->pc = 0x497378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497374u;
            // 0x497378: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497350;
        }
    }
    ctx->pc = 0x49737Cu;
    // 0x49737c: 0x0  nop
    ctx->pc = 0x49737cu;
    // NOP
label_497380:
    // 0x497380: 0xc040180  jal         func_100600
    ctx->pc = 0x497380u;
    SET_GPR_U32(ctx, 31, 0x497388u);
    ctx->pc = 0x497384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497380u;
            // 0x497384: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497388u; }
        if (ctx->pc != 0x497388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497388u; }
        if (ctx->pc != 0x497388u) { return; }
    }
    ctx->pc = 0x497388u;
label_497388:
    // 0x497388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x497388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49738c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x49738Cu;
    {
        const bool branch_taken_0x49738c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49738c) {
            ctx->pc = 0x497390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49738Cu;
            // 0x497390: 0xafb10070  sw          $s1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4973B8u;
            goto label_4973b8;
        }
    }
    ctx->pc = 0x497394u;
    // 0x497394: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x497394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x497398: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x497398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x49739c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x49739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4973a0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4973a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4973a4: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4973A4u;
    SET_GPR_U32(ctx, 31, 0x4973ACu);
    ctx->pc = 0x4973A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4973A4u;
            // 0x4973a8: 0x24a50950  addiu       $a1, $a1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4973ACu; }
        if (ctx->pc != 0x4973ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4973ACu; }
        if (ctx->pc != 0x4973ACu) { return; }
    }
    ctx->pc = 0x4973ACu;
label_4973ac:
    // 0x4973ac: 0xc04981a  jal         func_126068
    ctx->pc = 0x4973ACu;
    SET_GPR_U32(ctx, 31, 0x4973B4u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4973B4u; }
        if (ctx->pc != 0x4973B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4973B4u; }
        if (ctx->pc != 0x4973B4u) { return; }
    }
    ctx->pc = 0x4973B4u;
label_4973b4:
    // 0x4973b4: 0xafb10070  sw          $s1, 0x70($sp)
    ctx->pc = 0x4973b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
label_4973b8:
    // 0x4973b8: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x4973b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
    // 0x4973bc: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x4973bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4973c0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4973c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4973c4: 0xb4082b  sltu        $at, $a1, $s4
    ctx->pc = 0x4973c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4973c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4973c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4973cc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x4973CCu;
    {
        const bool branch_taken_0x4973cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4973D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4973CCu;
            // 0x4973d0: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4973cc) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x4973D4u;
label_4973d4:
    // 0x4973d4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4973D4u;
    {
        const bool branch_taken_0x4973d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4973d4) {
            ctx->pc = 0x4973F0u;
            goto label_4973f0;
        }
    }
    ctx->pc = 0x4973DCu;
    // 0x4973dc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x4973dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4973e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4973e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4973e4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x4973e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4973e8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x4973e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4973ec: 0x0  nop
    ctx->pc = 0x4973ecu;
    // NOP
label_4973f0:
    // 0x4973f0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x4973f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4973f4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4973f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4973f8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4973f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4973fc: 0xb4102b  sltu        $v0, $a1, $s4
    ctx->pc = 0x4973fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x497400: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497404: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x497404u;
    {
        const bool branch_taken_0x497404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497404u;
            // 0x497408: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497404) {
            ctx->pc = 0x4973D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4973d4;
        }
    }
    ctx->pc = 0x49740Cu;
    // 0x49740c: 0x0  nop
    ctx->pc = 0x49740cu;
    // NOP
label_497410:
    // 0x497410: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x497410u;
    {
        const bool branch_taken_0x497410 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x497410) {
            ctx->pc = 0x497448u;
            goto label_497448;
        }
    }
    ctx->pc = 0x497418u;
label_497418:
    // 0x497418: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x497418u;
    {
        const bool branch_taken_0x497418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x497418) {
            ctx->pc = 0x497430u;
            goto label_497430;
        }
    }
    ctx->pc = 0x497420u;
    // 0x497420: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x497420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497424: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x497424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497428: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x497428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x49742c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x49742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_497430:
    // 0x497430: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x497430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x497434: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x497434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x497438: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x497438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x49743c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x497440: 0x1660fff5  bnez        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x497440u;
    {
        const bool branch_taken_0x497440 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x497444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497440u;
            // 0x497444: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497440) {
            ctx->pc = 0x497418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497418;
        }
    }
    ctx->pc = 0x497448u;
label_497448:
    // 0x497448: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x497448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49744c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x49744Cu;
    {
        const bool branch_taken_0x49744c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49744c) {
            ctx->pc = 0x497490u;
            goto label_497490;
        }
    }
    ctx->pc = 0x497454u;
label_497454:
    // 0x497454: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x497454u;
    {
        const bool branch_taken_0x497454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x497454) {
            ctx->pc = 0x497470u;
            goto label_497470;
        }
    }
    ctx->pc = 0x49745Cu;
    // 0x49745c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x49745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497460: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x497460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497464: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x497464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x497468: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x497468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x49746c: 0x0  nop
    ctx->pc = 0x49746cu;
    // NOP
label_497470:
    // 0x497470: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x497470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x497474: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x497474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x497478: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x497478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x49747c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x49747cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497480: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497484: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x497484u;
    {
        const bool branch_taken_0x497484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497484u;
            // 0x497488: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497484) {
            ctx->pc = 0x497454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497454;
        }
    }
    ctx->pc = 0x49748Cu;
    // 0x49748c: 0x0  nop
    ctx->pc = 0x49748cu;
    // NOP
label_497490:
    // 0x497490: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x497490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x497494: 0x5055000e  beql        $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x497494u;
    {
        const bool branch_taken_0x497494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x497494) {
            ctx->pc = 0x497498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497494u;
            // 0x497498: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4974D0u;
            goto label_4974d0;
        }
    }
    ctx->pc = 0x49749Cu;
    // 0x49749c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x49749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4974a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4974a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4974a4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x4974a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x4974a8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4974a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4974ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x4974acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4974b0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x4974b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4974b4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x4974b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x4974b8: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x4974b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x4974bc: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x4974bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4974c0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4974c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4974c4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x4974c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x4974c8: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x4974c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x4974cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4974ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4974d0:
    // 0x4974d0: 0xc12600c  jal         func_498030
    ctx->pc = 0x4974D0u;
    SET_GPR_U32(ctx, 31, 0x4974D8u);
    ctx->pc = 0x498030u;
    if (runtime->hasFunction(0x498030u)) {
        auto targetFn = runtime->lookupFunction(0x498030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4974D8u; }
        if (ctx->pc != 0x4974D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00498030_0x498030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4974D8u; }
        if (ctx->pc != 0x4974D8u) { return; }
    }
    ctx->pc = 0x4974D8u;
label_4974d8:
    // 0x4974d8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x4974d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4974dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4974DCu;
    {
        const bool branch_taken_0x4974dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4974dc) {
            ctx->pc = 0x4974ECu;
            goto label_4974ec;
        }
    }
    ctx->pc = 0x4974E4u;
    // 0x4974e4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4974E4u;
    SET_GPR_U32(ctx, 31, 0x4974ECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4974ECu; }
        if (ctx->pc != 0x4974ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4974ECu; }
        if (ctx->pc != 0x4974ECu) { return; }
    }
    ctx->pc = 0x4974ECu;
label_4974ec:
    // 0x4974ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4974ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4974f0:
    // 0x4974f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4974f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4974f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4974f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4974f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4974f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4974fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4974fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497508: 0x3e00008  jr          $ra
    ctx->pc = 0x497508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49750Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497508u;
            // 0x49750c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497510u;
}
