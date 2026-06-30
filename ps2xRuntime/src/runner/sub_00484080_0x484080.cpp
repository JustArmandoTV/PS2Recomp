#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00484080
// Address: 0x484080 - 0x4842b0
void sub_00484080_0x484080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484080_0x484080");
#endif

    switch (ctx->pc) {
        case 0x484080u: goto label_484080;
        case 0x484084u: goto label_484084;
        case 0x484088u: goto label_484088;
        case 0x48408cu: goto label_48408c;
        case 0x484090u: goto label_484090;
        case 0x484094u: goto label_484094;
        case 0x484098u: goto label_484098;
        case 0x48409cu: goto label_48409c;
        case 0x4840a0u: goto label_4840a0;
        case 0x4840a4u: goto label_4840a4;
        case 0x4840a8u: goto label_4840a8;
        case 0x4840acu: goto label_4840ac;
        case 0x4840b0u: goto label_4840b0;
        case 0x4840b4u: goto label_4840b4;
        case 0x4840b8u: goto label_4840b8;
        case 0x4840bcu: goto label_4840bc;
        case 0x4840c0u: goto label_4840c0;
        case 0x4840c4u: goto label_4840c4;
        case 0x4840c8u: goto label_4840c8;
        case 0x4840ccu: goto label_4840cc;
        case 0x4840d0u: goto label_4840d0;
        case 0x4840d4u: goto label_4840d4;
        case 0x4840d8u: goto label_4840d8;
        case 0x4840dcu: goto label_4840dc;
        case 0x4840e0u: goto label_4840e0;
        case 0x4840e4u: goto label_4840e4;
        case 0x4840e8u: goto label_4840e8;
        case 0x4840ecu: goto label_4840ec;
        case 0x4840f0u: goto label_4840f0;
        case 0x4840f4u: goto label_4840f4;
        case 0x4840f8u: goto label_4840f8;
        case 0x4840fcu: goto label_4840fc;
        case 0x484100u: goto label_484100;
        case 0x484104u: goto label_484104;
        case 0x484108u: goto label_484108;
        case 0x48410cu: goto label_48410c;
        case 0x484110u: goto label_484110;
        case 0x484114u: goto label_484114;
        case 0x484118u: goto label_484118;
        case 0x48411cu: goto label_48411c;
        case 0x484120u: goto label_484120;
        case 0x484124u: goto label_484124;
        case 0x484128u: goto label_484128;
        case 0x48412cu: goto label_48412c;
        case 0x484130u: goto label_484130;
        case 0x484134u: goto label_484134;
        case 0x484138u: goto label_484138;
        case 0x48413cu: goto label_48413c;
        case 0x484140u: goto label_484140;
        case 0x484144u: goto label_484144;
        case 0x484148u: goto label_484148;
        case 0x48414cu: goto label_48414c;
        case 0x484150u: goto label_484150;
        case 0x484154u: goto label_484154;
        case 0x484158u: goto label_484158;
        case 0x48415cu: goto label_48415c;
        case 0x484160u: goto label_484160;
        case 0x484164u: goto label_484164;
        case 0x484168u: goto label_484168;
        case 0x48416cu: goto label_48416c;
        case 0x484170u: goto label_484170;
        case 0x484174u: goto label_484174;
        case 0x484178u: goto label_484178;
        case 0x48417cu: goto label_48417c;
        case 0x484180u: goto label_484180;
        case 0x484184u: goto label_484184;
        case 0x484188u: goto label_484188;
        case 0x48418cu: goto label_48418c;
        case 0x484190u: goto label_484190;
        case 0x484194u: goto label_484194;
        case 0x484198u: goto label_484198;
        case 0x48419cu: goto label_48419c;
        case 0x4841a0u: goto label_4841a0;
        case 0x4841a4u: goto label_4841a4;
        case 0x4841a8u: goto label_4841a8;
        case 0x4841acu: goto label_4841ac;
        case 0x4841b0u: goto label_4841b0;
        case 0x4841b4u: goto label_4841b4;
        case 0x4841b8u: goto label_4841b8;
        case 0x4841bcu: goto label_4841bc;
        case 0x4841c0u: goto label_4841c0;
        case 0x4841c4u: goto label_4841c4;
        case 0x4841c8u: goto label_4841c8;
        case 0x4841ccu: goto label_4841cc;
        case 0x4841d0u: goto label_4841d0;
        case 0x4841d4u: goto label_4841d4;
        case 0x4841d8u: goto label_4841d8;
        case 0x4841dcu: goto label_4841dc;
        case 0x4841e0u: goto label_4841e0;
        case 0x4841e4u: goto label_4841e4;
        case 0x4841e8u: goto label_4841e8;
        case 0x4841ecu: goto label_4841ec;
        case 0x4841f0u: goto label_4841f0;
        case 0x4841f4u: goto label_4841f4;
        case 0x4841f8u: goto label_4841f8;
        case 0x4841fcu: goto label_4841fc;
        case 0x484200u: goto label_484200;
        case 0x484204u: goto label_484204;
        case 0x484208u: goto label_484208;
        case 0x48420cu: goto label_48420c;
        case 0x484210u: goto label_484210;
        case 0x484214u: goto label_484214;
        case 0x484218u: goto label_484218;
        case 0x48421cu: goto label_48421c;
        case 0x484220u: goto label_484220;
        case 0x484224u: goto label_484224;
        case 0x484228u: goto label_484228;
        case 0x48422cu: goto label_48422c;
        case 0x484230u: goto label_484230;
        case 0x484234u: goto label_484234;
        case 0x484238u: goto label_484238;
        case 0x48423cu: goto label_48423c;
        case 0x484240u: goto label_484240;
        case 0x484244u: goto label_484244;
        case 0x484248u: goto label_484248;
        case 0x48424cu: goto label_48424c;
        case 0x484250u: goto label_484250;
        case 0x484254u: goto label_484254;
        case 0x484258u: goto label_484258;
        case 0x48425cu: goto label_48425c;
        case 0x484260u: goto label_484260;
        case 0x484264u: goto label_484264;
        case 0x484268u: goto label_484268;
        case 0x48426cu: goto label_48426c;
        case 0x484270u: goto label_484270;
        case 0x484274u: goto label_484274;
        case 0x484278u: goto label_484278;
        case 0x48427cu: goto label_48427c;
        case 0x484280u: goto label_484280;
        case 0x484284u: goto label_484284;
        case 0x484288u: goto label_484288;
        case 0x48428cu: goto label_48428c;
        case 0x484290u: goto label_484290;
        case 0x484294u: goto label_484294;
        case 0x484298u: goto label_484298;
        case 0x48429cu: goto label_48429c;
        case 0x4842a0u: goto label_4842a0;
        case 0x4842a4u: goto label_4842a4;
        case 0x4842a8u: goto label_4842a8;
        case 0x4842acu: goto label_4842ac;
        default: break;
    }

    ctx->pc = 0x484080u;

label_484080:
    // 0x484080: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x484080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_484084:
    // 0x484084: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x484084u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_484088:
    // 0x484088: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x484088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_48408c:
    // 0x48408c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48408cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_484090:
    // 0x484090: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x484090u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_484094:
    // 0x484094: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x484094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_484098:
    // 0x484098: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x484098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48409c:
    // 0x48409c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x48409cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4840a0:
    // 0x4840a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4840a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4840a4:
    // 0x4840a4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4840a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4840a8:
    // 0x4840a8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4840a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4840ac:
    // 0x4840ac: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4840acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4840b0:
    // 0x4840b0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4840b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4840b4:
    // 0x4840b4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4840b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4840b8:
    // 0x4840b8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4840b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4840bc:
    // 0x4840bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4840bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4840c0:
    // 0x4840c0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4840c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4840c4:
    // 0x4840c4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4840c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4840c8:
    // 0x4840c8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4840c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4840cc:
    // 0x4840cc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4840ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4840d0:
    // 0x4840d0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4840d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4840d4:
    // 0x4840d4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4840d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4840d8:
    // 0x4840d8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4840d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4840dc:
    // 0x4840dc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4840dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4840e0:
    // 0x4840e0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4840e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4840e4:
    // 0x4840e4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4840e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4840e8:
    // 0x4840e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4840e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4840ec:
    // 0x4840ec: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4840ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4840f0:
    // 0x4840f0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4840f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4840f4:
    // 0x4840f4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4840f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4840f8:
    // 0x4840f8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4840f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4840fc:
    // 0x4840fc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4840fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_484100:
    // 0x484100: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x484100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_484104:
    // 0x484104: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x484104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_484108:
    // 0x484108: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x484108u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_48410c:
    // 0x48410c: 0x3e00008  jr          $ra
label_484110:
    if (ctx->pc == 0x484110u) {
        ctx->pc = 0x484110u;
            // 0x484110: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x484114u;
        goto label_484114;
    }
    ctx->pc = 0x48410Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48410Cu;
            // 0x484110: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484114u;
label_484114:
    // 0x484114: 0x0  nop
    ctx->pc = 0x484114u;
    // NOP
label_484118:
    // 0x484118: 0x0  nop
    ctx->pc = 0x484118u;
    // NOP
label_48411c:
    // 0x48411c: 0x0  nop
    ctx->pc = 0x48411cu;
    // NOP
label_484120:
    // 0x484120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x484120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_484124:
    // 0x484124: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x484124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484128:
    // 0x484128: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x484128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_48412c:
    // 0x48412c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_484130:
    // 0x484130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x484130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_484134:
    // 0x484134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_484138:
    // 0x484138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48413c:
    // 0x48413c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x48413cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_484140:
    // 0x484140: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
label_484144:
    if (ctx->pc == 0x484144u) {
        ctx->pc = 0x484144u;
            // 0x484144: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484148u;
        goto label_484148;
    }
    ctx->pc = 0x484140u;
    {
        const bool branch_taken_0x484140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x484144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484140u;
            // 0x484144: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484140) {
            ctx->pc = 0x4841D4u;
            goto label_4841d4;
        }
    }
    ctx->pc = 0x484148u;
label_484148:
    // 0x484148: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x484148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48414c:
    // 0x48414c: 0x50a3001e  beql        $a1, $v1, . + 4 + (0x1E << 2)
label_484150:
    if (ctx->pc == 0x484150u) {
        ctx->pc = 0x484150u;
            // 0x484150: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x484154u;
        goto label_484154;
    }
    ctx->pc = 0x48414Cu;
    {
        const bool branch_taken_0x48414c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48414c) {
            ctx->pc = 0x484150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48414Cu;
            // 0x484150: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4841C8u;
            goto label_4841c8;
        }
    }
    ctx->pc = 0x484154u;
label_484154:
    // 0x484154: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x484154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_484158:
    // 0x484158: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_48415c:
    if (ctx->pc == 0x48415Cu) {
        ctx->pc = 0x484160u;
        goto label_484160;
    }
    ctx->pc = 0x484158u;
    {
        const bool branch_taken_0x484158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x484158) {
            ctx->pc = 0x484168u;
            goto label_484168;
        }
    }
    ctx->pc = 0x484160u;
label_484160:
    // 0x484160: 0x10000029  b           . + 4 + (0x29 << 2)
label_484164:
    if (ctx->pc == 0x484164u) {
        ctx->pc = 0x484168u;
        goto label_484168;
    }
    ctx->pc = 0x484160u;
    {
        const bool branch_taken_0x484160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484160) {
            ctx->pc = 0x484208u;
            goto label_484208;
        }
    }
    ctx->pc = 0x484168u;
label_484168:
    // 0x484168: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x484168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_48416c:
    // 0x48416c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484170:
    // 0x484170: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x484170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_484174:
    // 0x484174: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x484174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_484178:
    // 0x484178: 0x10640023  beq         $v1, $a0, . + 4 + (0x23 << 2)
label_48417c:
    if (ctx->pc == 0x48417Cu) {
        ctx->pc = 0x484180u;
        goto label_484180;
    }
    ctx->pc = 0x484178u;
    {
        const bool branch_taken_0x484178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x484178) {
            ctx->pc = 0x484208u;
            goto label_484208;
        }
    }
    ctx->pc = 0x484180u;
label_484180:
    // 0x484180: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x484180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_484184:
    // 0x484184: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x484184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_484188:
    // 0x484188: 0x8c660928  lw          $a2, 0x928($v1)
    ctx->pc = 0x484188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2344)));
label_48418c:
    // 0x48418c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x48418cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_484190:
    // 0x484190: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x484190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_484194:
    // 0x484194: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x484194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_484198:
    // 0x484198: 0x8ce50120  lw          $a1, 0x120($a3)
    ctx->pc = 0x484198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
label_48419c:
    // 0x48419c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x48419cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_4841a0:
    // 0x4841a0: 0xace50120  sw          $a1, 0x120($a3)
    ctx->pc = 0x4841a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 288), GPR_U32(ctx, 5));
label_4841a4:
    // 0x4841a4: 0x8c850930  lw          $a1, 0x930($a0)
    ctx->pc = 0x4841a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2352)));
label_4841a8:
    // 0x4841a8: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x4841a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
label_4841ac:
    // 0x4841ac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4841acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4841b0:
    // 0x4841b0: 0xace401b0  sw          $a0, 0x1B0($a3)
    ctx->pc = 0x4841b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 432), GPR_U32(ctx, 4));
label_4841b4:
    // 0x4841b4: 0x8c640938  lw          $a0, 0x938($v1)
    ctx->pc = 0x4841b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2360)));
label_4841b8:
    // 0x4841b8: 0x8ce30240  lw          $v1, 0x240($a3)
    ctx->pc = 0x4841b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 576)));
label_4841bc:
    // 0x4841bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4841bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4841c0:
    // 0x4841c0: 0x10000011  b           . + 4 + (0x11 << 2)
label_4841c4:
    if (ctx->pc == 0x4841C4u) {
        ctx->pc = 0x4841C4u;
            // 0x4841c4: 0xace30240  sw          $v1, 0x240($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 576), GPR_U32(ctx, 3));
        ctx->pc = 0x4841C8u;
        goto label_4841c8;
    }
    ctx->pc = 0x4841C0u;
    {
        const bool branch_taken_0x4841c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4841C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4841C0u;
            // 0x4841c4: 0xace30240  sw          $v1, 0x240($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4841c0) {
            ctx->pc = 0x484208u;
            goto label_484208;
        }
    }
    ctx->pc = 0x4841C8u;
label_4841c8:
    // 0x4841c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4841c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4841cc:
    // 0x4841cc: 0x320f809  jalr        $t9
label_4841d0:
    if (ctx->pc == 0x4841D0u) {
        ctx->pc = 0x4841D4u;
        goto label_4841d4;
    }
    ctx->pc = 0x4841CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4841D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4841D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4841D4u; }
            if (ctx->pc != 0x4841D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4841D4u;
label_4841d4:
    // 0x4841d4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4841d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4841d8:
    // 0x4841d8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4841dc:
    if (ctx->pc == 0x4841DCu) {
        ctx->pc = 0x4841E0u;
        goto label_4841e0;
    }
    ctx->pc = 0x4841D8u;
    {
        const bool branch_taken_0x4841d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4841d8) {
            ctx->pc = 0x484208u;
            goto label_484208;
        }
    }
    ctx->pc = 0x4841E0u;
label_4841e0:
    // 0x4841e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4841e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4841e4:
    // 0x4841e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4841e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4841e8:
    // 0x4841e8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4841e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4841ec:
    // 0x4841ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4841ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4841f0:
    // 0x4841f0: 0xc0e3658  jal         func_38D960
label_4841f4:
    if (ctx->pc == 0x4841F4u) {
        ctx->pc = 0x4841F4u;
            // 0x4841f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4841F8u;
        goto label_4841f8;
    }
    ctx->pc = 0x4841F0u;
    SET_GPR_U32(ctx, 31, 0x4841F8u);
    ctx->pc = 0x4841F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4841F0u;
            // 0x4841f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4841F8u; }
        if (ctx->pc != 0x4841F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4841F8u; }
        if (ctx->pc != 0x4841F8u) { return; }
    }
    ctx->pc = 0x4841F8u;
label_4841f8:
    // 0x4841f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4841f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4841fc:
    // 0x4841fc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4841fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_484200:
    // 0x484200: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_484204:
    if (ctx->pc == 0x484204u) {
        ctx->pc = 0x484204u;
            // 0x484204: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x484208u;
        goto label_484208;
    }
    ctx->pc = 0x484200u;
    {
        const bool branch_taken_0x484200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x484204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484200u;
            // 0x484204: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484200) {
            ctx->pc = 0x4841E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4841e8;
        }
    }
    ctx->pc = 0x484208u;
label_484208:
    // 0x484208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x484208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48420c:
    // 0x48420c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48420cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_484210:
    // 0x484210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x484210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484214:
    // 0x484214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484218:
    // 0x484218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48421c:
    // 0x48421c: 0x3e00008  jr          $ra
label_484220:
    if (ctx->pc == 0x484220u) {
        ctx->pc = 0x484220u;
            // 0x484220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x484224u;
        goto label_484224;
    }
    ctx->pc = 0x48421Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48421Cu;
            // 0x484220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484224u;
label_484224:
    // 0x484224: 0x0  nop
    ctx->pc = 0x484224u;
    // NOP
label_484228:
    // 0x484228: 0x0  nop
    ctx->pc = 0x484228u;
    // NOP
label_48422c:
    // 0x48422c: 0x0  nop
    ctx->pc = 0x48422cu;
    // NOP
label_484230:
    // 0x484230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x484230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_484234:
    // 0x484234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x484234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_484238:
    // 0x484238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x484238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48423c:
    // 0x48423c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_484240:
    // 0x484240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_484244:
    // 0x484244: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484248:
    // 0x484248: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x484248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_48424c:
    // 0x48424c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_484250:
    if (ctx->pc == 0x484250u) {
        ctx->pc = 0x484250u;
            // 0x484250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484254u;
        goto label_484254;
    }
    ctx->pc = 0x48424Cu;
    {
        const bool branch_taken_0x48424c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x484250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48424Cu;
            // 0x484250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48424c) {
            ctx->pc = 0x484288u;
            goto label_484288;
        }
    }
    ctx->pc = 0x484254u;
label_484254:
    // 0x484254: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x484254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484258:
    // 0x484258: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x484258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48425c:
    // 0x48425c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x48425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_484260:
    // 0x484260: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x484260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_484264:
    // 0x484264: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x484264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_484268:
    // 0x484268: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x484268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48426c:
    // 0x48426c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x48426cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_484270:
    // 0x484270: 0x320f809  jalr        $t9
label_484274:
    if (ctx->pc == 0x484274u) {
        ctx->pc = 0x484278u;
        goto label_484278;
    }
    ctx->pc = 0x484270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x484278u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x484278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x484278u; }
            if (ctx->pc != 0x484278u) { return; }
        }
        }
    }
    ctx->pc = 0x484278u;
label_484278:
    // 0x484278: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x484278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_48427c:
    // 0x48427c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x48427cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_484280:
    // 0x484280: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_484284:
    if (ctx->pc == 0x484284u) {
        ctx->pc = 0x484284u;
            // 0x484284: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x484288u;
        goto label_484288;
    }
    ctx->pc = 0x484280u;
    {
        const bool branch_taken_0x484280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x484284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484280u;
            // 0x484284: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484280) {
            ctx->pc = 0x48425Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48425c;
        }
    }
    ctx->pc = 0x484288u;
label_484288:
    // 0x484288: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x484288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48428c:
    // 0x48428c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48428cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_484290:
    // 0x484290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x484290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484294:
    // 0x484294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484298:
    // 0x484298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48429c:
    // 0x48429c: 0x3e00008  jr          $ra
label_4842a0:
    if (ctx->pc == 0x4842A0u) {
        ctx->pc = 0x4842A0u;
            // 0x4842a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4842A4u;
        goto label_4842a4;
    }
    ctx->pc = 0x48429Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4842A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48429Cu;
            // 0x4842a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4842A4u;
label_4842a4:
    // 0x4842a4: 0x0  nop
    ctx->pc = 0x4842a4u;
    // NOP
label_4842a8:
    // 0x4842a8: 0x0  nop
    ctx->pc = 0x4842a8u;
    // NOP
label_4842ac:
    // 0x4842ac: 0x0  nop
    ctx->pc = 0x4842acu;
    // NOP
}
