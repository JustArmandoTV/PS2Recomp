#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00330140
// Address: 0x330140 - 0x330330
void sub_00330140_0x330140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330140_0x330140");
#endif

    switch (ctx->pc) {
        case 0x330140u: goto label_330140;
        case 0x330144u: goto label_330144;
        case 0x330148u: goto label_330148;
        case 0x33014cu: goto label_33014c;
        case 0x330150u: goto label_330150;
        case 0x330154u: goto label_330154;
        case 0x330158u: goto label_330158;
        case 0x33015cu: goto label_33015c;
        case 0x330160u: goto label_330160;
        case 0x330164u: goto label_330164;
        case 0x330168u: goto label_330168;
        case 0x33016cu: goto label_33016c;
        case 0x330170u: goto label_330170;
        case 0x330174u: goto label_330174;
        case 0x330178u: goto label_330178;
        case 0x33017cu: goto label_33017c;
        case 0x330180u: goto label_330180;
        case 0x330184u: goto label_330184;
        case 0x330188u: goto label_330188;
        case 0x33018cu: goto label_33018c;
        case 0x330190u: goto label_330190;
        case 0x330194u: goto label_330194;
        case 0x330198u: goto label_330198;
        case 0x33019cu: goto label_33019c;
        case 0x3301a0u: goto label_3301a0;
        case 0x3301a4u: goto label_3301a4;
        case 0x3301a8u: goto label_3301a8;
        case 0x3301acu: goto label_3301ac;
        case 0x3301b0u: goto label_3301b0;
        case 0x3301b4u: goto label_3301b4;
        case 0x3301b8u: goto label_3301b8;
        case 0x3301bcu: goto label_3301bc;
        case 0x3301c0u: goto label_3301c0;
        case 0x3301c4u: goto label_3301c4;
        case 0x3301c8u: goto label_3301c8;
        case 0x3301ccu: goto label_3301cc;
        case 0x3301d0u: goto label_3301d0;
        case 0x3301d4u: goto label_3301d4;
        case 0x3301d8u: goto label_3301d8;
        case 0x3301dcu: goto label_3301dc;
        case 0x3301e0u: goto label_3301e0;
        case 0x3301e4u: goto label_3301e4;
        case 0x3301e8u: goto label_3301e8;
        case 0x3301ecu: goto label_3301ec;
        case 0x3301f0u: goto label_3301f0;
        case 0x3301f4u: goto label_3301f4;
        case 0x3301f8u: goto label_3301f8;
        case 0x3301fcu: goto label_3301fc;
        case 0x330200u: goto label_330200;
        case 0x330204u: goto label_330204;
        case 0x330208u: goto label_330208;
        case 0x33020cu: goto label_33020c;
        case 0x330210u: goto label_330210;
        case 0x330214u: goto label_330214;
        case 0x330218u: goto label_330218;
        case 0x33021cu: goto label_33021c;
        case 0x330220u: goto label_330220;
        case 0x330224u: goto label_330224;
        case 0x330228u: goto label_330228;
        case 0x33022cu: goto label_33022c;
        case 0x330230u: goto label_330230;
        case 0x330234u: goto label_330234;
        case 0x330238u: goto label_330238;
        case 0x33023cu: goto label_33023c;
        case 0x330240u: goto label_330240;
        case 0x330244u: goto label_330244;
        case 0x330248u: goto label_330248;
        case 0x33024cu: goto label_33024c;
        case 0x330250u: goto label_330250;
        case 0x330254u: goto label_330254;
        case 0x330258u: goto label_330258;
        case 0x33025cu: goto label_33025c;
        case 0x330260u: goto label_330260;
        case 0x330264u: goto label_330264;
        case 0x330268u: goto label_330268;
        case 0x33026cu: goto label_33026c;
        case 0x330270u: goto label_330270;
        case 0x330274u: goto label_330274;
        case 0x330278u: goto label_330278;
        case 0x33027cu: goto label_33027c;
        case 0x330280u: goto label_330280;
        case 0x330284u: goto label_330284;
        case 0x330288u: goto label_330288;
        case 0x33028cu: goto label_33028c;
        case 0x330290u: goto label_330290;
        case 0x330294u: goto label_330294;
        case 0x330298u: goto label_330298;
        case 0x33029cu: goto label_33029c;
        case 0x3302a0u: goto label_3302a0;
        case 0x3302a4u: goto label_3302a4;
        case 0x3302a8u: goto label_3302a8;
        case 0x3302acu: goto label_3302ac;
        case 0x3302b0u: goto label_3302b0;
        case 0x3302b4u: goto label_3302b4;
        case 0x3302b8u: goto label_3302b8;
        case 0x3302bcu: goto label_3302bc;
        case 0x3302c0u: goto label_3302c0;
        case 0x3302c4u: goto label_3302c4;
        case 0x3302c8u: goto label_3302c8;
        case 0x3302ccu: goto label_3302cc;
        case 0x3302d0u: goto label_3302d0;
        case 0x3302d4u: goto label_3302d4;
        case 0x3302d8u: goto label_3302d8;
        case 0x3302dcu: goto label_3302dc;
        case 0x3302e0u: goto label_3302e0;
        case 0x3302e4u: goto label_3302e4;
        case 0x3302e8u: goto label_3302e8;
        case 0x3302ecu: goto label_3302ec;
        case 0x3302f0u: goto label_3302f0;
        case 0x3302f4u: goto label_3302f4;
        case 0x3302f8u: goto label_3302f8;
        case 0x3302fcu: goto label_3302fc;
        case 0x330300u: goto label_330300;
        case 0x330304u: goto label_330304;
        case 0x330308u: goto label_330308;
        case 0x33030cu: goto label_33030c;
        case 0x330310u: goto label_330310;
        case 0x330314u: goto label_330314;
        case 0x330318u: goto label_330318;
        case 0x33031cu: goto label_33031c;
        case 0x330320u: goto label_330320;
        case 0x330324u: goto label_330324;
        case 0x330328u: goto label_330328;
        case 0x33032cu: goto label_33032c;
        default: break;
    }

    ctx->pc = 0x330140u;

label_330140:
    // 0x330140: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x330140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_330144:
    // 0x330144: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x330144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_330148:
    // 0x330148: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x330148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_33014c:
    // 0x33014c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_330150:
    // 0x330150: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x330150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_330154:
    // 0x330154: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x330154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_330158:
    // 0x330158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x330158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33015c:
    // 0x33015c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x33015cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_330160:
    // 0x330160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x330160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_330164:
    // 0x330164: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x330164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_330168:
    // 0x330168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x330168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33016c:
    // 0x33016c: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x33016cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_330170:
    // 0x330170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x330170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_330174:
    // 0x330174: 0x2352021  addu        $a0, $s1, $s5
    ctx->pc = 0x330174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_330178:
    // 0x330178: 0x8c830978  lw          $v1, 0x978($a0)
    ctx->pc = 0x330178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2424)));
label_33017c:
    // 0x33017c: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
label_330180:
    if (ctx->pc == 0x330180u) {
        ctx->pc = 0x330180u;
            // 0x330180: 0x24900978  addiu       $s0, $a0, 0x978 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2424));
        ctx->pc = 0x330184u;
        goto label_330184;
    }
    ctx->pc = 0x33017Cu;
    {
        const bool branch_taken_0x33017c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33017Cu;
            // 0x330180: 0x24900978  addiu       $s0, $a0, 0x978 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33017c) {
            ctx->pc = 0x330300u;
            goto label_330300;
        }
    }
    ctx->pc = 0x330184u;
label_330184:
    // 0x330184: 0x8c830988  lw          $v1, 0x988($a0)
    ctx->pc = 0x330184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2440)));
label_330188:
    // 0x330188: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_33018c:
    if (ctx->pc == 0x33018Cu) {
        ctx->pc = 0x33018Cu;
            // 0x33018c: 0x24960988  addiu       $s6, $a0, 0x988 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 2440));
        ctx->pc = 0x330190u;
        goto label_330190;
    }
    ctx->pc = 0x330188u;
    {
        const bool branch_taken_0x330188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330188u;
            // 0x33018c: 0x24960988  addiu       $s6, $a0, 0x988 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 2440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330188) {
            ctx->pc = 0x330198u;
            goto label_330198;
        }
    }
    ctx->pc = 0x330190u;
label_330190:
    // 0x330190: 0x1000005c  b           . + 4 + (0x5C << 2)
label_330194:
    if (ctx->pc == 0x330194u) {
        ctx->pc = 0x330194u;
            // 0x330194: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x330198u;
        goto label_330198;
    }
    ctx->pc = 0x330190u;
    {
        const bool branch_taken_0x330190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330190u;
            // 0x330194: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330190) {
            ctx->pc = 0x330304u;
            goto label_330304;
        }
    }
    ctx->pc = 0x330198u;
label_330198:
    // 0x330198: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x330198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33019c:
    // 0x33019c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x33019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3301a0:
    // 0x3301a0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3301a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3301a4:
    // 0x3301a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3301a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3301a8:
    // 0x3301a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3301a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3301ac:
    // 0x3301ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3301acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3301b0:
    // 0x3301b0: 0x320f809  jalr        $t9
label_3301b4:
    if (ctx->pc == 0x3301B4u) {
        ctx->pc = 0x3301B8u;
        goto label_3301b8;
    }
    ctx->pc = 0x3301B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3301B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3301B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3301B8u; }
            if (ctx->pc != 0x3301B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3301B8u;
label_3301b8:
    // 0x3301b8: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_3301bc:
    if (ctx->pc == 0x3301BCu) {
        ctx->pc = 0x3301BCu;
            // 0x3301bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3301C0u;
        goto label_3301c0;
    }
    ctx->pc = 0x3301B8u;
    {
        const bool branch_taken_0x3301b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3301BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3301B8u;
            // 0x3301bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301b8) {
            ctx->pc = 0x3301D0u;
            goto label_3301d0;
        }
    }
    ctx->pc = 0x3301C0u;
label_3301c0:
    // 0x3301c0: 0xaea009a4  sw          $zero, 0x9A4($s5)
    ctx->pc = 0x3301c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2468), GPR_U32(ctx, 0));
label_3301c4:
    // 0x3301c4: 0xaea009a8  sw          $zero, 0x9A8($s5)
    ctx->pc = 0x3301c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2472), GPR_U32(ctx, 0));
label_3301c8:
    // 0x3301c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3301cc:
    if (ctx->pc == 0x3301CCu) {
        ctx->pc = 0x3301CCu;
            // 0x3301cc: 0xaea009ac  sw          $zero, 0x9AC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2476), GPR_U32(ctx, 0));
        ctx->pc = 0x3301D0u;
        goto label_3301d0;
    }
    ctx->pc = 0x3301C8u;
    {
        const bool branch_taken_0x3301c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3301CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3301C8u;
            // 0x3301cc: 0xaea009ac  sw          $zero, 0x9AC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301c8) {
            ctx->pc = 0x3301E8u;
            goto label_3301e8;
        }
    }
    ctx->pc = 0x3301D0u;
label_3301d0:
    // 0x3301d0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3301d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3301d4:
    // 0x3301d4: 0xe6a009a4  swc1        $f0, 0x9A4($s5)
    ctx->pc = 0x3301d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2468), bits); }
label_3301d8:
    // 0x3301d8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3301d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3301dc:
    // 0x3301dc: 0xe6a009a8  swc1        $f0, 0x9A8($s5)
    ctx->pc = 0x3301dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2472), bits); }
label_3301e0:
    // 0x3301e0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3301e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3301e4:
    // 0x3301e4: 0xe6a009ac  swc1        $f0, 0x9AC($s5)
    ctx->pc = 0x3301e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2476), bits); }
label_3301e8:
    // 0x3301e8: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_3301ec:
    if (ctx->pc == 0x3301ECu) {
        ctx->pc = 0x3301ECu;
            // 0x3301ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3301F0u;
        goto label_3301f0;
    }
    ctx->pc = 0x3301E8u;
    {
        const bool branch_taken_0x3301e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3301e8) {
            ctx->pc = 0x3301ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3301E8u;
            // 0x3301ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x330204u;
            goto label_330204;
        }
    }
    ctx->pc = 0x3301F0u;
label_3301f0:
    // 0x3301f0: 0xc04c968  jal         func_1325A0
label_3301f4:
    if (ctx->pc == 0x3301F4u) {
        ctx->pc = 0x3301F4u;
            // 0x3301f4: 0x26a409b0  addiu       $a0, $s5, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2480));
        ctx->pc = 0x3301F8u;
        goto label_3301f8;
    }
    ctx->pc = 0x3301F0u;
    SET_GPR_U32(ctx, 31, 0x3301F8u);
    ctx->pc = 0x3301F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3301F0u;
            // 0x3301f4: 0x26a409b0  addiu       $a0, $s5, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3301F8u; }
        if (ctx->pc != 0x3301F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3301F8u; }
        if (ctx->pc != 0x3301F8u) { return; }
    }
    ctx->pc = 0x3301F8u;
label_3301f8:
    // 0x3301f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3301fc:
    if (ctx->pc == 0x3301FCu) {
        ctx->pc = 0x3301FCu;
            // 0x3301fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x330200u;
        goto label_330200;
    }
    ctx->pc = 0x3301F8u;
    {
        const bool branch_taken_0x3301f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3301FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3301F8u;
            // 0x3301fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301f8) {
            ctx->pc = 0x330210u;
            goto label_330210;
        }
    }
    ctx->pc = 0x330200u;
label_330200:
    // 0x330200: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x330200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_330204:
    // 0x330204: 0xc04c720  jal         func_131C80
label_330208:
    if (ctx->pc == 0x330208u) {
        ctx->pc = 0x330208u;
            // 0x330208: 0x26a409b0  addiu       $a0, $s5, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2480));
        ctx->pc = 0x33020Cu;
        goto label_33020c;
    }
    ctx->pc = 0x330204u;
    SET_GPR_U32(ctx, 31, 0x33020Cu);
    ctx->pc = 0x330208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330204u;
            // 0x330208: 0x26a409b0  addiu       $a0, $s5, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33020Cu; }
        if (ctx->pc != 0x33020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33020Cu; }
        if (ctx->pc != 0x33020Cu) { return; }
    }
    ctx->pc = 0x33020Cu;
label_33020c:
    // 0x33020c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_330210:
    // 0x330210: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x330210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_330214:
    // 0x330214: 0xaea309c0  sw          $v1, 0x9C0($s5)
    ctx->pc = 0x330214u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2496), GPR_U32(ctx, 3));
label_330218:
    // 0x330218: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x330218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_33021c:
    // 0x33021c: 0xaea309c4  sw          $v1, 0x9C4($s5)
    ctx->pc = 0x33021cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2500), GPR_U32(ctx, 3));
label_330220:
    // 0x330220: 0xaea009c8  sw          $zero, 0x9C8($s5)
    ctx->pc = 0x330220u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2504), GPR_U32(ctx, 0));
label_330224:
    // 0x330224: 0xaea009cc  sw          $zero, 0x9CC($s5)
    ctx->pc = 0x330224u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2508), GPR_U32(ctx, 0));
label_330228:
    // 0x330228: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x330228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_33022c:
    // 0x33022c: 0x8042007b  lb          $v0, 0x7B($v0)
    ctx->pc = 0x33022cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 123)));
label_330230:
    // 0x330230: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x330230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_330234:
    // 0x330234: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_330238:
    if (ctx->pc == 0x330238u) {
        ctx->pc = 0x33023Cu;
        goto label_33023c;
    }
    ctx->pc = 0x330234u;
    {
        const bool branch_taken_0x330234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330234) {
            ctx->pc = 0x330254u;
            goto label_330254;
        }
    }
    ctx->pc = 0x33023Cu;
label_33023c:
    // 0x33023c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x33023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_330240:
    // 0x330240: 0x2442d1e0  addiu       $v0, $v0, -0x2E20
    ctx->pc = 0x330240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955488));
label_330244:
    // 0x330244: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x330244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_330248:
    // 0x330248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x330248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33024c:
    // 0x33024c: 0x10000006  b           . + 4 + (0x6 << 2)
label_330250:
    if (ctx->pc == 0x330250u) {
        ctx->pc = 0x330250u;
            // 0x330250: 0xe6a009d0  swc1        $f0, 0x9D0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2512), bits); }
        ctx->pc = 0x330254u;
        goto label_330254;
    }
    ctx->pc = 0x33024Cu;
    {
        const bool branch_taken_0x33024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33024Cu;
            // 0x330250: 0xe6a009d0  swc1        $f0, 0x9D0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33024c) {
            ctx->pc = 0x330268u;
            goto label_330268;
        }
    }
    ctx->pc = 0x330254u;
label_330254:
    // 0x330254: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x330254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_330258:
    // 0x330258: 0x2442d1f0  addiu       $v0, $v0, -0x2E10
    ctx->pc = 0x330258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955504));
label_33025c:
    // 0x33025c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_330260:
    // 0x330260: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x330260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330264:
    // 0x330264: 0xe6a009d0  swc1        $f0, 0x9D0($s5)
    ctx->pc = 0x330264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2512), bits); }
label_330268:
    // 0x330268: 0x92a20c77  lbu         $v0, 0xC77($s5)
    ctx->pc = 0x330268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3191)));
label_33026c:
    // 0x33026c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_330270:
    if (ctx->pc == 0x330270u) {
        ctx->pc = 0x330270u;
            // 0x330270: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x330274u;
        goto label_330274;
    }
    ctx->pc = 0x33026Cu;
    {
        const bool branch_taken_0x33026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33026c) {
            ctx->pc = 0x330270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33026Cu;
            // 0x330270: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x330290u;
            goto label_330290;
        }
    }
    ctx->pc = 0x330274u;
label_330274:
    // 0x330274: 0x8ea309c4  lw          $v1, 0x9C4($s5)
    ctx->pc = 0x330274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2500)));
label_330278:
    // 0x330278: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x330278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_33027c:
    // 0x33027c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33027cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330280:
    // 0x330280: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x330280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330284:
    // 0x330284: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x330284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330288:
    // 0x330288: 0xe6a009d0  swc1        $f0, 0x9D0($s5)
    ctx->pc = 0x330288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2512), bits); }
label_33028c:
    // 0x33028c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33028cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_330290:
    // 0x330290: 0xaea209d4  sw          $v0, 0x9D4($s5)
    ctx->pc = 0x330290u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2516), GPR_U32(ctx, 2));
label_330294:
    // 0x330294: 0x92a20c77  lbu         $v0, 0xC77($s5)
    ctx->pc = 0x330294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3191)));
label_330298:
    // 0x330298: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_33029c:
    if (ctx->pc == 0x33029Cu) {
        ctx->pc = 0x33029Cu;
            // 0x33029c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3302A0u;
        goto label_3302a0;
    }
    ctx->pc = 0x330298u;
    {
        const bool branch_taken_0x330298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330298) {
            ctx->pc = 0x33029Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330298u;
            // 0x33029c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3302ACu;
            goto label_3302ac;
        }
    }
    ctx->pc = 0x3302A0u;
label_3302a0:
    // 0x3302a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3302a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3302a4:
    // 0x3302a4: 0xaea209d4  sw          $v0, 0x9D4($s5)
    ctx->pc = 0x3302a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2516), GPR_U32(ctx, 2));
label_3302a8:
    // 0x3302a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3302a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3302ac:
    // 0x3302ac: 0xc0a9308  jal         func_2A4C20
label_3302b0:
    if (ctx->pc == 0x3302B0u) {
        ctx->pc = 0x3302B0u;
            // 0x3302b0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3302B4u;
        goto label_3302b4;
    }
    ctx->pc = 0x3302ACu;
    SET_GPR_U32(ctx, 31, 0x3302B4u);
    ctx->pc = 0x3302B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3302ACu;
            // 0x3302b0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C20u;
    if (runtime->hasFunction(0x2A4C20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3302B4u; }
        if (ctx->pc != 0x3302B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4C20_0x2a4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3302B4u; }
        if (ctx->pc != 0x3302B4u) { return; }
    }
    ctx->pc = 0x3302B4u;
label_3302b4:
    // 0x3302b4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3302b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3302b8:
    // 0x3302b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3302b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3302bc:
    // 0x3302bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3302bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3302c0:
    // 0x3302c0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3302c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3302c4:
    // 0x3302c4: 0x320f809  jalr        $t9
label_3302c8:
    if (ctx->pc == 0x3302C8u) {
        ctx->pc = 0x3302C8u;
            // 0x3302c8: 0x26a509a4  addiu       $a1, $s5, 0x9A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2468));
        ctx->pc = 0x3302CCu;
        goto label_3302cc;
    }
    ctx->pc = 0x3302C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3302CCu);
        ctx->pc = 0x3302C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3302C4u;
            // 0x3302c8: 0x26a509a4  addiu       $a1, $s5, 0x9A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2468));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3302CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3302CCu; }
            if (ctx->pc != 0x3302CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3302CCu;
label_3302cc:
    // 0x3302cc: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x3302ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_3302d0:
    // 0x3302d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3302d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3302d4:
    // 0x3302d4: 0xa2400565  sb          $zero, 0x565($s2)
    ctx->pc = 0x3302d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1381), (uint8_t)GPR_U32(ctx, 0));
label_3302d8:
    // 0x3302d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3302d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3302dc:
    // 0x3302dc: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3302dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3302e0:
    // 0x3302e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3302e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3302e4:
    // 0x3302e4: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3302e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3302e8:
    // 0x3302e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3302e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3302ec:
    // 0x3302ec: 0xc0a92c8  jal         func_2A4B20
label_3302f0:
    if (ctx->pc == 0x3302F0u) {
        ctx->pc = 0x3302F0u;
            // 0x3302f0: 0xa2400566  sb          $zero, 0x566($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1382), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3302F4u;
        goto label_3302f4;
    }
    ctx->pc = 0x3302ECu;
    SET_GPR_U32(ctx, 31, 0x3302F4u);
    ctx->pc = 0x3302F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3302ECu;
            // 0x3302f0: 0xa2400566  sb          $zero, 0x566($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1382), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (runtime->hasFunction(0x2A4B20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3302F4u; }
        if (ctx->pc != 0x3302F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B20_0x2a4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3302F4u; }
        if (ctx->pc != 0x3302F4u) { return; }
    }
    ctx->pc = 0x3302F4u;
label_3302f4:
    // 0x3302f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3302f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3302f8:
    // 0x3302f8: 0xa2430565  sb          $v1, 0x565($s2)
    ctx->pc = 0x3302f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1381), (uint8_t)GPR_U32(ctx, 3));
label_3302fc:
    // 0x3302fc: 0xaeb009a0  sw          $s0, 0x9A0($s5)
    ctx->pc = 0x3302fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2464), GPR_U32(ctx, 16));
label_330300:
    // 0x330300: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x330300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_330304:
    // 0x330304: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x330304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_330308:
    // 0x330308: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x330308u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33030c:
    // 0x33030c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33030cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_330310:
    // 0x330310: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x330310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_330314:
    // 0x330314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x330314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_330318:
    // 0x330318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x330318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33031c:
    // 0x33031c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33031cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_330320:
    // 0x330320: 0x3e00008  jr          $ra
label_330324:
    if (ctx->pc == 0x330324u) {
        ctx->pc = 0x330324u;
            // 0x330324: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x330328u;
        goto label_330328;
    }
    ctx->pc = 0x330320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330320u;
            // 0x330324: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x330328u;
label_330328:
    // 0x330328: 0x0  nop
    ctx->pc = 0x330328u;
    // NOP
label_33032c:
    // 0x33032c: 0x0  nop
    ctx->pc = 0x33032cu;
    // NOP
}
