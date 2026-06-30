#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003740B0
// Address: 0x3740b0 - 0x374350
void sub_003740B0_0x3740b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003740B0_0x3740b0");
#endif

    switch (ctx->pc) {
        case 0x3740b0u: goto label_3740b0;
        case 0x3740b4u: goto label_3740b4;
        case 0x3740b8u: goto label_3740b8;
        case 0x3740bcu: goto label_3740bc;
        case 0x3740c0u: goto label_3740c0;
        case 0x3740c4u: goto label_3740c4;
        case 0x3740c8u: goto label_3740c8;
        case 0x3740ccu: goto label_3740cc;
        case 0x3740d0u: goto label_3740d0;
        case 0x3740d4u: goto label_3740d4;
        case 0x3740d8u: goto label_3740d8;
        case 0x3740dcu: goto label_3740dc;
        case 0x3740e0u: goto label_3740e0;
        case 0x3740e4u: goto label_3740e4;
        case 0x3740e8u: goto label_3740e8;
        case 0x3740ecu: goto label_3740ec;
        case 0x3740f0u: goto label_3740f0;
        case 0x3740f4u: goto label_3740f4;
        case 0x3740f8u: goto label_3740f8;
        case 0x3740fcu: goto label_3740fc;
        case 0x374100u: goto label_374100;
        case 0x374104u: goto label_374104;
        case 0x374108u: goto label_374108;
        case 0x37410cu: goto label_37410c;
        case 0x374110u: goto label_374110;
        case 0x374114u: goto label_374114;
        case 0x374118u: goto label_374118;
        case 0x37411cu: goto label_37411c;
        case 0x374120u: goto label_374120;
        case 0x374124u: goto label_374124;
        case 0x374128u: goto label_374128;
        case 0x37412cu: goto label_37412c;
        case 0x374130u: goto label_374130;
        case 0x374134u: goto label_374134;
        case 0x374138u: goto label_374138;
        case 0x37413cu: goto label_37413c;
        case 0x374140u: goto label_374140;
        case 0x374144u: goto label_374144;
        case 0x374148u: goto label_374148;
        case 0x37414cu: goto label_37414c;
        case 0x374150u: goto label_374150;
        case 0x374154u: goto label_374154;
        case 0x374158u: goto label_374158;
        case 0x37415cu: goto label_37415c;
        case 0x374160u: goto label_374160;
        case 0x374164u: goto label_374164;
        case 0x374168u: goto label_374168;
        case 0x37416cu: goto label_37416c;
        case 0x374170u: goto label_374170;
        case 0x374174u: goto label_374174;
        case 0x374178u: goto label_374178;
        case 0x37417cu: goto label_37417c;
        case 0x374180u: goto label_374180;
        case 0x374184u: goto label_374184;
        case 0x374188u: goto label_374188;
        case 0x37418cu: goto label_37418c;
        case 0x374190u: goto label_374190;
        case 0x374194u: goto label_374194;
        case 0x374198u: goto label_374198;
        case 0x37419cu: goto label_37419c;
        case 0x3741a0u: goto label_3741a0;
        case 0x3741a4u: goto label_3741a4;
        case 0x3741a8u: goto label_3741a8;
        case 0x3741acu: goto label_3741ac;
        case 0x3741b0u: goto label_3741b0;
        case 0x3741b4u: goto label_3741b4;
        case 0x3741b8u: goto label_3741b8;
        case 0x3741bcu: goto label_3741bc;
        case 0x3741c0u: goto label_3741c0;
        case 0x3741c4u: goto label_3741c4;
        case 0x3741c8u: goto label_3741c8;
        case 0x3741ccu: goto label_3741cc;
        case 0x3741d0u: goto label_3741d0;
        case 0x3741d4u: goto label_3741d4;
        case 0x3741d8u: goto label_3741d8;
        case 0x3741dcu: goto label_3741dc;
        case 0x3741e0u: goto label_3741e0;
        case 0x3741e4u: goto label_3741e4;
        case 0x3741e8u: goto label_3741e8;
        case 0x3741ecu: goto label_3741ec;
        case 0x3741f0u: goto label_3741f0;
        case 0x3741f4u: goto label_3741f4;
        case 0x3741f8u: goto label_3741f8;
        case 0x3741fcu: goto label_3741fc;
        case 0x374200u: goto label_374200;
        case 0x374204u: goto label_374204;
        case 0x374208u: goto label_374208;
        case 0x37420cu: goto label_37420c;
        case 0x374210u: goto label_374210;
        case 0x374214u: goto label_374214;
        case 0x374218u: goto label_374218;
        case 0x37421cu: goto label_37421c;
        case 0x374220u: goto label_374220;
        case 0x374224u: goto label_374224;
        case 0x374228u: goto label_374228;
        case 0x37422cu: goto label_37422c;
        case 0x374230u: goto label_374230;
        case 0x374234u: goto label_374234;
        case 0x374238u: goto label_374238;
        case 0x37423cu: goto label_37423c;
        case 0x374240u: goto label_374240;
        case 0x374244u: goto label_374244;
        case 0x374248u: goto label_374248;
        case 0x37424cu: goto label_37424c;
        case 0x374250u: goto label_374250;
        case 0x374254u: goto label_374254;
        case 0x374258u: goto label_374258;
        case 0x37425cu: goto label_37425c;
        case 0x374260u: goto label_374260;
        case 0x374264u: goto label_374264;
        case 0x374268u: goto label_374268;
        case 0x37426cu: goto label_37426c;
        case 0x374270u: goto label_374270;
        case 0x374274u: goto label_374274;
        case 0x374278u: goto label_374278;
        case 0x37427cu: goto label_37427c;
        case 0x374280u: goto label_374280;
        case 0x374284u: goto label_374284;
        case 0x374288u: goto label_374288;
        case 0x37428cu: goto label_37428c;
        case 0x374290u: goto label_374290;
        case 0x374294u: goto label_374294;
        case 0x374298u: goto label_374298;
        case 0x37429cu: goto label_37429c;
        case 0x3742a0u: goto label_3742a0;
        case 0x3742a4u: goto label_3742a4;
        case 0x3742a8u: goto label_3742a8;
        case 0x3742acu: goto label_3742ac;
        case 0x3742b0u: goto label_3742b0;
        case 0x3742b4u: goto label_3742b4;
        case 0x3742b8u: goto label_3742b8;
        case 0x3742bcu: goto label_3742bc;
        case 0x3742c0u: goto label_3742c0;
        case 0x3742c4u: goto label_3742c4;
        case 0x3742c8u: goto label_3742c8;
        case 0x3742ccu: goto label_3742cc;
        case 0x3742d0u: goto label_3742d0;
        case 0x3742d4u: goto label_3742d4;
        case 0x3742d8u: goto label_3742d8;
        case 0x3742dcu: goto label_3742dc;
        case 0x3742e0u: goto label_3742e0;
        case 0x3742e4u: goto label_3742e4;
        case 0x3742e8u: goto label_3742e8;
        case 0x3742ecu: goto label_3742ec;
        case 0x3742f0u: goto label_3742f0;
        case 0x3742f4u: goto label_3742f4;
        case 0x3742f8u: goto label_3742f8;
        case 0x3742fcu: goto label_3742fc;
        case 0x374300u: goto label_374300;
        case 0x374304u: goto label_374304;
        case 0x374308u: goto label_374308;
        case 0x37430cu: goto label_37430c;
        case 0x374310u: goto label_374310;
        case 0x374314u: goto label_374314;
        case 0x374318u: goto label_374318;
        case 0x37431cu: goto label_37431c;
        case 0x374320u: goto label_374320;
        case 0x374324u: goto label_374324;
        case 0x374328u: goto label_374328;
        case 0x37432cu: goto label_37432c;
        case 0x374330u: goto label_374330;
        case 0x374334u: goto label_374334;
        case 0x374338u: goto label_374338;
        case 0x37433cu: goto label_37433c;
        case 0x374340u: goto label_374340;
        case 0x374344u: goto label_374344;
        case 0x374348u: goto label_374348;
        case 0x37434cu: goto label_37434c;
        default: break;
    }

    ctx->pc = 0x3740b0u;

label_3740b0:
    // 0x3740b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3740b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3740b4:
    // 0x3740b4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3740b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3740b8:
    // 0x3740b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3740b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3740bc:
    // 0x3740bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3740bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3740c0:
    // 0x3740c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3740c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3740c4:
    // 0x3740c4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3740c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3740c8:
    // 0x3740c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3740c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3740cc:
    // 0x3740cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3740ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3740d0:
    // 0x3740d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3740d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3740d4:
    // 0x3740d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3740d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3740d8:
    // 0x3740d8: 0x8c666058  lw          $a2, 0x6058($v1)
    ctx->pc = 0x3740d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24664)));
label_3740dc:
    // 0x3740dc: 0x90c4000c  lbu         $a0, 0xC($a2)
    ctx->pc = 0x3740dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
label_3740e0:
    // 0x3740e0: 0x41efc  dsll32      $v1, $a0, 27
    ctx->pc = 0x3740e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 27));
label_3740e4:
    // 0x3740e4: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x3740e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_3740e8:
    // 0x3740e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3740ec:
    if (ctx->pc == 0x3740ECu) {
        ctx->pc = 0x3740ECu;
            // 0x3740ec: 0x90a5fd85  lbu         $a1, -0x27B($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294966661)));
        ctx->pc = 0x3740F0u;
        goto label_3740f0;
    }
    ctx->pc = 0x3740E8u;
    {
        const bool branch_taken_0x3740e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3740ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3740E8u;
            // 0x3740ec: 0x90a5fd85  lbu         $a1, -0x27B($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294966661)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3740e8) {
            ctx->pc = 0x374108u;
            goto label_374108;
        }
    }
    ctx->pc = 0x3740F0u;
label_3740f0:
    // 0x3740f0: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x3740f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_3740f4:
    // 0x3740f4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3740f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3740f8:
    // 0x3740f8: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_3740fc:
    if (ctx->pc == 0x3740FCu) {
        ctx->pc = 0x3740FCu;
            // 0x3740fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374100u;
        goto label_374100;
    }
    ctx->pc = 0x3740F8u;
    {
        const bool branch_taken_0x3740f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3740f8) {
            ctx->pc = 0x3740FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3740F8u;
            // 0x3740fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37410Cu;
            goto label_37410c;
        }
    }
    ctx->pc = 0x374100u;
label_374100:
    // 0x374100: 0x10000002  b           . + 4 + (0x2 << 2)
label_374104:
    if (ctx->pc == 0x374104u) {
        ctx->pc = 0x374104u;
            // 0x374104: 0x24d00008  addiu       $s0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x374108u;
        goto label_374108;
    }
    ctx->pc = 0x374100u;
    {
        const bool branch_taken_0x374100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374100u;
            // 0x374104: 0x24d00008  addiu       $s0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374100) {
            ctx->pc = 0x37410Cu;
            goto label_37410c;
        }
    }
    ctx->pc = 0x374108u;
label_374108:
    // 0x374108: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x374108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37410c:
    // 0x37410c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x37410cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_374110:
    // 0x374110: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x374110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_374114:
    // 0x374114: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x374114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_374118:
    // 0x374118: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x374118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_37411c:
    // 0x37411c: 0xa080fe01  sb          $zero, -0x1FF($a0)
    ctx->pc = 0x37411cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294966785), (uint8_t)GPR_U32(ctx, 0));
label_374120:
    // 0x374120: 0xa060fd95  sb          $zero, -0x26B($v1)
    ctx->pc = 0x374120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966677), (uint8_t)GPR_U32(ctx, 0));
label_374124:
    // 0x374124: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x374124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_374128:
    // 0x374128: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_37412c:
    if (ctx->pc == 0x37412Cu) {
        ctx->pc = 0x37412Cu;
            // 0x37412c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x374130u;
        goto label_374130;
    }
    ctx->pc = 0x374128u;
    {
        const bool branch_taken_0x374128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374128u;
            // 0x37412c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374128) {
            ctx->pc = 0x374138u;
            goto label_374138;
        }
    }
    ctx->pc = 0x374130u;
label_374130:
    // 0x374130: 0xc10b70c  jal         func_42DC30
label_374134:
    if (ctx->pc == 0x374134u) {
        ctx->pc = 0x374134u;
            // 0x374134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374138u;
        goto label_374138;
    }
    ctx->pc = 0x374130u;
    SET_GPR_U32(ctx, 31, 0x374138u);
    ctx->pc = 0x374134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374130u;
            // 0x374134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DC30u;
    if (runtime->hasFunction(0x42DC30u)) {
        auto targetFn = runtime->lookupFunction(0x42DC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374138u; }
        if (ctx->pc != 0x374138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042DC30_0x42dc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374138u; }
        if (ctx->pc != 0x374138u) { return; }
    }
    ctx->pc = 0x374138u;
label_374138:
    // 0x374138: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x374138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_37413c:
    // 0x37413c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_374140:
    // 0x374140: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x374140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_374144:
    // 0x374144: 0x8c63095c  lw          $v1, 0x95C($v1)
    ctx->pc = 0x374144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2396)));
label_374148:
    // 0x374148: 0x50640074  beql        $v1, $a0, . + 4 + (0x74 << 2)
label_37414c:
    if (ctx->pc == 0x37414Cu) {
        ctx->pc = 0x37414Cu;
            // 0x37414c: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x374150u;
        goto label_374150;
    }
    ctx->pc = 0x374148u;
    {
        const bool branch_taken_0x374148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x374148) {
            ctx->pc = 0x37414Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374148u;
            // 0x37414c: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37431Cu;
            goto label_37431c;
        }
    }
    ctx->pc = 0x374150u;
label_374150:
    // 0x374150: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x374150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_374154:
    // 0x374154: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_374158:
    if (ctx->pc == 0x374158u) {
        ctx->pc = 0x37415Cu;
        goto label_37415c;
    }
    ctx->pc = 0x374154u;
    {
        const bool branch_taken_0x374154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x374154) {
            ctx->pc = 0x3741A8u;
            goto label_3741a8;
        }
    }
    ctx->pc = 0x37415Cu;
label_37415c:
    // 0x37415c: 0x8ca20d6c  lw          $v0, 0xD6C($a1)
    ctx->pc = 0x37415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
label_374160:
    // 0x374160: 0x8ca40d70  lw          $a0, 0xD70($a1)
    ctx->pc = 0x374160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_374164:
    // 0x374164: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x374164u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_374168:
    // 0x374168: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x374168u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_37416c:
    // 0x37416c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x37416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_374170:
    // 0x374170: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_374174:
    if (ctx->pc == 0x374174u) {
        ctx->pc = 0x374174u;
            // 0x374174: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->pc = 0x374178u;
        goto label_374178;
    }
    ctx->pc = 0x374170u;
    {
        const bool branch_taken_0x374170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x374174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374170u;
            // 0x374174: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374170) {
            ctx->pc = 0x374184u;
            goto label_374184;
        }
    }
    ctx->pc = 0x374178u;
label_374178:
    // 0x374178: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x374178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_37417c:
    // 0x37417c: 0x5044000d  beql        $v0, $a0, . + 4 + (0xD << 2)
label_374180:
    if (ctx->pc == 0x374180u) {
        ctx->pc = 0x374180u;
            // 0x374180: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374184u;
        goto label_374184;
    }
    ctx->pc = 0x37417Cu;
    {
        const bool branch_taken_0x37417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x37417c) {
            ctx->pc = 0x374180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37417Cu;
            // 0x374180: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3741B4u;
            goto label_3741b4;
        }
    }
    ctx->pc = 0x374184u;
label_374184:
    // 0x374184: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_374188:
    if (ctx->pc == 0x374188u) {
        ctx->pc = 0x37418Cu;
        goto label_37418c;
    }
    ctx->pc = 0x374184u;
    {
        const bool branch_taken_0x374184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x374184) {
            ctx->pc = 0x374190u;
            goto label_374190;
        }
    }
    ctx->pc = 0x37418Cu;
label_37418c:
    // 0x37418c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x37418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_374190:
    // 0x374190: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x374190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_374194:
    // 0x374194: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x374194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_374198:
    // 0x374198: 0xc057b7c  jal         func_15EDF0
label_37419c:
    if (ctx->pc == 0x37419Cu) {
        ctx->pc = 0x37419Cu;
            // 0x37419c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3741A0u;
        goto label_3741a0;
    }
    ctx->pc = 0x374198u;
    SET_GPR_U32(ctx, 31, 0x3741A0u);
    ctx->pc = 0x37419Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374198u;
            // 0x37419c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741A0u; }
        if (ctx->pc != 0x3741A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741A0u; }
        if (ctx->pc != 0x3741A0u) { return; }
    }
    ctx->pc = 0x3741A0u;
label_3741a0:
    // 0x3741a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3741a4:
    if (ctx->pc == 0x3741A4u) {
        ctx->pc = 0x3741A4u;
            // 0x3741a4: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x3741A8u;
        goto label_3741a8;
    }
    ctx->pc = 0x3741A0u;
    {
        const bool branch_taken_0x3741a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3741A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3741A0u;
            // 0x3741a4: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3741a0) {
            ctx->pc = 0x3741B4u;
            goto label_3741b4;
        }
    }
    ctx->pc = 0x3741A8u;
label_3741a8:
    // 0x3741a8: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_3741ac:
    if (ctx->pc == 0x3741ACu) {
        ctx->pc = 0x3741B0u;
        goto label_3741b0;
    }
    ctx->pc = 0x3741A8u;
    {
        const bool branch_taken_0x3741a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3741a8) {
            ctx->pc = 0x3741B4u;
            goto label_3741b4;
        }
    }
    ctx->pc = 0x3741B0u;
label_3741b0:
    // 0x3741b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3741b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3741b4:
    // 0x3741b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3741b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3741b8:
    // 0x3741b8: 0x90426068  lbu         $v0, 0x6068($v0)
    ctx->pc = 0x3741b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24680)));
label_3741bc:
    // 0x3741bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3741c0:
    if (ctx->pc == 0x3741C0u) {
        ctx->pc = 0x3741C4u;
        goto label_3741c4;
    }
    ctx->pc = 0x3741BCu;
    {
        const bool branch_taken_0x3741bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3741bc) {
            ctx->pc = 0x3741F4u;
            goto label_3741f4;
        }
    }
    ctx->pc = 0x3741C4u;
label_3741c4:
    // 0x3741c4: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x3741c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3741c8:
    // 0x3741c8: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_3741cc:
    if (ctx->pc == 0x3741CCu) {
        ctx->pc = 0x3741CCu;
            // 0x3741cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3741D0u;
        goto label_3741d0;
    }
    ctx->pc = 0x3741C8u;
    {
        const bool branch_taken_0x3741c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3741c8) {
            ctx->pc = 0x3741CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3741C8u;
            // 0x3741cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3741F4u;
            goto label_3741f4;
        }
    }
    ctx->pc = 0x3741D0u;
label_3741d0:
    // 0x3741d0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_3741d4:
    if (ctx->pc == 0x3741D4u) {
        ctx->pc = 0x3741D8u;
        goto label_3741d8;
    }
    ctx->pc = 0x3741D0u;
    {
        const bool branch_taken_0x3741d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3741d0) {
            ctx->pc = 0x3741DCu;
            goto label_3741dc;
        }
    }
    ctx->pc = 0x3741D8u;
label_3741d8:
    // 0x3741d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3741d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3741dc:
    // 0x3741dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3741dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3741e0:
    // 0x3741e0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3741e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3741e4:
    // 0x3741e4: 0xc057b7c  jal         func_15EDF0
label_3741e8:
    if (ctx->pc == 0x3741E8u) {
        ctx->pc = 0x3741E8u;
            // 0x3741e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3741ECu;
        goto label_3741ec;
    }
    ctx->pc = 0x3741E4u;
    SET_GPR_U32(ctx, 31, 0x3741ECu);
    ctx->pc = 0x3741E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3741E4u;
            // 0x3741e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741ECu; }
        if (ctx->pc != 0x3741ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3741ECu; }
        if (ctx->pc != 0x3741ECu) { return; }
    }
    ctx->pc = 0x3741ECu;
label_3741ec:
    // 0x3741ec: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x3741ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_3741f0:
    // 0x3741f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3741f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3741f4:
    // 0x3741f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3741f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3741f8:
    // 0x3741f8: 0x8c5389d0  lw          $s3, -0x7630($v0)
    ctx->pc = 0x3741f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3741fc:
    // 0x3741fc: 0xc0b8c24  jal         func_2E3090
label_374200:
    if (ctx->pc == 0x374200u) {
        ctx->pc = 0x374200u;
            // 0x374200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374204u;
        goto label_374204;
    }
    ctx->pc = 0x3741FCu;
    SET_GPR_U32(ctx, 31, 0x374204u);
    ctx->pc = 0x374200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3741FCu;
            // 0x374200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (runtime->hasFunction(0x2E3090u)) {
        auto targetFn = runtime->lookupFunction(0x2E3090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374204u; }
        if (ctx->pc != 0x374204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3090_0x2e3090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374204u; }
        if (ctx->pc != 0x374204u) { return; }
    }
    ctx->pc = 0x374204u;
label_374204:
    // 0x374204: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_374208:
    if (ctx->pc == 0x374208u) {
        ctx->pc = 0x37420Cu;
        goto label_37420c;
    }
    ctx->pc = 0x374204u;
    {
        const bool branch_taken_0x374204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374204) {
            ctx->pc = 0x374220u;
            goto label_374220;
        }
    }
    ctx->pc = 0x37420Cu;
label_37420c:
    // 0x37420c: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x37420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_374210:
    // 0x374210: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x374210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_374214:
    // 0x374214: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_374218:
    if (ctx->pc == 0x374218u) {
        ctx->pc = 0x37421Cu;
        goto label_37421c;
    }
    ctx->pc = 0x374214u;
    {
        const bool branch_taken_0x374214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x374214) {
            ctx->pc = 0x374220u;
            goto label_374220;
        }
    }
    ctx->pc = 0x37421Cu;
label_37421c:
    // 0x37421c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37421cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374220:
    // 0x374220: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_374224:
    if (ctx->pc == 0x374224u) {
        ctx->pc = 0x374224u;
            // 0x374224: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x374228u;
        goto label_374228;
    }
    ctx->pc = 0x374220u;
    {
        const bool branch_taken_0x374220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x374220) {
            ctx->pc = 0x374224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374220u;
            // 0x374224: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374290u;
            goto label_374290;
        }
    }
    ctx->pc = 0x374228u;
label_374228:
    // 0x374228: 0xc040180  jal         func_100600
label_37422c:
    if (ctx->pc == 0x37422Cu) {
        ctx->pc = 0x37422Cu;
            // 0x37422c: 0x24041250  addiu       $a0, $zero, 0x1250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
        ctx->pc = 0x374230u;
        goto label_374230;
    }
    ctx->pc = 0x374228u;
    SET_GPR_U32(ctx, 31, 0x374230u);
    ctx->pc = 0x37422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374228u;
            // 0x37422c: 0x24041250  addiu       $a0, $zero, 0x1250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374230u; }
        if (ctx->pc != 0x374230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374230u; }
        if (ctx->pc != 0x374230u) { return; }
    }
    ctx->pc = 0x374230u;
label_374230:
    // 0x374230: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_374234:
    if (ctx->pc == 0x374234u) {
        ctx->pc = 0x374234u;
            // 0x374234: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x374238u;
        goto label_374238;
    }
    ctx->pc = 0x374230u;
    {
        const bool branch_taken_0x374230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374230u;
            // 0x374234: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374230) {
            ctx->pc = 0x374268u;
            goto label_374268;
        }
    }
    ctx->pc = 0x374238u;
label_374238:
    // 0x374238: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x374238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_37423c:
    // 0x37423c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_374240:
    // 0x374240: 0xc0dd0d4  jal         func_374350
label_374244:
    if (ctx->pc == 0x374244u) {
        ctx->pc = 0x374244u;
            // 0x374244: 0x34458705  ori         $a1, $v0, 0x8705 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34565);
        ctx->pc = 0x374248u;
        goto label_374248;
    }
    ctx->pc = 0x374240u;
    SET_GPR_U32(ctx, 31, 0x374248u);
    ctx->pc = 0x374244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374240u;
            // 0x374244: 0x34458705  ori         $a1, $v0, 0x8705 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34565);
        ctx->in_delay_slot = false;
    ctx->pc = 0x374350u;
    if (runtime->hasFunction(0x374350u)) {
        auto targetFn = runtime->lookupFunction(0x374350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374248u; }
        if (ctx->pc != 0x374248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00374350_0x374350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374248u; }
        if (ctx->pc != 0x374248u) { return; }
    }
    ctx->pc = 0x374248u;
label_374248:
    // 0x374248: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x374248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_37424c:
    // 0x37424c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x37424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_374250:
    // 0x374250: 0x2463c570  addiu       $v1, $v1, -0x3A90
    ctx->pc = 0x374250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952304));
label_374254:
    // 0x374254: 0x2442c598  addiu       $v0, $v0, -0x3A68
    ctx->pc = 0x374254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952344));
label_374258:
    // 0x374258: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x374258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37425c:
    // 0x37425c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x37425cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_374260:
    // 0x374260: 0xa2201240  sb          $zero, 0x1240($s1)
    ctx->pc = 0x374260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4672), (uint8_t)GPR_U32(ctx, 0));
label_374264:
    // 0x374264: 0xa2201241  sb          $zero, 0x1241($s1)
    ctx->pc = 0x374264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4673), (uint8_t)GPR_U32(ctx, 0));
label_374268:
    // 0x374268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37426c:
    // 0x37426c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37426cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_374270:
    // 0x374270: 0xc10b82c  jal         func_42E0B0
label_374274:
    if (ctx->pc == 0x374274u) {
        ctx->pc = 0x374274u;
            // 0x374274: 0xae510058  sw          $s1, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 17));
        ctx->pc = 0x374278u;
        goto label_374278;
    }
    ctx->pc = 0x374270u;
    SET_GPR_U32(ctx, 31, 0x374278u);
    ctx->pc = 0x374274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374270u;
            // 0x374274: 0xae510058  sw          $s1, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42E0B0u;
    if (runtime->hasFunction(0x42E0B0u)) {
        auto targetFn = runtime->lookupFunction(0x42E0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374278u; }
        if (ctx->pc != 0x374278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042E0B0_0x42e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374278u; }
        if (ctx->pc != 0x374278u) { return; }
    }
    ctx->pc = 0x374278u;
label_374278:
    // 0x374278: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x374278u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_37427c:
    // 0x37427c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x37427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_374280:
    // 0x374280: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x374280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_374284:
    // 0x374284: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x374284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_374288:
    // 0x374288: 0xa043fe00  sb          $v1, -0x200($v0)
    ctx->pc = 0x374288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294966784), (uint8_t)GPR_U32(ctx, 3));
label_37428c:
    // 0x37428c: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x37428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_374290:
    // 0x374290: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_374294:
    if (ctx->pc == 0x374294u) {
        ctx->pc = 0x374294u;
            // 0x374294: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x374298u;
        goto label_374298;
    }
    ctx->pc = 0x374290u;
    {
        const bool branch_taken_0x374290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x374290) {
            ctx->pc = 0x374294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x374290u;
            // 0x374294: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3742CCu;
            goto label_3742cc;
        }
    }
    ctx->pc = 0x374298u;
label_374298:
    // 0x374298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x374298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37429c:
    // 0x37429c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x37429cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_3742a0:
    // 0x3742a0: 0x320f809  jalr        $t9
label_3742a4:
    if (ctx->pc == 0x3742A4u) {
        ctx->pc = 0x3742A8u;
        goto label_3742a8;
    }
    ctx->pc = 0x3742A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3742A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3742A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3742A8u; }
            if (ctx->pc != 0x3742A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3742A8u;
label_3742a8:
    // 0x3742a8: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x3742a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3742ac:
    // 0x3742ac: 0xc10b828  jal         func_42E0A0
label_3742b0:
    if (ctx->pc == 0x3742B0u) {
        ctx->pc = 0x3742B0u;
            // 0x3742b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3742B4u;
        goto label_3742b4;
    }
    ctx->pc = 0x3742ACu;
    SET_GPR_U32(ctx, 31, 0x3742B4u);
    ctx->pc = 0x3742B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3742ACu;
            // 0x3742b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42E0A0u;
    if (runtime->hasFunction(0x42E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x42E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742B4u; }
        if (ctx->pc != 0x3742B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042E0A0_0x42e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742B4u; }
        if (ctx->pc != 0x3742B4u) { return; }
    }
    ctx->pc = 0x3742B4u;
label_3742b4:
    // 0x3742b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3742b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3742b8:
    // 0x3742b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3742b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3742bc:
    // 0x3742bc: 0x9045fd95  lbu         $a1, -0x26B($v0)
    ctx->pc = 0x3742bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966677)));
label_3742c0:
    // 0x3742c0: 0xc10b70c  jal         func_42DC30
label_3742c4:
    if (ctx->pc == 0x3742C4u) {
        ctx->pc = 0x3742C4u;
            // 0x3742c4: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x3742C8u;
        goto label_3742c8;
    }
    ctx->pc = 0x3742C0u;
    SET_GPR_U32(ctx, 31, 0x3742C8u);
    ctx->pc = 0x3742C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3742C0u;
            // 0x3742c4: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DC30u;
    if (runtime->hasFunction(0x42DC30u)) {
        auto targetFn = runtime->lookupFunction(0x42DC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742C8u; }
        if (ctx->pc != 0x3742C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042DC30_0x42dc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742C8u; }
        if (ctx->pc != 0x3742C8u) { return; }
    }
    ctx->pc = 0x3742C8u;
label_3742c8:
    // 0x3742c8: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x3742c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_3742cc:
    // 0x3742cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3742ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3742d0:
    // 0x3742d0: 0xc04a576  jal         func_1295D8
label_3742d4:
    if (ctx->pc == 0x3742D4u) {
        ctx->pc = 0x3742D4u;
            // 0x3742d4: 0x3406fd24  ori         $a2, $zero, 0xFD24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64804);
        ctx->pc = 0x3742D8u;
        goto label_3742d8;
    }
    ctx->pc = 0x3742D0u;
    SET_GPR_U32(ctx, 31, 0x3742D8u);
    ctx->pc = 0x3742D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3742D0u;
            // 0x3742d4: 0x3406fd24  ori         $a2, $zero, 0xFD24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64804);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742D8u; }
        if (ctx->pc != 0x3742D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742D8u; }
        if (ctx->pc != 0x3742D8u) { return; }
    }
    ctx->pc = 0x3742D8u;
label_3742d8:
    // 0x3742d8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3742d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3742dc:
    // 0x3742dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3742dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3742e0:
    // 0x3742e0: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x3742e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_3742e4:
    // 0x3742e4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x3742e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3742e8:
    // 0x3742e8: 0xac80fd88  sw          $zero, -0x278($a0)
    ctx->pc = 0x3742e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966664), GPR_U32(ctx, 0));
label_3742ec:
    // 0x3742ec: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3742ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3742f0:
    // 0x3742f0: 0xac60fd8c  sw          $zero, -0x274($v1)
    ctx->pc = 0x3742f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966668), GPR_U32(ctx, 0));
label_3742f4:
    // 0x3742f4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3742f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3742f8:
    // 0x3742f8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x3742f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3742fc:
    // 0x3742fc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3742fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_374300:
    // 0x374300: 0xa080fd86  sb          $zero, -0x27A($a0)
    ctx->pc = 0x374300u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294966662), (uint8_t)GPR_U32(ctx, 0));
label_374304:
    // 0x374304: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x374304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_374308:
    // 0x374308: 0xa060fe01  sb          $zero, -0x1FF($v1)
    ctx->pc = 0x374308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966785), (uint8_t)GPR_U32(ctx, 0));
label_37430c:
    // 0x37430c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x37430cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_374310:
    // 0x374310: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x374310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_374314:
    // 0x374314: 0x10000005  b           . + 4 + (0x5 << 2)
label_374318:
    if (ctx->pc == 0x374318u) {
        ctx->pc = 0x374318u;
            // 0x374318: 0xac60fd90  sw          $zero, -0x270($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966672), GPR_U32(ctx, 0));
        ctx->pc = 0x37431Cu;
        goto label_37431c;
    }
    ctx->pc = 0x374314u;
    {
        const bool branch_taken_0x374314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374314u;
            // 0x374318: 0xac60fd90  sw          $zero, -0x270($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374314) {
            ctx->pc = 0x37432Cu;
            goto label_37432c;
        }
    }
    ctx->pc = 0x37431Cu;
label_37431c:
    // 0x37431c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_374320:
    if (ctx->pc == 0x374320u) {
        ctx->pc = 0x374320u;
            // 0x374320: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x374324u;
        goto label_374324;
    }
    ctx->pc = 0x37431Cu;
    {
        const bool branch_taken_0x37431c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37431c) {
            ctx->pc = 0x374320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37431Cu;
            // 0x374320: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x374330u;
            goto label_374330;
        }
    }
    ctx->pc = 0x374324u;
label_374324:
    // 0x374324: 0xc10b710  jal         func_42DC40
label_374328:
    if (ctx->pc == 0x374328u) {
        ctx->pc = 0x374328u;
            // 0x374328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37432Cu;
        goto label_37432c;
    }
    ctx->pc = 0x374324u;
    SET_GPR_U32(ctx, 31, 0x37432Cu);
    ctx->pc = 0x374328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374324u;
            // 0x374328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DC40u;
    if (runtime->hasFunction(0x42DC40u)) {
        auto targetFn = runtime->lookupFunction(0x42DC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37432Cu; }
        if (ctx->pc != 0x37432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042DC40_0x42dc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37432Cu; }
        if (ctx->pc != 0x37432Cu) { return; }
    }
    ctx->pc = 0x37432Cu;
label_37432c:
    // 0x37432c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_374330:
    // 0x374330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x374330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_374334:
    // 0x374334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_374338:
    // 0x374338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37433c:
    // 0x37433c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37433cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_374340:
    // 0x374340: 0x3e00008  jr          $ra
label_374344:
    if (ctx->pc == 0x374344u) {
        ctx->pc = 0x374344u;
            // 0x374344: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x374348u;
        goto label_374348;
    }
    ctx->pc = 0x374340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374340u;
            // 0x374344: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374348u;
label_374348:
    // 0x374348: 0x0  nop
    ctx->pc = 0x374348u;
    // NOP
label_37434c:
    // 0x37434c: 0x0  nop
    ctx->pc = 0x37434cu;
    // NOP
}
