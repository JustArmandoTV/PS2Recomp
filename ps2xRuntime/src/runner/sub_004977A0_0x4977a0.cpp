#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004977A0
// Address: 0x4977a0 - 0x497c30
void sub_004977A0_0x4977a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004977A0_0x4977a0");
#endif

    switch (ctx->pc) {
        case 0x49781cu: goto label_49781c;
        case 0x497824u: goto label_497824;
        case 0x497888u: goto label_497888;
        case 0x4978d4u: goto label_4978d4;
        case 0x497934u: goto label_497934;
        case 0x4979b8u: goto label_4979b8;
        case 0x4979e8u: goto label_4979e8;
        case 0x497a40u: goto label_497a40;
        case 0x497a80u: goto label_497a80;
        case 0x497aa4u: goto label_497aa4;
        case 0x497aacu: goto label_497aac;
        case 0x497ad4u: goto label_497ad4;
        case 0x497b20u: goto label_497b20;
        case 0x497b64u: goto label_497b64;
        case 0x497bf0u: goto label_497bf0;
        case 0x497c04u: goto label_497c04;
        default: break;
    }

    ctx->pc = 0x4977a0u;

    // 0x4977a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4977a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4977a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4977a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4977a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4977a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4977ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4977acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4977b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4977b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4977b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4977b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4977b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4977b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4977bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4977bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4977c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4977c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4977c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4977c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4977c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4977c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4977cc: 0x1220010d  beqz        $s1, . + 4 + (0x10D << 2)
    ctx->pc = 0x4977CCu;
    {
        const bool branch_taken_0x4977cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4977D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4977CCu;
            // 0x4977d0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4977cc) {
            ctx->pc = 0x497C04u;
            goto label_497c04;
        }
    }
    ctx->pc = 0x4977D4u;
    // 0x4977d4: 0x3c011555  lui         $at, 0x1555
    ctx->pc = 0x4977d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5461 << 16));
    // 0x4977d8: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x4977d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x4977dc: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x4977dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4977e0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x4977E0u;
    {
        const bool branch_taken_0x4977e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4977e0) {
            ctx->pc = 0x497804u;
            goto label_497804;
        }
    }
    ctx->pc = 0x4977E8u;
    // 0x4977e8: 0x3c031555  lui         $v1, 0x1555
    ctx->pc = 0x4977e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5461 << 16));
    // 0x4977ec: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4977ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4977f0: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x4977f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x4977f4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4977f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4977f8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4977f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4977fc: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4977FCu;
    {
        const bool branch_taken_0x4977fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4977fc) {
            ctx->pc = 0x497800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4977FCu;
            // 0x497800: 0x8e660004  lw          $a2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497828u;
            goto label_497828;
        }
    }
    ctx->pc = 0x497804u;
label_497804:
    // 0x497804: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x497804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x497808: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x497808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x49780c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x49780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x497810: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x497810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x497814: 0xc049e92  jal         func_127A48
    ctx->pc = 0x497814u;
    SET_GPR_U32(ctx, 31, 0x49781Cu);
    ctx->pc = 0x497818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497814u;
            // 0x497818: 0x24a50910  addiu       $a1, $a1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49781Cu; }
        if (ctx->pc != 0x49781Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49781Cu; }
        if (ctx->pc != 0x49781Cu) { return; }
    }
    ctx->pc = 0x49781Cu;
label_49781c:
    // 0x49781c: 0xc04981a  jal         func_126068
    ctx->pc = 0x49781Cu;
    SET_GPR_U32(ctx, 31, 0x497824u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497824u; }
        if (ctx->pc != 0x497824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497824u; }
        if (ctx->pc != 0x497824u) { return; }
    }
    ctx->pc = 0x497824u;
label_497824:
    // 0x497824: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x497824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_497828:
    // 0x497828: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x497828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49782c: 0xd12021  addu        $a0, $a2, $s1
    ctx->pc = 0x49782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x497830: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x497830u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497834: 0x54200077  bnel        $at, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x497834u;
    {
        const bool branch_taken_0x497834 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x497834) {
            ctx->pc = 0x497838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497834u;
            // 0x497838: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497A14u;
            goto label_497a14;
        }
    }
    ctx->pc = 0x49783Cu;
    // 0x49783c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x49783cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x497840: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x497840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x497844: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x497844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x497848: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x497848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x49784c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x49784cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x497850: 0x3464aaab  ori         $a0, $v1, 0xAAAB
    ctx->pc = 0x497850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x497854: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x497854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x497858: 0x722823  subu        $a1, $v1, $s2
    ctx->pc = 0x497858u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x49785c: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x49785cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x497860: 0x2010  mfhi        $a0
    ctx->pc = 0x497860u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x497864: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x497864u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x497868: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x497868u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x49786c: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x49786cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x497870: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x497870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x497874: 0x50200029  beql        $at, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x497874u;
    {
        const bool branch_taken_0x497874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497874) {
            ctx->pc = 0x497878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497874u;
            // 0x497878: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49791Cu;
            goto label_49791c;
        }
    }
    ctx->pc = 0x49787Cu;
    // 0x49787c: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x49787cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x497880: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x497880u;
    {
        const bool branch_taken_0x497880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x497884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497880u;
            // 0x497884: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497880) {
            ctx->pc = 0x4978C8u;
            goto label_4978c8;
        }
    }
    ctx->pc = 0x497888u;
label_497888:
    // 0x497888: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x497888u;
    {
        const bool branch_taken_0x497888 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x497888) {
            ctx->pc = 0x4978A8u;
            goto label_4978a8;
        }
    }
    ctx->pc = 0x497890u;
    // 0x497890: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x497890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x497894: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x497894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497898: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x497898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x49789c: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x49789cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4978a0: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x4978a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4978a4: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x4978a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_4978a8:
    // 0x4978a8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4978a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4978ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4978acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4978b0: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x4978b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x4978b4: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x4978b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4978b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4978b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4978bc: 0x1420fff2  bnez        $at, . + 4 + (-0xE << 2)
    ctx->pc = 0x4978BCu;
    {
        const bool branch_taken_0x4978bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4978C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4978BCu;
            // 0x4978c0: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978bc) {
            ctx->pc = 0x497888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497888;
        }
    }
    ctx->pc = 0x4978C4u;
    // 0x4978c4: 0x0  nop
    ctx->pc = 0x4978c4u;
    // NOP
label_4978c8:
    // 0x4978c8: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x4978c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4978cc: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x4978CCu;
    {
        const bool branch_taken_0x4978cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4978D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4978CCu;
            // 0x4978d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978cc) {
            ctx->pc = 0x4979E0u;
            goto label_4979e0;
        }
    }
    ctx->pc = 0x4978D4u;
label_4978d4:
    // 0x4978d4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4978D4u;
    {
        const bool branch_taken_0x4978d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4978d4) {
            ctx->pc = 0x4978F8u;
            goto label_4978f8;
        }
    }
    ctx->pc = 0x4978DCu;
    // 0x4978dc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x4978dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4978e0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4978e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4978e4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x4978e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4978e8: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x4978e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4978ec: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x4978ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4978f0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x4978f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x4978f4: 0x0  nop
    ctx->pc = 0x4978f4u;
    // NOP
label_4978f8:
    // 0x4978f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4978f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4978fc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x4978fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x497900: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x497900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x497904: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x497904u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x497908: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x497908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49790c: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x49790Cu;
    {
        const bool branch_taken_0x49790c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x497910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49790Cu;
            // 0x497910: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49790c) {
            ctx->pc = 0x4978D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4978d4;
        }
    }
    ctx->pc = 0x497914u;
    // 0x497914: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x497914u;
    {
        const bool branch_taken_0x497914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x497914) {
            ctx->pc = 0x4979E0u;
            goto label_4979e0;
        }
    }
    ctx->pc = 0x49791Cu;
label_49791c:
    // 0x49791c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x49791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x497920: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x497920u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x497924: 0x664823  subu        $t1, $v1, $a2
    ctx->pc = 0x497924u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x497928: 0x123082b  sltu        $at, $t1, $v1
    ctx->pc = 0x497928u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49792c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x49792Cu;
    {
        const bool branch_taken_0x49792c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x497930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49792Cu;
            // 0x497930: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49792c) {
            ctx->pc = 0x497978u;
            goto label_497978;
        }
    }
    ctx->pc = 0x497934u;
label_497934:
    // 0x497934: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x497934u;
    {
        const bool branch_taken_0x497934 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x497934) {
            ctx->pc = 0x497958u;
            goto label_497958;
        }
    }
    ctx->pc = 0x49793Cu;
    // 0x49793c: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x49793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x497940: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x497940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497944: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x497944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497948: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x497948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x49794c: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x49794cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x497950: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x497950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x497954: 0x0  nop
    ctx->pc = 0x497954u;
    // NOP
label_497958:
    // 0x497958: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x497958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49795c: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x49795cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x497960: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x497960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x497964: 0x123202b  sltu        $a0, $t1, $v1
    ctx->pc = 0x497964u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x497968: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x497968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49796c: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x49796Cu;
    {
        const bool branch_taken_0x49796c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x497970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49796Cu;
            // 0x497970: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49796c) {
            ctx->pc = 0x497934u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497934;
        }
    }
    ctx->pc = 0x497974u;
    // 0x497974: 0x0  nop
    ctx->pc = 0x497974u;
    // NOP
label_497978:
    // 0x497978: 0xf12823  subu        $a1, $a3, $s1
    ctx->pc = 0x497978u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x49797c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x49797cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x497980: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x497980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x497984: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x497984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x497988: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x497988u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49798c: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x49798cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497990: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x497990u;
    {
        const bool branch_taken_0x497990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x497990) {
            ctx->pc = 0x497994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497990u;
            // 0x497994: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4979ACu;
            goto label_4979ac;
        }
    }
    ctx->pc = 0x497998u;
    // 0x497998: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x497998u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49799c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x49799Cu;
    {
        const bool branch_taken_0x49799c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49799c) {
            ctx->pc = 0x4979A8u;
            goto label_4979a8;
        }
    }
    ctx->pc = 0x4979A4u;
    // 0x4979a4: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4979a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4979a8:
    // 0x4979a8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x4979a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4979ac:
    // 0x4979ac: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x4979acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4979b0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x4979B0u;
    {
        const bool branch_taken_0x4979b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4979b0) {
            ctx->pc = 0x4979E0u;
            goto label_4979e0;
        }
    }
    ctx->pc = 0x4979B8u;
label_4979b8:
    // 0x4979b8: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x4979b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x4979bc: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x4979bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x4979c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4979c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4979c4: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x4979c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4979c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4979c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4979cc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x4979ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4979d0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4979d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x4979d4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4979d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4979d8: 0x1420fff7  bnez        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4979D8u;
    {
        const bool branch_taken_0x4979d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4979DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4979D8u;
            // 0x4979dc: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4979d8) {
            ctx->pc = 0x4979B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4979b8;
        }
    }
    ctx->pc = 0x4979E0u;
label_4979e0:
    // 0x4979e0: 0x52200089  beql        $s1, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x4979E0u;
    {
        const bool branch_taken_0x4979e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4979e0) {
            ctx->pc = 0x4979E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4979E0u;
            // 0x4979e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497C08u;
            goto label_497c08;
        }
    }
    ctx->pc = 0x4979E8u;
label_4979e8:
    // 0x4979e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4979e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4979ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4979ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4979f0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4979f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4979f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4979f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4979f8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x4979f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x4979fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4979fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x497a00: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x497a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x497a04: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x497A04u;
    {
        const bool branch_taken_0x497a04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x497A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497A04u;
            // 0x497a08: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497a04) {
            ctx->pc = 0x4979E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4979e8;
        }
    }
    ctx->pc = 0x497A0Cu;
    // 0x497a0c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x497A0Cu;
    {
        const bool branch_taken_0x497a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x497a0c) {
            ctx->pc = 0x497C04u;
            goto label_497c04;
        }
    }
    ctx->pc = 0x497A14u;
label_497a14:
    // 0x497a14: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x497a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x497a18: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x497a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x497a1c: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x497a1cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497a20: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x497A20u;
    {
        const bool branch_taken_0x497a20 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x497a20) {
            ctx->pc = 0x497A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497A20u;
            // 0x497a24: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497A28u;
            goto label_497a28;
        }
    }
    ctx->pc = 0x497A28u;
label_497a28:
    // 0x497a28: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x497a28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497a2c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x497A2Cu;
    {
        const bool branch_taken_0x497a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497a2c) {
            ctx->pc = 0x497A70u;
            goto label_497a70;
        }
    }
    ctx->pc = 0x497A34u;
    // 0x497a34: 0x3c021555  lui         $v0, 0x1555
    ctx->pc = 0x497a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5461 << 16));
    // 0x497a38: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x497a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x497a3c: 0x3c010aaa  lui         $at, 0xAAA
    ctx->pc = 0x497a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
label_497a40:
    // 0x497a40: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x497a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x497a44: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x497a44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x497a48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x497A48u;
    {
        const bool branch_taken_0x497a48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497a48) {
            ctx->pc = 0x497A58u;
            goto label_497a58;
        }
    }
    ctx->pc = 0x497A50u;
    // 0x497a50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x497A50u;
    {
        const bool branch_taken_0x497a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497A50u;
            // 0x497a54: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497a50) {
            ctx->pc = 0x497A60u;
            goto label_497a60;
        }
    }
    ctx->pc = 0x497A58u;
label_497a58:
    // 0x497a58: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x497a58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497a5c: 0x0  nop
    ctx->pc = 0x497a5cu;
    // NOP
label_497a60:
    // 0x497a60: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x497a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497a64: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x497A64u;
    {
        const bool branch_taken_0x497a64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x497a64) {
            ctx->pc = 0x497A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497A64u;
            // 0x497a68: 0x3c010aaa  lui         $at, 0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497a40;
        }
    }
    ctx->pc = 0x497A6Cu;
    // 0x497a6c: 0x0  nop
    ctx->pc = 0x497a6cu;
    // NOP
label_497a70:
    // 0x497a70: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x497a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x497a74: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x497a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x497a78: 0xc040180  jal         func_100600
    ctx->pc = 0x497A78u;
    SET_GPR_U32(ctx, 31, 0x497A80u);
    ctx->pc = 0x497A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497A78u;
            // 0x497a7c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497A80u; }
        if (ctx->pc != 0x497A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497A80u; }
        if (ctx->pc != 0x497A80u) { return; }
    }
    ctx->pc = 0x497A80u;
label_497a80:
    // 0x497a80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x497a80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497a84: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x497A84u;
    {
        const bool branch_taken_0x497a84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x497a84) {
            ctx->pc = 0x497A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497A84u;
            // 0x497a88: 0xafb50070  sw          $s5, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497AB0u;
            goto label_497ab0;
        }
    }
    ctx->pc = 0x497A8Cu;
    // 0x497a8c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x497a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x497a90: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x497a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x497a94: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x497a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x497a98: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x497a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x497a9c: 0xc049e92  jal         func_127A48
    ctx->pc = 0x497A9Cu;
    SET_GPR_U32(ctx, 31, 0x497AA4u);
    ctx->pc = 0x497AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497A9Cu;
            // 0x497aa0: 0x24a50930  addiu       $a1, $a1, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497AA4u; }
        if (ctx->pc != 0x497AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497AA4u; }
        if (ctx->pc != 0x497AA4u) { return; }
    }
    ctx->pc = 0x497AA4u;
label_497aa4:
    // 0x497aa4: 0xc04981a  jal         func_126068
    ctx->pc = 0x497AA4u;
    SET_GPR_U32(ctx, 31, 0x497AACu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497AACu; }
        if (ctx->pc != 0x497AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497AACu; }
        if (ctx->pc != 0x497AACu) { return; }
    }
    ctx->pc = 0x497AACu;
label_497aac:
    // 0x497aac: 0xafb50070  sw          $s5, 0x70($sp)
    ctx->pc = 0x497aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
label_497ab0:
    // 0x497ab0: 0xafb40078  sw          $s4, 0x78($sp)
    ctx->pc = 0x497ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 20));
    // 0x497ab4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x497ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x497ab8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x497ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x497abc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x497abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x497ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x497ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x497ac4: 0xb2082b  sltu        $at, $a1, $s2
    ctx->pc = 0x497ac4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x497ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x497ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x497acc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x497ACCu;
    {
        const bool branch_taken_0x497acc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x497AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497ACCu;
            // 0x497ad0: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497acc) {
            ctx->pc = 0x497B18u;
            goto label_497b18;
        }
    }
    ctx->pc = 0x497AD4u;
label_497ad4:
    // 0x497ad4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x497AD4u;
    {
        const bool branch_taken_0x497ad4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x497ad4) {
            ctx->pc = 0x497AF8u;
            goto label_497af8;
        }
    }
    ctx->pc = 0x497ADCu;
    // 0x497adc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x497adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x497ae0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x497ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497ae4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x497ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497ae8: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x497ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x497aec: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x497aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x497af0: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x497af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x497af4: 0x0  nop
    ctx->pc = 0x497af4u;
    // NOP
label_497af8:
    // 0x497af8: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x497af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x497afc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x497afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x497b00: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x497b00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x497b04: 0xb2102b  sltu        $v0, $a1, $s2
    ctx->pc = 0x497b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x497b08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497b0c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x497B0Cu;
    {
        const bool branch_taken_0x497b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497B0Cu;
            // 0x497b10: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b0c) {
            ctx->pc = 0x497AD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497ad4;
        }
    }
    ctx->pc = 0x497B14u;
    // 0x497b14: 0x0  nop
    ctx->pc = 0x497b14u;
    // NOP
label_497b18:
    // 0x497b18: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x497B18u;
    {
        const bool branch_taken_0x497b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x497b18) {
            ctx->pc = 0x497B58u;
            goto label_497b58;
        }
    }
    ctx->pc = 0x497B20u;
label_497b20:
    // 0x497b20: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x497B20u;
    {
        const bool branch_taken_0x497b20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x497b20) {
            ctx->pc = 0x497B40u;
            goto label_497b40;
        }
    }
    ctx->pc = 0x497B28u;
    // 0x497b28: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x497b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x497b2c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x497b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497b30: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x497b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497b34: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x497b34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x497b38: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x497b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x497b3c: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x497b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_497b40:
    // 0x497b40: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x497b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x497b44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x497b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x497b48: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x497b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x497b4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x497b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x497b50: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x497B50u;
    {
        const bool branch_taken_0x497b50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x497B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497B50u;
            // 0x497b54: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b50) {
            ctx->pc = 0x497B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497b20;
        }
    }
    ctx->pc = 0x497B58u;
label_497b58:
    // 0x497b58: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x497b58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497b5c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x497B5Cu;
    {
        const bool branch_taken_0x497b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497b5c) {
            ctx->pc = 0x497BA8u;
            goto label_497ba8;
        }
    }
    ctx->pc = 0x497B64u;
label_497b64:
    // 0x497b64: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x497B64u;
    {
        const bool branch_taken_0x497b64 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x497b64) {
            ctx->pc = 0x497B88u;
            goto label_497b88;
        }
    }
    ctx->pc = 0x497B6Cu;
    // 0x497b6c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x497b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x497b70: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x497b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497b74: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x497b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497b78: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x497b78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x497b7c: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x497b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x497b80: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x497b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x497b84: 0x0  nop
    ctx->pc = 0x497b84u;
    // NOP
label_497b88:
    // 0x497b88: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x497b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x497b8c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x497b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x497b90: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x497b90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x497b94: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x497b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497b98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497b9c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x497B9Cu;
    {
        const bool branch_taken_0x497b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497B9Cu;
            // 0x497ba0: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b9c) {
            ctx->pc = 0x497B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497b64;
        }
    }
    ctx->pc = 0x497BA4u;
    // 0x497ba4: 0x0  nop
    ctx->pc = 0x497ba4u;
    // NOP
label_497ba8:
    // 0x497ba8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x497ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x497bac: 0x5053000e  beql        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x497BACu;
    {
        const bool branch_taken_0x497bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x497bac) {
            ctx->pc = 0x497BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497BACu;
            // 0x497bb0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497BE8u;
            goto label_497be8;
        }
    }
    ctx->pc = 0x497BB4u;
    // 0x497bb4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x497bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x497bb8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x497bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497bbc: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x497bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x497bc0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x497bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x497bc4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x497bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x497bc8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x497bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x497bcc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x497bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x497bd0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x497bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x497bd4: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x497bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x497bd8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x497bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x497bdc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x497bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x497be0: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x497be0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x497be4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x497be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_497be8:
    // 0x497be8: 0xc125f98  jal         func_497E60
    ctx->pc = 0x497BE8u;
    SET_GPR_U32(ctx, 31, 0x497BF0u);
    ctx->pc = 0x497E60u;
    if (runtime->hasFunction(0x497E60u)) {
        auto targetFn = runtime->lookupFunction(0x497E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497BF0u; }
        if (ctx->pc != 0x497BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E60_0x497e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497BF0u; }
        if (ctx->pc != 0x497BF0u) { return; }
    }
    ctx->pc = 0x497BF0u;
label_497bf0:
    // 0x497bf0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x497bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x497bf4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x497BF4u;
    {
        const bool branch_taken_0x497bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x497bf4) {
            ctx->pc = 0x497C04u;
            goto label_497c04;
        }
    }
    ctx->pc = 0x497BFCu;
    // 0x497bfc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497BFCu;
    SET_GPR_U32(ctx, 31, 0x497C04u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497C04u; }
        if (ctx->pc != 0x497C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497C04u; }
        if (ctx->pc != 0x497C04u) { return; }
    }
    ctx->pc = 0x497C04u;
label_497c04:
    // 0x497c04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x497c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_497c08:
    // 0x497c08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x497c08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x497c0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x497c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x497c10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x497c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x497c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x497c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497c20: 0x3e00008  jr          $ra
    ctx->pc = 0x497C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497C20u;
            // 0x497c24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497C28u;
    // 0x497c28: 0x0  nop
    ctx->pc = 0x497c28u;
    // NOP
    // 0x497c2c: 0x0  nop
    ctx->pc = 0x497c2cu;
    // NOP
}
