#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397780
// Address: 0x397780 - 0x397a30
void sub_00397780_0x397780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397780_0x397780");
#endif

    switch (ctx->pc) {
        case 0x397780u: goto label_397780;
        case 0x397784u: goto label_397784;
        case 0x397788u: goto label_397788;
        case 0x39778cu: goto label_39778c;
        case 0x397790u: goto label_397790;
        case 0x397794u: goto label_397794;
        case 0x397798u: goto label_397798;
        case 0x39779cu: goto label_39779c;
        case 0x3977a0u: goto label_3977a0;
        case 0x3977a4u: goto label_3977a4;
        case 0x3977a8u: goto label_3977a8;
        case 0x3977acu: goto label_3977ac;
        case 0x3977b0u: goto label_3977b0;
        case 0x3977b4u: goto label_3977b4;
        case 0x3977b8u: goto label_3977b8;
        case 0x3977bcu: goto label_3977bc;
        case 0x3977c0u: goto label_3977c0;
        case 0x3977c4u: goto label_3977c4;
        case 0x3977c8u: goto label_3977c8;
        case 0x3977ccu: goto label_3977cc;
        case 0x3977d0u: goto label_3977d0;
        case 0x3977d4u: goto label_3977d4;
        case 0x3977d8u: goto label_3977d8;
        case 0x3977dcu: goto label_3977dc;
        case 0x3977e0u: goto label_3977e0;
        case 0x3977e4u: goto label_3977e4;
        case 0x3977e8u: goto label_3977e8;
        case 0x3977ecu: goto label_3977ec;
        case 0x3977f0u: goto label_3977f0;
        case 0x3977f4u: goto label_3977f4;
        case 0x3977f8u: goto label_3977f8;
        case 0x3977fcu: goto label_3977fc;
        case 0x397800u: goto label_397800;
        case 0x397804u: goto label_397804;
        case 0x397808u: goto label_397808;
        case 0x39780cu: goto label_39780c;
        case 0x397810u: goto label_397810;
        case 0x397814u: goto label_397814;
        case 0x397818u: goto label_397818;
        case 0x39781cu: goto label_39781c;
        case 0x397820u: goto label_397820;
        case 0x397824u: goto label_397824;
        case 0x397828u: goto label_397828;
        case 0x39782cu: goto label_39782c;
        case 0x397830u: goto label_397830;
        case 0x397834u: goto label_397834;
        case 0x397838u: goto label_397838;
        case 0x39783cu: goto label_39783c;
        case 0x397840u: goto label_397840;
        case 0x397844u: goto label_397844;
        case 0x397848u: goto label_397848;
        case 0x39784cu: goto label_39784c;
        case 0x397850u: goto label_397850;
        case 0x397854u: goto label_397854;
        case 0x397858u: goto label_397858;
        case 0x39785cu: goto label_39785c;
        case 0x397860u: goto label_397860;
        case 0x397864u: goto label_397864;
        case 0x397868u: goto label_397868;
        case 0x39786cu: goto label_39786c;
        case 0x397870u: goto label_397870;
        case 0x397874u: goto label_397874;
        case 0x397878u: goto label_397878;
        case 0x39787cu: goto label_39787c;
        case 0x397880u: goto label_397880;
        case 0x397884u: goto label_397884;
        case 0x397888u: goto label_397888;
        case 0x39788cu: goto label_39788c;
        case 0x397890u: goto label_397890;
        case 0x397894u: goto label_397894;
        case 0x397898u: goto label_397898;
        case 0x39789cu: goto label_39789c;
        case 0x3978a0u: goto label_3978a0;
        case 0x3978a4u: goto label_3978a4;
        case 0x3978a8u: goto label_3978a8;
        case 0x3978acu: goto label_3978ac;
        case 0x3978b0u: goto label_3978b0;
        case 0x3978b4u: goto label_3978b4;
        case 0x3978b8u: goto label_3978b8;
        case 0x3978bcu: goto label_3978bc;
        case 0x3978c0u: goto label_3978c0;
        case 0x3978c4u: goto label_3978c4;
        case 0x3978c8u: goto label_3978c8;
        case 0x3978ccu: goto label_3978cc;
        case 0x3978d0u: goto label_3978d0;
        case 0x3978d4u: goto label_3978d4;
        case 0x3978d8u: goto label_3978d8;
        case 0x3978dcu: goto label_3978dc;
        case 0x3978e0u: goto label_3978e0;
        case 0x3978e4u: goto label_3978e4;
        case 0x3978e8u: goto label_3978e8;
        case 0x3978ecu: goto label_3978ec;
        case 0x3978f0u: goto label_3978f0;
        case 0x3978f4u: goto label_3978f4;
        case 0x3978f8u: goto label_3978f8;
        case 0x3978fcu: goto label_3978fc;
        case 0x397900u: goto label_397900;
        case 0x397904u: goto label_397904;
        case 0x397908u: goto label_397908;
        case 0x39790cu: goto label_39790c;
        case 0x397910u: goto label_397910;
        case 0x397914u: goto label_397914;
        case 0x397918u: goto label_397918;
        case 0x39791cu: goto label_39791c;
        case 0x397920u: goto label_397920;
        case 0x397924u: goto label_397924;
        case 0x397928u: goto label_397928;
        case 0x39792cu: goto label_39792c;
        case 0x397930u: goto label_397930;
        case 0x397934u: goto label_397934;
        case 0x397938u: goto label_397938;
        case 0x39793cu: goto label_39793c;
        case 0x397940u: goto label_397940;
        case 0x397944u: goto label_397944;
        case 0x397948u: goto label_397948;
        case 0x39794cu: goto label_39794c;
        case 0x397950u: goto label_397950;
        case 0x397954u: goto label_397954;
        case 0x397958u: goto label_397958;
        case 0x39795cu: goto label_39795c;
        case 0x397960u: goto label_397960;
        case 0x397964u: goto label_397964;
        case 0x397968u: goto label_397968;
        case 0x39796cu: goto label_39796c;
        case 0x397970u: goto label_397970;
        case 0x397974u: goto label_397974;
        case 0x397978u: goto label_397978;
        case 0x39797cu: goto label_39797c;
        case 0x397980u: goto label_397980;
        case 0x397984u: goto label_397984;
        case 0x397988u: goto label_397988;
        case 0x39798cu: goto label_39798c;
        case 0x397990u: goto label_397990;
        case 0x397994u: goto label_397994;
        case 0x397998u: goto label_397998;
        case 0x39799cu: goto label_39799c;
        case 0x3979a0u: goto label_3979a0;
        case 0x3979a4u: goto label_3979a4;
        case 0x3979a8u: goto label_3979a8;
        case 0x3979acu: goto label_3979ac;
        case 0x3979b0u: goto label_3979b0;
        case 0x3979b4u: goto label_3979b4;
        case 0x3979b8u: goto label_3979b8;
        case 0x3979bcu: goto label_3979bc;
        case 0x3979c0u: goto label_3979c0;
        case 0x3979c4u: goto label_3979c4;
        case 0x3979c8u: goto label_3979c8;
        case 0x3979ccu: goto label_3979cc;
        case 0x3979d0u: goto label_3979d0;
        case 0x3979d4u: goto label_3979d4;
        case 0x3979d8u: goto label_3979d8;
        case 0x3979dcu: goto label_3979dc;
        case 0x3979e0u: goto label_3979e0;
        case 0x3979e4u: goto label_3979e4;
        case 0x3979e8u: goto label_3979e8;
        case 0x3979ecu: goto label_3979ec;
        case 0x3979f0u: goto label_3979f0;
        case 0x3979f4u: goto label_3979f4;
        case 0x3979f8u: goto label_3979f8;
        case 0x3979fcu: goto label_3979fc;
        case 0x397a00u: goto label_397a00;
        case 0x397a04u: goto label_397a04;
        case 0x397a08u: goto label_397a08;
        case 0x397a0cu: goto label_397a0c;
        case 0x397a10u: goto label_397a10;
        case 0x397a14u: goto label_397a14;
        case 0x397a18u: goto label_397a18;
        case 0x397a1cu: goto label_397a1c;
        case 0x397a20u: goto label_397a20;
        case 0x397a24u: goto label_397a24;
        case 0x397a28u: goto label_397a28;
        case 0x397a2cu: goto label_397a2c;
        default: break;
    }

    ctx->pc = 0x397780u;

label_397780:
    // 0x397780: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_397784:
    // 0x397784: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x397784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_397788:
    // 0x397788: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x397788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39778c:
    // 0x39778c: 0x3e00008  jr          $ra
label_397790:
    if (ctx->pc == 0x397790u) {
        ctx->pc = 0x397790u;
            // 0x397790: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->pc = 0x397794u;
        goto label_397794;
    }
    ctx->pc = 0x39778Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39778Cu;
            // 0x397790: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397794u;
label_397794:
    // 0x397794: 0x0  nop
    ctx->pc = 0x397794u;
    // NOP
label_397798:
    // 0x397798: 0x0  nop
    ctx->pc = 0x397798u;
    // NOP
label_39779c:
    // 0x39779c: 0x0  nop
    ctx->pc = 0x39779cu;
    // NOP
label_3977a0:
    // 0x3977a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3977a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3977a4:
    // 0x3977a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3977a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3977a8:
    // 0x3977a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3977a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3977ac:
    // 0x3977ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3977acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3977b0:
    // 0x3977b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3977b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3977b4:
    // 0x3977b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3977b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3977b8:
    // 0x3977b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3977b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3977bc:
    // 0x3977bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3977bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3977c0:
    // 0x3977c0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3977c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3977c4:
    // 0x3977c4: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
label_3977c8:
    if (ctx->pc == 0x3977C8u) {
        ctx->pc = 0x3977C8u;
            // 0x3977c8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3977CCu;
        goto label_3977cc;
    }
    ctx->pc = 0x3977C4u;
    {
        const bool branch_taken_0x3977c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3977C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3977C4u;
            // 0x3977c8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3977c4) {
            ctx->pc = 0x397914u;
            goto label_397914;
        }
    }
    ctx->pc = 0x3977CCu;
label_3977cc:
    // 0x3977cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3977ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3977d0:
    // 0x3977d0: 0x50a3004d  beql        $a1, $v1, . + 4 + (0x4D << 2)
label_3977d4:
    if (ctx->pc == 0x3977D4u) {
        ctx->pc = 0x3977D4u;
            // 0x3977d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3977D8u;
        goto label_3977d8;
    }
    ctx->pc = 0x3977D0u;
    {
        const bool branch_taken_0x3977d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3977d0) {
            ctx->pc = 0x3977D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3977D0u;
            // 0x3977d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397908u;
            goto label_397908;
        }
    }
    ctx->pc = 0x3977D8u;
label_3977d8:
    // 0x3977d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3977d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3977dc:
    // 0x3977dc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3977e0:
    if (ctx->pc == 0x3977E0u) {
        ctx->pc = 0x3977E4u;
        goto label_3977e4;
    }
    ctx->pc = 0x3977DCu;
    {
        const bool branch_taken_0x3977dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3977dc) {
            ctx->pc = 0x3977ECu;
            goto label_3977ec;
        }
    }
    ctx->pc = 0x3977E4u;
label_3977e4:
    // 0x3977e4: 0x1000008a  b           . + 4 + (0x8A << 2)
label_3977e8:
    if (ctx->pc == 0x3977E8u) {
        ctx->pc = 0x3977ECu;
        goto label_3977ec;
    }
    ctx->pc = 0x3977E4u;
    {
        const bool branch_taken_0x3977e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3977e4) {
            ctx->pc = 0x397A10u;
            goto label_397a10;
        }
    }
    ctx->pc = 0x3977ECu;
label_3977ec:
    // 0x3977ec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3977ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3977f0:
    // 0x3977f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3977f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3977f4:
    // 0x3977f4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3977f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3977f8:
    // 0x3977f8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3977f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3977fc:
    // 0x3977fc: 0x10640084  beq         $v1, $a0, . + 4 + (0x84 << 2)
label_397800:
    if (ctx->pc == 0x397800u) {
        ctx->pc = 0x397804u;
        goto label_397804;
    }
    ctx->pc = 0x3977FCu;
    {
        const bool branch_taken_0x3977fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3977fc) {
            ctx->pc = 0x397A10u;
            goto label_397a10;
        }
    }
    ctx->pc = 0x397804u;
label_397804:
    // 0x397804: 0x8e65009c  lw          $a1, 0x9C($s3)
    ctx->pc = 0x397804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_397808:
    // 0x397808: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x397808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39780c:
    // 0x39780c: 0x8c44f230  lw          $a0, -0xDD0($v0)
    ctx->pc = 0x39780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963760)));
label_397810:
    // 0x397810: 0x3c074090  lui         $a3, 0x4090
    ctx->pc = 0x397810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16528 << 16));
label_397814:
    // 0x397814: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x397814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_397818:
    // 0x397818: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x397818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_39781c:
    // 0x39781c: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x39781cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_397820:
    // 0x397820: 0x804027  not         $t0, $a0
    ctx->pc = 0x397820u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_397824:
    // 0x397824: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x397824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_397828:
    // 0x397828: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x397828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_39782c:
    // 0x39782c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x39782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_397830:
    // 0x397830: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x397830u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_397834:
    // 0x397834: 0x8d240050  lw          $a0, 0x50($t1)
    ctx->pc = 0x397834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
label_397838:
    // 0x397838: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x397838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
label_39783c:
    // 0x39783c: 0xad240050  sw          $a0, 0x50($t1)
    ctx->pc = 0x39783cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 4));
label_397840:
    // 0x397840: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x397840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_397844:
    // 0x397844: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x397844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_397848:
    // 0x397848: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x397848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
label_39784c:
    // 0x39784c: 0xae640090  sw          $a0, 0x90($s3)
    ctx->pc = 0x39784cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 4));
label_397850:
    // 0x397850: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x397850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_397854:
    // 0x397854: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x397854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_397858:
    // 0x397858: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x397858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
label_39785c:
    // 0x39785c: 0xafa70074  sw          $a3, 0x74($sp)
    ctx->pc = 0x39785cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 7));
label_397860:
    // 0x397860: 0xc0a7a88  jal         func_29EA20
label_397864:
    if (ctx->pc == 0x397864u) {
        ctx->pc = 0x397864u;
            // 0x397864: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x397868u;
        goto label_397868;
    }
    ctx->pc = 0x397860u;
    SET_GPR_U32(ctx, 31, 0x397868u);
    ctx->pc = 0x397864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397860u;
            // 0x397864: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397868u; }
        if (ctx->pc != 0x397868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397868u; }
        if (ctx->pc != 0x397868u) { return; }
    }
    ctx->pc = 0x397868u;
label_397868:
    // 0x397868: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x397868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_39786c:
    // 0x39786c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39786cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397870:
    // 0x397870: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_397874:
    if (ctx->pc == 0x397874u) {
        ctx->pc = 0x397874u;
            // 0x397874: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x397878u;
        goto label_397878;
    }
    ctx->pc = 0x397870u;
    {
        const bool branch_taken_0x397870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x397874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397870u;
            // 0x397874: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397870) {
            ctx->pc = 0x397890u;
            goto label_397890;
        }
    }
    ctx->pc = 0x397878u;
label_397878:
    // 0x397878: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x397878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_39787c:
    // 0x39787c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_397880:
    // 0x397880: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x397880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_397884:
    // 0x397884: 0xc0804bc  jal         func_2012F0
label_397888:
    if (ctx->pc == 0x397888u) {
        ctx->pc = 0x397888u;
            // 0x397888: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39788Cu;
        goto label_39788c;
    }
    ctx->pc = 0x397884u;
    SET_GPR_U32(ctx, 31, 0x39788Cu);
    ctx->pc = 0x397888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x397884u;
            // 0x397888: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39788Cu; }
        if (ctx->pc != 0x39788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39788Cu; }
        if (ctx->pc != 0x39788Cu) { return; }
    }
    ctx->pc = 0x39788Cu;
label_39788c:
    // 0x39788c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39788cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397890:
    // 0x397890: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x397890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_397894:
    // 0x397894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397898:
    // 0x397898: 0x24062b60  addiu       $a2, $zero, 0x2B60
    ctx->pc = 0x397898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11104));
label_39789c:
    // 0x39789c: 0xc04ca18  jal         func_132860
label_3978a0:
    if (ctx->pc == 0x3978A0u) {
        ctx->pc = 0x3978A0u;
            // 0x3978a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3978A4u;
        goto label_3978a4;
    }
    ctx->pc = 0x39789Cu;
    SET_GPR_U32(ctx, 31, 0x3978A4u);
    ctx->pc = 0x3978A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39789Cu;
            // 0x3978a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3978A4u; }
        if (ctx->pc != 0x3978A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3978A4u; }
        if (ctx->pc != 0x3978A4u) { return; }
    }
    ctx->pc = 0x3978A4u;
label_3978a4:
    // 0x3978a4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3978a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3978a8:
    // 0x3978a8: 0x266400a4  addiu       $a0, $s3, 0xA4
    ctx->pc = 0x3978a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 164));
label_3978ac:
    // 0x3978ac: 0x24a56de0  addiu       $a1, $a1, 0x6DE0
    ctx->pc = 0x3978acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28128));
label_3978b0:
    // 0x3978b0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3978b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3978b4:
    // 0x3978b4: 0xc0d37ec  jal         func_34DFB0
label_3978b8:
    if (ctx->pc == 0x3978B8u) {
        ctx->pc = 0x3978B8u;
            // 0x3978b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3978BCu;
        goto label_3978bc;
    }
    ctx->pc = 0x3978B4u;
    SET_GPR_U32(ctx, 31, 0x3978BCu);
    ctx->pc = 0x3978B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3978B4u;
            // 0x3978b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3978BCu; }
        if (ctx->pc != 0x3978BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3978BCu; }
        if (ctx->pc != 0x3978BCu) { return; }
    }
    ctx->pc = 0x3978BCu;
label_3978bc:
    // 0x3978bc: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x3978bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3978c0:
    // 0x3978c0: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_3978c4:
    if (ctx->pc == 0x3978C4u) {
        ctx->pc = 0x3978C8u;
        goto label_3978c8;
    }
    ctx->pc = 0x3978C0u;
    {
        const bool branch_taken_0x3978c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3978c0) {
            ctx->pc = 0x397A10u;
            goto label_397a10;
        }
    }
    ctx->pc = 0x3978C8u;
label_3978c8:
    // 0x3978c8: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x3978c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3978cc:
    // 0x3978cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3978ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3978d0:
    // 0x3978d0: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x3978d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_3978d4:
    // 0x3978d4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3978d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3978d8:
    // 0x3978d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3978d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3978dc:
    // 0x3978dc: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_3978e0:
    if (ctx->pc == 0x3978E0u) {
        ctx->pc = 0x3978E4u;
        goto label_3978e4;
    }
    ctx->pc = 0x3978DCu;
    {
        const bool branch_taken_0x3978dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3978dc) {
            ctx->pc = 0x397A10u;
            goto label_397a10;
        }
    }
    ctx->pc = 0x3978E4u;
label_3978e4:
    // 0x3978e4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_3978e8:
    if (ctx->pc == 0x3978E8u) {
        ctx->pc = 0x3978ECu;
        goto label_3978ec;
    }
    ctx->pc = 0x3978E4u;
    {
        const bool branch_taken_0x3978e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3978e4) {
            ctx->pc = 0x397A10u;
            goto label_397a10;
        }
    }
    ctx->pc = 0x3978ECu;
label_3978ec:
    // 0x3978ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3978ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3978f0:
    // 0x3978f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3978f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3978f4:
    // 0x3978f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3978f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3978f8:
    // 0x3978f8: 0x320f809  jalr        $t9
label_3978fc:
    if (ctx->pc == 0x3978FCu) {
        ctx->pc = 0x3978FCu;
            // 0x3978fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x397900u;
        goto label_397900;
    }
    ctx->pc = 0x3978F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x397900u);
        ctx->pc = 0x3978FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3978F8u;
            // 0x3978fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x397900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x397900u; }
            if (ctx->pc != 0x397900u) { return; }
        }
        }
    }
    ctx->pc = 0x397900u;
label_397900:
    // 0x397900: 0x10000043  b           . + 4 + (0x43 << 2)
label_397904:
    if (ctx->pc == 0x397904u) {
        ctx->pc = 0x397908u;
        goto label_397908;
    }
    ctx->pc = 0x397900u;
    {
        const bool branch_taken_0x397900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397900) {
            ctx->pc = 0x397A10u;
            goto label_397a10;
        }
    }
    ctx->pc = 0x397908u;
label_397908:
    // 0x397908: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x397908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_39790c:
    // 0x39790c: 0x320f809  jalr        $t9
label_397910:
    if (ctx->pc == 0x397910u) {
        ctx->pc = 0x397914u;
        goto label_397914;
    }
    ctx->pc = 0x39790Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x397914u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x397914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x397914u; }
            if (ctx->pc != 0x397914u) { return; }
        }
        }
    }
    ctx->pc = 0x397914u;
label_397914:
    // 0x397914: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x397914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_397918:
    // 0x397918: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x397918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_39791c:
    // 0x39791c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x39791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_397920:
    // 0x397920: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x397920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_397924:
    // 0x397924: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x397924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_397928:
    // 0x397928: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39792c:
    // 0x39792c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x39792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_397930:
    // 0x397930: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x397930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
label_397934:
    // 0x397934: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x397934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_397938:
    // 0x397938: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x397938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39793c:
    // 0x39793c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x39793cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_397940:
    // 0x397940: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x397940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_397944:
    // 0x397944: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x397944u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_397948:
    // 0x397948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x397948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39794c:
    // 0x39794c: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x39794cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_397950:
    // 0x397950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x397950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_397954:
    // 0x397954: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_397958:
    if (ctx->pc == 0x397958u) {
        ctx->pc = 0x397958u;
            // 0x397958: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->pc = 0x39795Cu;
        goto label_39795c;
    }
    ctx->pc = 0x397954u;
    {
        const bool branch_taken_0x397954 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x397958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397954u;
            // 0x397958: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x397954) {
            ctx->pc = 0x397960u;
            goto label_397960;
        }
    }
    ctx->pc = 0x39795Cu;
label_39795c:
    // 0x39795c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39795cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397960:
    // 0x397960: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_397964:
    if (ctx->pc == 0x397964u) {
        ctx->pc = 0x397964u;
            // 0x397964: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x397968u;
        goto label_397968;
    }
    ctx->pc = 0x397960u;
    {
        const bool branch_taken_0x397960 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x397960) {
            ctx->pc = 0x397964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x397960u;
            // 0x397964: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x397974u;
            goto label_397974;
        }
    }
    ctx->pc = 0x397968u;
label_397968:
    // 0x397968: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x397968u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39796c:
    // 0x39796c: 0x10000007  b           . + 4 + (0x7 << 2)
label_397970:
    if (ctx->pc == 0x397970u) {
        ctx->pc = 0x397970u;
            // 0x397970: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x397974u;
        goto label_397974;
    }
    ctx->pc = 0x39796Cu;
    {
        const bool branch_taken_0x39796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39796Cu;
            // 0x397970: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39796c) {
            ctx->pc = 0x39798Cu;
            goto label_39798c;
        }
    }
    ctx->pc = 0x397974u;
label_397974:
    // 0x397974: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x397974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_397978:
    // 0x397978: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x397978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_39797c:
    // 0x39797c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39797cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_397980:
    // 0x397980: 0x0  nop
    ctx->pc = 0x397980u;
    // NOP
label_397984:
    // 0x397984: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x397984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_397988:
    // 0x397988: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x397988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39798c:
    // 0x39798c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x39798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_397990:
    // 0x397990: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x397990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_397994:
    // 0x397994: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_397998:
    if (ctx->pc == 0x397998u) {
        ctx->pc = 0x397998u;
            // 0x397998: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->pc = 0x39799Cu;
        goto label_39799c;
    }
    ctx->pc = 0x397994u;
    {
        const bool branch_taken_0x397994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x397998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397994u;
            // 0x397998: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x397994) {
            ctx->pc = 0x397A10u;
            goto label_397a10;
        }
    }
    ctx->pc = 0x39799Cu;
label_39799c:
    // 0x39799c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39799cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3979a0:
    // 0x3979a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3979a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3979a4:
    // 0x3979a4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3979a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3979a8:
    // 0x3979a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3979a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3979ac:
    // 0x3979ac: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3979acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3979b0:
    // 0x3979b0: 0xc0e5f70  jal         func_397DC0
label_3979b4:
    if (ctx->pc == 0x3979B4u) {
        ctx->pc = 0x3979B4u;
            // 0x3979b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3979B8u;
        goto label_3979b8;
    }
    ctx->pc = 0x3979B0u;
    SET_GPR_U32(ctx, 31, 0x3979B8u);
    ctx->pc = 0x3979B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3979B0u;
            // 0x3979b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DC0u;
    if (runtime->hasFunction(0x397DC0u)) {
        auto targetFn = runtime->lookupFunction(0x397DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3979B8u; }
        if (ctx->pc != 0x3979B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DC0_0x397dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3979B8u; }
        if (ctx->pc != 0x3979B8u) { return; }
    }
    ctx->pc = 0x3979B8u;
label_3979b8:
    // 0x3979b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3979b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3979bc:
    // 0x3979bc: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_3979c0:
    if (ctx->pc == 0x3979C0u) {
        ctx->pc = 0x3979C4u;
        goto label_3979c4;
    }
    ctx->pc = 0x3979BCu;
    {
        const bool branch_taken_0x3979bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3979bc) {
            ctx->pc = 0x3979F0u;
            goto label_3979f0;
        }
    }
    ctx->pc = 0x3979C4u;
label_3979c4:
    // 0x3979c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3979c8:
    if (ctx->pc == 0x3979C8u) {
        ctx->pc = 0x3979CCu;
        goto label_3979cc;
    }
    ctx->pc = 0x3979C4u;
    {
        const bool branch_taken_0x3979c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3979c4) {
            ctx->pc = 0x3979D8u;
            goto label_3979d8;
        }
    }
    ctx->pc = 0x3979CCu;
label_3979cc:
    // 0x3979cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3979d0:
    if (ctx->pc == 0x3979D0u) {
        ctx->pc = 0x3979D4u;
        goto label_3979d4;
    }
    ctx->pc = 0x3979CCu;
    {
        const bool branch_taken_0x3979cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3979cc) {
            ctx->pc = 0x397A00u;
            goto label_397a00;
        }
    }
    ctx->pc = 0x3979D4u;
label_3979d4:
    // 0x3979d4: 0x0  nop
    ctx->pc = 0x3979d4u;
    // NOP
label_3979d8:
    // 0x3979d8: 0xc0e6274  jal         func_3989D0
label_3979dc:
    if (ctx->pc == 0x3979DCu) {
        ctx->pc = 0x3979DCu;
            // 0x3979dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3979E0u;
        goto label_3979e0;
    }
    ctx->pc = 0x3979D8u;
    SET_GPR_U32(ctx, 31, 0x3979E0u);
    ctx->pc = 0x3979DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3979D8u;
            // 0x3979dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3989D0u;
    if (runtime->hasFunction(0x3989D0u)) {
        auto targetFn = runtime->lookupFunction(0x3989D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3979E0u; }
        if (ctx->pc != 0x3979E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003989D0_0x3989d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3979E0u; }
        if (ctx->pc != 0x3979E0u) { return; }
    }
    ctx->pc = 0x3979E0u;
label_3979e0:
    // 0x3979e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3979e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3979e4:
    // 0x3979e4: 0xc0e5f6c  jal         func_397DB0
label_3979e8:
    if (ctx->pc == 0x3979E8u) {
        ctx->pc = 0x3979E8u;
            // 0x3979e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3979ECu;
        goto label_3979ec;
    }
    ctx->pc = 0x3979E4u;
    SET_GPR_U32(ctx, 31, 0x3979ECu);
    ctx->pc = 0x3979E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3979E4u;
            // 0x3979e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DB0u;
    if (runtime->hasFunction(0x397DB0u)) {
        auto targetFn = runtime->lookupFunction(0x397DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3979ECu; }
        if (ctx->pc != 0x3979ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DB0_0x397db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3979ECu; }
        if (ctx->pc != 0x3979ECu) { return; }
    }
    ctx->pc = 0x3979ECu;
label_3979ec:
    // 0x3979ec: 0x0  nop
    ctx->pc = 0x3979ecu;
    // NOP
label_3979f0:
    // 0x3979f0: 0xc0e5e8c  jal         func_397A30
label_3979f4:
    if (ctx->pc == 0x3979F4u) {
        ctx->pc = 0x3979F4u;
            // 0x3979f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3979F8u;
        goto label_3979f8;
    }
    ctx->pc = 0x3979F0u;
    SET_GPR_U32(ctx, 31, 0x3979F8u);
    ctx->pc = 0x3979F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3979F0u;
            // 0x3979f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397A30u;
    if (runtime->hasFunction(0x397A30u)) {
        auto targetFn = runtime->lookupFunction(0x397A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3979F8u; }
        if (ctx->pc != 0x3979F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397A30_0x397a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3979F8u; }
        if (ctx->pc != 0x3979F8u) { return; }
    }
    ctx->pc = 0x3979F8u;
label_3979f8:
    // 0x3979f8: 0xc0e6324  jal         func_398C90
label_3979fc:
    if (ctx->pc == 0x3979FCu) {
        ctx->pc = 0x3979FCu;
            // 0x3979fc: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x397A00u;
        goto label_397a00;
    }
    ctx->pc = 0x3979F8u;
    SET_GPR_U32(ctx, 31, 0x397A00u);
    ctx->pc = 0x3979FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3979F8u;
            // 0x3979fc: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398C90u;
    if (runtime->hasFunction(0x398C90u)) {
        auto targetFn = runtime->lookupFunction(0x398C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397A00u; }
        if (ctx->pc != 0x397A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398C90_0x398c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x397A00u; }
        if (ctx->pc != 0x397A00u) { return; }
    }
    ctx->pc = 0x397A00u;
label_397a00:
    // 0x397a00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x397a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_397a04:
    // 0x397a04: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x397a04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_397a08:
    // 0x397a08: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_397a0c:
    if (ctx->pc == 0x397A0Cu) {
        ctx->pc = 0x397A0Cu;
            // 0x397a0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x397A10u;
        goto label_397a10;
    }
    ctx->pc = 0x397A08u;
    {
        const bool branch_taken_0x397a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397A08u;
            // 0x397a0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a08) {
            ctx->pc = 0x3979A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3979a4;
        }
    }
    ctx->pc = 0x397A10u;
label_397a10:
    // 0x397a10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x397a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_397a14:
    // 0x397a14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x397a14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_397a18:
    // 0x397a18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x397a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_397a1c:
    // 0x397a1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x397a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_397a20:
    // 0x397a20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x397a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_397a24:
    // 0x397a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_397a28:
    // 0x397a28: 0x3e00008  jr          $ra
label_397a2c:
    if (ctx->pc == 0x397A2Cu) {
        ctx->pc = 0x397A2Cu;
            // 0x397a2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x397A30u;
        goto label_fallthrough_0x397a28;
    }
    ctx->pc = 0x397A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397A28u;
            // 0x397a2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x397a28:
    ctx->pc = 0x397A30u;
}
