#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AD950
// Address: 0x3ad950 - 0x3adbf0
void sub_003AD950_0x3ad950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD950_0x3ad950");
#endif

    switch (ctx->pc) {
        case 0x3ad950u: goto label_3ad950;
        case 0x3ad954u: goto label_3ad954;
        case 0x3ad958u: goto label_3ad958;
        case 0x3ad95cu: goto label_3ad95c;
        case 0x3ad960u: goto label_3ad960;
        case 0x3ad964u: goto label_3ad964;
        case 0x3ad968u: goto label_3ad968;
        case 0x3ad96cu: goto label_3ad96c;
        case 0x3ad970u: goto label_3ad970;
        case 0x3ad974u: goto label_3ad974;
        case 0x3ad978u: goto label_3ad978;
        case 0x3ad97cu: goto label_3ad97c;
        case 0x3ad980u: goto label_3ad980;
        case 0x3ad984u: goto label_3ad984;
        case 0x3ad988u: goto label_3ad988;
        case 0x3ad98cu: goto label_3ad98c;
        case 0x3ad990u: goto label_3ad990;
        case 0x3ad994u: goto label_3ad994;
        case 0x3ad998u: goto label_3ad998;
        case 0x3ad99cu: goto label_3ad99c;
        case 0x3ad9a0u: goto label_3ad9a0;
        case 0x3ad9a4u: goto label_3ad9a4;
        case 0x3ad9a8u: goto label_3ad9a8;
        case 0x3ad9acu: goto label_3ad9ac;
        case 0x3ad9b0u: goto label_3ad9b0;
        case 0x3ad9b4u: goto label_3ad9b4;
        case 0x3ad9b8u: goto label_3ad9b8;
        case 0x3ad9bcu: goto label_3ad9bc;
        case 0x3ad9c0u: goto label_3ad9c0;
        case 0x3ad9c4u: goto label_3ad9c4;
        case 0x3ad9c8u: goto label_3ad9c8;
        case 0x3ad9ccu: goto label_3ad9cc;
        case 0x3ad9d0u: goto label_3ad9d0;
        case 0x3ad9d4u: goto label_3ad9d4;
        case 0x3ad9d8u: goto label_3ad9d8;
        case 0x3ad9dcu: goto label_3ad9dc;
        case 0x3ad9e0u: goto label_3ad9e0;
        case 0x3ad9e4u: goto label_3ad9e4;
        case 0x3ad9e8u: goto label_3ad9e8;
        case 0x3ad9ecu: goto label_3ad9ec;
        case 0x3ad9f0u: goto label_3ad9f0;
        case 0x3ad9f4u: goto label_3ad9f4;
        case 0x3ad9f8u: goto label_3ad9f8;
        case 0x3ad9fcu: goto label_3ad9fc;
        case 0x3ada00u: goto label_3ada00;
        case 0x3ada04u: goto label_3ada04;
        case 0x3ada08u: goto label_3ada08;
        case 0x3ada0cu: goto label_3ada0c;
        case 0x3ada10u: goto label_3ada10;
        case 0x3ada14u: goto label_3ada14;
        case 0x3ada18u: goto label_3ada18;
        case 0x3ada1cu: goto label_3ada1c;
        case 0x3ada20u: goto label_3ada20;
        case 0x3ada24u: goto label_3ada24;
        case 0x3ada28u: goto label_3ada28;
        case 0x3ada2cu: goto label_3ada2c;
        case 0x3ada30u: goto label_3ada30;
        case 0x3ada34u: goto label_3ada34;
        case 0x3ada38u: goto label_3ada38;
        case 0x3ada3cu: goto label_3ada3c;
        case 0x3ada40u: goto label_3ada40;
        case 0x3ada44u: goto label_3ada44;
        case 0x3ada48u: goto label_3ada48;
        case 0x3ada4cu: goto label_3ada4c;
        case 0x3ada50u: goto label_3ada50;
        case 0x3ada54u: goto label_3ada54;
        case 0x3ada58u: goto label_3ada58;
        case 0x3ada5cu: goto label_3ada5c;
        case 0x3ada60u: goto label_3ada60;
        case 0x3ada64u: goto label_3ada64;
        case 0x3ada68u: goto label_3ada68;
        case 0x3ada6cu: goto label_3ada6c;
        case 0x3ada70u: goto label_3ada70;
        case 0x3ada74u: goto label_3ada74;
        case 0x3ada78u: goto label_3ada78;
        case 0x3ada7cu: goto label_3ada7c;
        case 0x3ada80u: goto label_3ada80;
        case 0x3ada84u: goto label_3ada84;
        case 0x3ada88u: goto label_3ada88;
        case 0x3ada8cu: goto label_3ada8c;
        case 0x3ada90u: goto label_3ada90;
        case 0x3ada94u: goto label_3ada94;
        case 0x3ada98u: goto label_3ada98;
        case 0x3ada9cu: goto label_3ada9c;
        case 0x3adaa0u: goto label_3adaa0;
        case 0x3adaa4u: goto label_3adaa4;
        case 0x3adaa8u: goto label_3adaa8;
        case 0x3adaacu: goto label_3adaac;
        case 0x3adab0u: goto label_3adab0;
        case 0x3adab4u: goto label_3adab4;
        case 0x3adab8u: goto label_3adab8;
        case 0x3adabcu: goto label_3adabc;
        case 0x3adac0u: goto label_3adac0;
        case 0x3adac4u: goto label_3adac4;
        case 0x3adac8u: goto label_3adac8;
        case 0x3adaccu: goto label_3adacc;
        case 0x3adad0u: goto label_3adad0;
        case 0x3adad4u: goto label_3adad4;
        case 0x3adad8u: goto label_3adad8;
        case 0x3adadcu: goto label_3adadc;
        case 0x3adae0u: goto label_3adae0;
        case 0x3adae4u: goto label_3adae4;
        case 0x3adae8u: goto label_3adae8;
        case 0x3adaecu: goto label_3adaec;
        case 0x3adaf0u: goto label_3adaf0;
        case 0x3adaf4u: goto label_3adaf4;
        case 0x3adaf8u: goto label_3adaf8;
        case 0x3adafcu: goto label_3adafc;
        case 0x3adb00u: goto label_3adb00;
        case 0x3adb04u: goto label_3adb04;
        case 0x3adb08u: goto label_3adb08;
        case 0x3adb0cu: goto label_3adb0c;
        case 0x3adb10u: goto label_3adb10;
        case 0x3adb14u: goto label_3adb14;
        case 0x3adb18u: goto label_3adb18;
        case 0x3adb1cu: goto label_3adb1c;
        case 0x3adb20u: goto label_3adb20;
        case 0x3adb24u: goto label_3adb24;
        case 0x3adb28u: goto label_3adb28;
        case 0x3adb2cu: goto label_3adb2c;
        case 0x3adb30u: goto label_3adb30;
        case 0x3adb34u: goto label_3adb34;
        case 0x3adb38u: goto label_3adb38;
        case 0x3adb3cu: goto label_3adb3c;
        case 0x3adb40u: goto label_3adb40;
        case 0x3adb44u: goto label_3adb44;
        case 0x3adb48u: goto label_3adb48;
        case 0x3adb4cu: goto label_3adb4c;
        case 0x3adb50u: goto label_3adb50;
        case 0x3adb54u: goto label_3adb54;
        case 0x3adb58u: goto label_3adb58;
        case 0x3adb5cu: goto label_3adb5c;
        case 0x3adb60u: goto label_3adb60;
        case 0x3adb64u: goto label_3adb64;
        case 0x3adb68u: goto label_3adb68;
        case 0x3adb6cu: goto label_3adb6c;
        case 0x3adb70u: goto label_3adb70;
        case 0x3adb74u: goto label_3adb74;
        case 0x3adb78u: goto label_3adb78;
        case 0x3adb7cu: goto label_3adb7c;
        case 0x3adb80u: goto label_3adb80;
        case 0x3adb84u: goto label_3adb84;
        case 0x3adb88u: goto label_3adb88;
        case 0x3adb8cu: goto label_3adb8c;
        case 0x3adb90u: goto label_3adb90;
        case 0x3adb94u: goto label_3adb94;
        case 0x3adb98u: goto label_3adb98;
        case 0x3adb9cu: goto label_3adb9c;
        case 0x3adba0u: goto label_3adba0;
        case 0x3adba4u: goto label_3adba4;
        case 0x3adba8u: goto label_3adba8;
        case 0x3adbacu: goto label_3adbac;
        case 0x3adbb0u: goto label_3adbb0;
        case 0x3adbb4u: goto label_3adbb4;
        case 0x3adbb8u: goto label_3adbb8;
        case 0x3adbbcu: goto label_3adbbc;
        case 0x3adbc0u: goto label_3adbc0;
        case 0x3adbc4u: goto label_3adbc4;
        case 0x3adbc8u: goto label_3adbc8;
        case 0x3adbccu: goto label_3adbcc;
        case 0x3adbd0u: goto label_3adbd0;
        case 0x3adbd4u: goto label_3adbd4;
        case 0x3adbd8u: goto label_3adbd8;
        case 0x3adbdcu: goto label_3adbdc;
        case 0x3adbe0u: goto label_3adbe0;
        case 0x3adbe4u: goto label_3adbe4;
        case 0x3adbe8u: goto label_3adbe8;
        case 0x3adbecu: goto label_3adbec;
        default: break;
    }

    ctx->pc = 0x3ad950u;

label_3ad950:
    // 0x3ad950: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ad950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ad954:
    // 0x3ad954: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ad954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ad958:
    // 0x3ad958: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ad958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ad95c:
    // 0x3ad95c: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3ad95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3ad960:
    // 0x3ad960: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ad960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ad964:
    // 0x3ad964: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ad964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ad968:
    // 0x3ad968: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ad968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad96c:
    // 0x3ad96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ad96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ad970:
    // 0x3ad970: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3ad970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3ad974:
    // 0x3ad974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ad978:
    // 0x3ad978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ad978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ad97c:
    // 0x3ad97c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ad97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ad980:
    // 0x3ad980: 0x906411a1  lbu         $a0, 0x11A1($v1)
    ctx->pc = 0x3ad980u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4513)));
label_3ad984:
    // 0x3ad984: 0x5080005d  beql        $a0, $zero, . + 4 + (0x5D << 2)
label_3ad988:
    if (ctx->pc == 0x3AD988u) {
        ctx->pc = 0x3AD988u;
            // 0x3ad988: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3AD98Cu;
        goto label_3ad98c;
    }
    ctx->pc = 0x3AD984u;
    {
        const bool branch_taken_0x3ad984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad984) {
            ctx->pc = 0x3AD988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD984u;
            // 0x3ad988: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ADAFCu;
            goto label_3adafc;
        }
    }
    ctx->pc = 0x3AD98Cu;
label_3ad98c:
    // 0x3ad98c: 0x8c640da0  lw          $a0, 0xDA0($v1)
    ctx->pc = 0x3ad98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3ad990:
    // 0x3ad990: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x3ad990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_3ad994:
    // 0x3ad994: 0x14800058  bnez        $a0, . + 4 + (0x58 << 2)
label_3ad998:
    if (ctx->pc == 0x3AD998u) {
        ctx->pc = 0x3AD99Cu;
        goto label_3ad99c;
    }
    ctx->pc = 0x3AD994u;
    {
        const bool branch_taken_0x3ad994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad994) {
            ctx->pc = 0x3ADAF8u;
            goto label_3adaf8;
        }
    }
    ctx->pc = 0x3AD99Cu;
label_3ad99c:
    // 0x3ad99c: 0x8c680d6c  lw          $t0, 0xD6C($v1)
    ctx->pc = 0x3ad99cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
label_3ad9a0:
    // 0x3ad9a0: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x3ad9a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
label_3ad9a4:
    // 0x3ad9a4: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x3ad9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ad9a8:
    // 0x3ad9a8: 0x256bcd10  addiu       $t3, $t3, -0x32F0
    ctx->pc = 0x3ad9a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294954256));
label_3ad9ac:
    // 0x3ad9ac: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x3ad9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3ad9b0:
    // 0x3ad9b0: 0x264a0010  addiu       $t2, $s2, 0x10
    ctx->pc = 0x3ad9b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3ad9b4:
    // 0x3ad9b4: 0x910c0010  lbu         $t4, 0x10($t0)
    ctx->pc = 0x3ad9b4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
label_3ad9b8:
    // 0x3ad9b8: 0x8d290110  lw          $t1, 0x110($t1)
    ctx->pc = 0x3ad9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 272)));
label_3ad9bc:
    // 0x3ad9bc: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x3ad9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3ad9c0:
    // 0x3ad9c0: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x3ad9c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_3ad9c4:
    // 0x3ad9c4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3ad9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ad9c8:
    // 0x3ad9c8: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x3ad9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_3ad9cc:
    // 0x3ad9cc: 0x8d710000  lw          $s1, 0x0($t3)
    ctx->pc = 0x3ad9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3ad9d0:
    // 0x3ad9d0: 0x1128000e  beq         $t1, $t0, . + 4 + (0xE << 2)
label_3ad9d4:
    if (ctx->pc == 0x3AD9D4u) {
        ctx->pc = 0x3AD9D4u;
            // 0x3ad9d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3AD9D8u;
        goto label_3ad9d8;
    }
    ctx->pc = 0x3AD9D0u;
    {
        const bool branch_taken_0x3ad9d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x3AD9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD9D0u;
            // 0x3ad9d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad9d0) {
            ctx->pc = 0x3ADA0Cu;
            goto label_3ada0c;
        }
    }
    ctx->pc = 0x3AD9D8u;
label_3ad9d8:
    // 0x3ad9d8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3ad9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ad9dc:
    // 0x3ad9dc: 0x5128000c  beql        $t1, $t0, . + 4 + (0xC << 2)
label_3ad9e0:
    if (ctx->pc == 0x3AD9E0u) {
        ctx->pc = 0x3AD9E0u;
            // 0x3ad9e0: 0x30a80001  andi        $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3AD9E4u;
        goto label_3ad9e4;
    }
    ctx->pc = 0x3AD9DCu;
    {
        const bool branch_taken_0x3ad9dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x3ad9dc) {
            ctx->pc = 0x3AD9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD9DCu;
            // 0x3ad9e0: 0x30a80001  andi        $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ADA10u;
            goto label_3ada10;
        }
    }
    ctx->pc = 0x3AD9E4u;
label_3ad9e4:
    // 0x3ad9e4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3ad9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ad9e8:
    // 0x3ad9e8: 0x51280003  beql        $t1, $t0, . + 4 + (0x3 << 2)
label_3ad9ec:
    if (ctx->pc == 0x3AD9ECu) {
        ctx->pc = 0x3AD9ECu;
            // 0x3ad9ec: 0x8d480018  lw          $t0, 0x18($t2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
        ctx->pc = 0x3AD9F0u;
        goto label_3ad9f0;
    }
    ctx->pc = 0x3AD9E8u;
    {
        const bool branch_taken_0x3ad9e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x3ad9e8) {
            ctx->pc = 0x3AD9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD9E8u;
            // 0x3ad9ec: 0x8d480018  lw          $t0, 0x18($t2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AD9F8u;
            goto label_3ad9f8;
        }
    }
    ctx->pc = 0x3AD9F0u;
label_3ad9f0:
    // 0x3ad9f0: 0x10000012  b           . + 4 + (0x12 << 2)
label_3ad9f4:
    if (ctx->pc == 0x3AD9F4u) {
        ctx->pc = 0x3AD9F4u;
            // 0x3ad9f4: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3AD9F8u;
        goto label_3ad9f8;
    }
    ctx->pc = 0x3AD9F0u;
    {
        const bool branch_taken_0x3ad9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD9F0u;
            // 0x3ad9f4: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad9f0) {
            ctx->pc = 0x3ADA3Cu;
            goto label_3ada3c;
        }
    }
    ctx->pc = 0x3AD9F8u;
label_3ad9f8:
    // 0x3ad9f8: 0x30a90001  andi        $t1, $a1, 0x1
    ctx->pc = 0x3ad9f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3ad9fc:
    // 0x3ad9fc: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x3ad9fcu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3ada00:
    // 0x3ada00: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x3ada00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3ada04:
    // 0x3ada04: 0x1000000c  b           . + 4 + (0xC << 2)
label_3ada08:
    if (ctx->pc == 0x3ADA08u) {
        ctx->pc = 0x3ADA08u;
            // 0x3ada08: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->pc = 0x3ADA0Cu;
        goto label_3ada0c;
    }
    ctx->pc = 0x3ADA04u;
    {
        const bool branch_taken_0x3ada04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADA04u;
            // 0x3ada08: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada04) {
            ctx->pc = 0x3ADA38u;
            goto label_3ada38;
        }
    }
    ctx->pc = 0x3ADA0Cu;
label_3ada0c:
    // 0x3ada0c: 0x30a80001  andi        $t0, $a1, 0x1
    ctx->pc = 0x3ada0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3ada10:
    // 0x3ada10: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_3ada14:
    if (ctx->pc == 0x3ADA14u) {
        ctx->pc = 0x3ADA14u;
            // 0x3ada14: 0x8d480018  lw          $t0, 0x18($t2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
        ctx->pc = 0x3ADA18u;
        goto label_3ada18;
    }
    ctx->pc = 0x3ADA10u;
    {
        const bool branch_taken_0x3ada10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ada10) {
            ctx->pc = 0x3ADA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADA10u;
            // 0x3ada14: 0x8d480018  lw          $t0, 0x18($t2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ADA28u;
            goto label_3ada28;
        }
    }
    ctx->pc = 0x3ADA18u;
label_3ada18:
    // 0x3ada18: 0x8d480014  lw          $t0, 0x14($t2)
    ctx->pc = 0x3ada18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_3ada1c:
    // 0x3ada1c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3ada1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ada20:
    // 0x3ada20: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3ada20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_3ada24:
    // 0x3ada24: 0x8d480018  lw          $t0, 0x18($t2)
    ctx->pc = 0x3ada24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_3ada28:
    // 0x3ada28: 0x30a90002  andi        $t1, $a1, 0x2
    ctx->pc = 0x3ada28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_3ada2c:
    // 0x3ada2c: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x3ada2cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3ada30:
    // 0x3ada30: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x3ada30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3ada34:
    // 0x3ada34: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3ada34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_3ada38:
    // 0x3ada38: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x3ada38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ada3c:
    // 0x3ada3c: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_3ada40:
    if (ctx->pc == 0x3ADA40u) {
        ctx->pc = 0x3ADA40u;
            // 0x3ada40: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3ADA44u;
        goto label_3ada44;
    }
    ctx->pc = 0x3ADA3Cu;
    {
        const bool branch_taken_0x3ada3c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADA3Cu;
            // 0x3ada40: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada3c) {
            ctx->pc = 0x3ADA60u;
            goto label_3ada60;
        }
    }
    ctx->pc = 0x3ADA44u;
label_3ada44:
    // 0x3ada44: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x3ada44u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ada48:
    // 0x3ada48: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3ada48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_3ada4c:
    // 0x3ada4c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ada4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3ada50:
    // 0x3ada50: 0x0  nop
    ctx->pc = 0x3ada50u;
    // NOP
label_3ada54:
    // 0x3ada54: 0x0  nop
    ctx->pc = 0x3ada54u;
    // NOP
label_3ada58:
    // 0x3ada58: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
label_3ada5c:
    if (ctx->pc == 0x3ADA5Cu) {
        ctx->pc = 0x3ADA60u;
        goto label_3ada60;
    }
    ctx->pc = 0x3ADA58u;
    {
        const bool branch_taken_0x3ada58 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ada58) {
            ctx->pc = 0x3ADA44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ada44;
        }
    }
    ctx->pc = 0x3ADA60u;
label_3ada60:
    // 0x3ada60: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x3ada60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_3ada64:
    // 0x3ada64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ada64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ada68:
    // 0x3ada68: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x3ada68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
label_3ada6c:
    // 0x3ada6c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ada6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ada70:
    // 0x3ada70: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x3ada70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_3ada74:
    // 0x3ada74: 0xafa7005c  sw          $a3, 0x5C($sp)
    ctx->pc = 0x3ada74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 7));
label_3ada78:
    // 0x3ada78: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x3ada78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_3ada7c:
    // 0x3ada7c: 0x8c730960  lw          $s3, 0x960($v1)
    ctx->pc = 0x3ada7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_3ada80:
    // 0x3ada80: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x3ada80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3ada84:
    // 0x3ada84: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_3ada88:
    if (ctx->pc == 0x3ADA88u) {
        ctx->pc = 0x3ADA88u;
            // 0x3ada88: 0x32630010  andi        $v1, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x3ADA8Cu;
        goto label_3ada8c;
    }
    ctx->pc = 0x3ADA84u;
    {
        const bool branch_taken_0x3ada84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ada84) {
            ctx->pc = 0x3ADA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADA84u;
            // 0x3ada88: 0x32630010  andi        $v1, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ADAACu;
            goto label_3adaac;
        }
    }
    ctx->pc = 0x3ADA8Cu;
label_3ada8c:
    // 0x3ada8c: 0x8e590374  lw          $t9, 0x374($s2)
    ctx->pc = 0x3ada8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 884)));
label_3ada90:
    // 0x3ada90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ada90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ada94:
    // 0x3ada94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3ada94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ada98:
    // 0x3ada98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ada98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ada9c:
    // 0x3ada9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3ada9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3adaa0:
    // 0x3adaa0: 0x320f809  jalr        $t9
label_3adaa4:
    if (ctx->pc == 0x3ADAA4u) {
        ctx->pc = 0x3ADAA4u;
            // 0x3adaa4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ADAA8u;
        goto label_3adaa8;
    }
    ctx->pc = 0x3ADAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ADAA8u);
        ctx->pc = 0x3ADAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADAA0u;
            // 0x3adaa4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ADAA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ADAA8u; }
            if (ctx->pc != 0x3ADAA8u) { return; }
        }
        }
    }
    ctx->pc = 0x3ADAA8u;
label_3adaa8:
    // 0x3adaa8: 0x32630010  andi        $v1, $s3, 0x10
    ctx->pc = 0x3adaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_3adaac:
    // 0x3adaac: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_3adab0:
    if (ctx->pc == 0x3ADAB0u) {
        ctx->pc = 0x3ADAB0u;
            // 0x3adab0: 0x32630c00  andi        $v1, $s3, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3072);
        ctx->pc = 0x3ADAB4u;
        goto label_3adab4;
    }
    ctx->pc = 0x3ADAACu;
    {
        const bool branch_taken_0x3adaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adaac) {
            ctx->pc = 0x3ADAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADAACu;
            // 0x3adab0: 0x32630c00  andi        $v1, $s3, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3072);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ADAD4u;
            goto label_3adad4;
        }
    }
    ctx->pc = 0x3ADAB4u;
label_3adab4:
    // 0x3adab4: 0x8e590374  lw          $t9, 0x374($s2)
    ctx->pc = 0x3adab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 884)));
label_3adab8:
    // 0x3adab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3adab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3adabc:
    // 0x3adabc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3adabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3adac0:
    // 0x3adac0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3adac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adac4:
    // 0x3adac4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3adac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3adac8:
    // 0x3adac8: 0x320f809  jalr        $t9
label_3adacc:
    if (ctx->pc == 0x3ADACCu) {
        ctx->pc = 0x3ADACCu;
            // 0x3adacc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ADAD0u;
        goto label_3adad0;
    }
    ctx->pc = 0x3ADAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ADAD0u);
        ctx->pc = 0x3ADACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADAC8u;
            // 0x3adacc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ADAD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ADAD0u; }
            if (ctx->pc != 0x3ADAD0u) { return; }
        }
        }
    }
    ctx->pc = 0x3ADAD0u;
label_3adad0:
    // 0x3adad0: 0x32630c00  andi        $v1, $s3, 0xC00
    ctx->pc = 0x3adad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3072);
label_3adad4:
    // 0x3adad4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3adad8:
    if (ctx->pc == 0x3ADAD8u) {
        ctx->pc = 0x3ADADCu;
        goto label_3adadc;
    }
    ctx->pc = 0x3ADAD4u;
    {
        const bool branch_taken_0x3adad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adad4) {
            ctx->pc = 0x3ADAF8u;
            goto label_3adaf8;
        }
    }
    ctx->pc = 0x3ADADCu;
label_3adadc:
    // 0x3adadc: 0x8e590374  lw          $t9, 0x374($s2)
    ctx->pc = 0x3adadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 884)));
label_3adae0:
    // 0x3adae0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3adae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adae4:
    // 0x3adae4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3adae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3adae8:
    // 0x3adae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3adae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3adaec:
    // 0x3adaec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3adaecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3adaf0:
    // 0x3adaf0: 0x320f809  jalr        $t9
label_3adaf4:
    if (ctx->pc == 0x3ADAF4u) {
        ctx->pc = 0x3ADAF4u;
            // 0x3adaf4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3ADAF8u;
        goto label_3adaf8;
    }
    ctx->pc = 0x3ADAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ADAF8u);
        ctx->pc = 0x3ADAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADAF0u;
            // 0x3adaf4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ADAF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ADAF8u; }
            if (ctx->pc != 0x3ADAF8u) { return; }
        }
        }
    }
    ctx->pc = 0x3ADAF8u;
label_3adaf8:
    // 0x3adaf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3adaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3adafc:
    // 0x3adafc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3adafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3adb00:
    // 0x3adb00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3adb00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3adb04:
    // 0x3adb04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3adb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3adb08:
    // 0x3adb08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3adb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3adb0c:
    // 0x3adb0c: 0x3e00008  jr          $ra
label_3adb10:
    if (ctx->pc == 0x3ADB10u) {
        ctx->pc = 0x3ADB10u;
            // 0x3adb10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3ADB14u;
        goto label_3adb14;
    }
    ctx->pc = 0x3ADB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADB0Cu;
            // 0x3adb10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ADB14u;
label_3adb14:
    // 0x3adb14: 0x0  nop
    ctx->pc = 0x3adb14u;
    // NOP
label_3adb18:
    // 0x3adb18: 0x0  nop
    ctx->pc = 0x3adb18u;
    // NOP
label_3adb1c:
    // 0x3adb1c: 0x0  nop
    ctx->pc = 0x3adb1cu;
    // NOP
label_3adb20:
    // 0x3adb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3adb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3adb24:
    // 0x3adb24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3adb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3adb28:
    // 0x3adb28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3adb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3adb2c:
    // 0x3adb2c: 0x90830370  lbu         $v1, 0x370($a0)
    ctx->pc = 0x3adb2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
label_3adb30:
    // 0x3adb30: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_3adb34:
    if (ctx->pc == 0x3ADB34u) {
        ctx->pc = 0x3ADB34u;
            // 0x3adb34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB38u;
        goto label_3adb38;
    }
    ctx->pc = 0x3ADB30u;
    {
        const bool branch_taken_0x3adb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADB30u;
            // 0x3adb34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb30) {
            ctx->pc = 0x3ADBD4u;
            goto label_3adbd4;
        }
    }
    ctx->pc = 0x3ADB38u;
label_3adb38:
    // 0x3adb38: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3adb38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3adb3c:
    // 0x3adb3c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3adb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_3adb40:
    // 0x3adb40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3adb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3adb44:
    // 0x3adb44: 0x24a50e80  addiu       $a1, $a1, 0xE80
    ctx->pc = 0x3adb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
label_3adb48:
    // 0x3adb48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3adb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3adb4c:
    // 0x3adb4c: 0x2463cd10  addiu       $v1, $v1, -0x32F0
    ctx->pc = 0x3adb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954256));
label_3adb50:
    // 0x3adb50: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3adb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3adb54:
    // 0x3adb54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3adb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3adb58:
    // 0x3adb58: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x3adb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_3adb5c:
    // 0x3adb5c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3adb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3adb60:
    // 0x3adb60: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x3adb60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_3adb64:
    // 0x3adb64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3adb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3adb68:
    // 0x3adb68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3adb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3adb6c:
    // 0x3adb6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3adb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3adb70:
    // 0x3adb70: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3adb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3adb74:
    // 0x3adb74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3adb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3adb78:
    // 0x3adb78: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3adb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3adb7c:
    // 0x3adb7c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3adb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3adb80:
    // 0x3adb80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_3adb84:
    if (ctx->pc == 0x3ADB84u) {
        ctx->pc = 0x3ADB84u;
            // 0x3adb84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3ADB88u;
        goto label_3adb88;
    }
    ctx->pc = 0x3ADB80u;
    {
        const bool branch_taken_0x3adb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADB80u;
            // 0x3adb84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb80) {
            ctx->pc = 0x3ADB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3adb50;
        }
    }
    ctx->pc = 0x3ADB88u;
label_3adb88:
    // 0x3adb88: 0x8e190374  lw          $t9, 0x374($s0)
    ctx->pc = 0x3adb88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
label_3adb8c:
    // 0x3adb8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adb90:
    // 0x3adb90: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3adb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3adb94:
    // 0x3adb94: 0x320f809  jalr        $t9
label_3adb98:
    if (ctx->pc == 0x3ADB98u) {
        ctx->pc = 0x3ADB98u;
            // 0x3adb98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3ADB9Cu;
        goto label_3adb9c;
    }
    ctx->pc = 0x3ADB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ADB9Cu);
        ctx->pc = 0x3ADB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADB94u;
            // 0x3adb98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ADB9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ADB9Cu; }
            if (ctx->pc != 0x3ADB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3ADB9Cu;
label_3adb9c:
    // 0x3adb9c: 0x8e190374  lw          $t9, 0x374($s0)
    ctx->pc = 0x3adb9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
label_3adba0:
    // 0x3adba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adba4:
    // 0x3adba4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3adba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3adba8:
    // 0x3adba8: 0x320f809  jalr        $t9
label_3adbac:
    if (ctx->pc == 0x3ADBACu) {
        ctx->pc = 0x3ADBACu;
            // 0x3adbac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3ADBB0u;
        goto label_3adbb0;
    }
    ctx->pc = 0x3ADBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ADBB0u);
        ctx->pc = 0x3ADBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADBA8u;
            // 0x3adbac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ADBB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ADBB0u; }
            if (ctx->pc != 0x3ADBB0u) { return; }
        }
        }
    }
    ctx->pc = 0x3ADBB0u;
label_3adbb0:
    // 0x3adbb0: 0x8e190374  lw          $t9, 0x374($s0)
    ctx->pc = 0x3adbb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
label_3adbb4:
    // 0x3adbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adbb8:
    // 0x3adbb8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3adbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3adbbc:
    // 0x3adbbc: 0x320f809  jalr        $t9
label_3adbc0:
    if (ctx->pc == 0x3ADBC0u) {
        ctx->pc = 0x3ADBC0u;
            // 0x3adbc0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3ADBC4u;
        goto label_3adbc4;
    }
    ctx->pc = 0x3ADBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ADBC4u);
        ctx->pc = 0x3ADBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADBBCu;
            // 0x3adbc0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ADBC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ADBC4u; }
            if (ctx->pc != 0x3ADBC4u) { return; }
        }
        }
    }
    ctx->pc = 0x3ADBC4u;
label_3adbc4:
    // 0x3adbc4: 0x8e190374  lw          $t9, 0x374($s0)
    ctx->pc = 0x3adbc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
label_3adbc8:
    // 0x3adbc8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3adbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3adbcc:
    // 0x3adbcc: 0x320f809  jalr        $t9
label_3adbd0:
    if (ctx->pc == 0x3ADBD0u) {
        ctx->pc = 0x3ADBD0u;
            // 0x3adbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ADBD4u;
        goto label_3adbd4;
    }
    ctx->pc = 0x3ADBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ADBD4u);
        ctx->pc = 0x3ADBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADBCCu;
            // 0x3adbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ADBD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ADBD4u; }
            if (ctx->pc != 0x3ADBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x3ADBD4u;
label_3adbd4:
    // 0x3adbd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3adbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3adbd8:
    // 0x3adbd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3adbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3adbdc:
    // 0x3adbdc: 0x3e00008  jr          $ra
label_3adbe0:
    if (ctx->pc == 0x3ADBE0u) {
        ctx->pc = 0x3ADBE0u;
            // 0x3adbe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3ADBE4u;
        goto label_3adbe4;
    }
    ctx->pc = 0x3ADBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ADBDCu;
            // 0x3adbe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ADBE4u;
label_3adbe4:
    // 0x3adbe4: 0x0  nop
    ctx->pc = 0x3adbe4u;
    // NOP
label_3adbe8:
    // 0x3adbe8: 0x0  nop
    ctx->pc = 0x3adbe8u;
    // NOP
label_3adbec:
    // 0x3adbec: 0x0  nop
    ctx->pc = 0x3adbecu;
    // NOP
}
