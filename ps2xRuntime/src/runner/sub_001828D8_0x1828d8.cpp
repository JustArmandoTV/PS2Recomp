#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001828D8
// Address: 0x1828d8 - 0x182bd0
void sub_001828D8_0x1828d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001828D8_0x1828d8");
#endif

    switch (ctx->pc) {
        case 0x1828d8u: goto label_1828d8;
        case 0x1828dcu: goto label_1828dc;
        case 0x1828e0u: goto label_1828e0;
        case 0x1828e4u: goto label_1828e4;
        case 0x1828e8u: goto label_1828e8;
        case 0x1828ecu: goto label_1828ec;
        case 0x1828f0u: goto label_1828f0;
        case 0x1828f4u: goto label_1828f4;
        case 0x1828f8u: goto label_1828f8;
        case 0x1828fcu: goto label_1828fc;
        case 0x182900u: goto label_182900;
        case 0x182904u: goto label_182904;
        case 0x182908u: goto label_182908;
        case 0x18290cu: goto label_18290c;
        case 0x182910u: goto label_182910;
        case 0x182914u: goto label_182914;
        case 0x182918u: goto label_182918;
        case 0x18291cu: goto label_18291c;
        case 0x182920u: goto label_182920;
        case 0x182924u: goto label_182924;
        case 0x182928u: goto label_182928;
        case 0x18292cu: goto label_18292c;
        case 0x182930u: goto label_182930;
        case 0x182934u: goto label_182934;
        case 0x182938u: goto label_182938;
        case 0x18293cu: goto label_18293c;
        case 0x182940u: goto label_182940;
        case 0x182944u: goto label_182944;
        case 0x182948u: goto label_182948;
        case 0x18294cu: goto label_18294c;
        case 0x182950u: goto label_182950;
        case 0x182954u: goto label_182954;
        case 0x182958u: goto label_182958;
        case 0x18295cu: goto label_18295c;
        case 0x182960u: goto label_182960;
        case 0x182964u: goto label_182964;
        case 0x182968u: goto label_182968;
        case 0x18296cu: goto label_18296c;
        case 0x182970u: goto label_182970;
        case 0x182974u: goto label_182974;
        case 0x182978u: goto label_182978;
        case 0x18297cu: goto label_18297c;
        case 0x182980u: goto label_182980;
        case 0x182984u: goto label_182984;
        case 0x182988u: goto label_182988;
        case 0x18298cu: goto label_18298c;
        case 0x182990u: goto label_182990;
        case 0x182994u: goto label_182994;
        case 0x182998u: goto label_182998;
        case 0x18299cu: goto label_18299c;
        case 0x1829a0u: goto label_1829a0;
        case 0x1829a4u: goto label_1829a4;
        case 0x1829a8u: goto label_1829a8;
        case 0x1829acu: goto label_1829ac;
        case 0x1829b0u: goto label_1829b0;
        case 0x1829b4u: goto label_1829b4;
        case 0x1829b8u: goto label_1829b8;
        case 0x1829bcu: goto label_1829bc;
        case 0x1829c0u: goto label_1829c0;
        case 0x1829c4u: goto label_1829c4;
        case 0x1829c8u: goto label_1829c8;
        case 0x1829ccu: goto label_1829cc;
        case 0x1829d0u: goto label_1829d0;
        case 0x1829d4u: goto label_1829d4;
        case 0x1829d8u: goto label_1829d8;
        case 0x1829dcu: goto label_1829dc;
        case 0x1829e0u: goto label_1829e0;
        case 0x1829e4u: goto label_1829e4;
        case 0x1829e8u: goto label_1829e8;
        case 0x1829ecu: goto label_1829ec;
        case 0x1829f0u: goto label_1829f0;
        case 0x1829f4u: goto label_1829f4;
        case 0x1829f8u: goto label_1829f8;
        case 0x1829fcu: goto label_1829fc;
        case 0x182a00u: goto label_182a00;
        case 0x182a04u: goto label_182a04;
        case 0x182a08u: goto label_182a08;
        case 0x182a0cu: goto label_182a0c;
        case 0x182a10u: goto label_182a10;
        case 0x182a14u: goto label_182a14;
        case 0x182a18u: goto label_182a18;
        case 0x182a1cu: goto label_182a1c;
        case 0x182a20u: goto label_182a20;
        case 0x182a24u: goto label_182a24;
        case 0x182a28u: goto label_182a28;
        case 0x182a2cu: goto label_182a2c;
        case 0x182a30u: goto label_182a30;
        case 0x182a34u: goto label_182a34;
        case 0x182a38u: goto label_182a38;
        case 0x182a3cu: goto label_182a3c;
        case 0x182a40u: goto label_182a40;
        case 0x182a44u: goto label_182a44;
        case 0x182a48u: goto label_182a48;
        case 0x182a4cu: goto label_182a4c;
        case 0x182a50u: goto label_182a50;
        case 0x182a54u: goto label_182a54;
        case 0x182a58u: goto label_182a58;
        case 0x182a5cu: goto label_182a5c;
        case 0x182a60u: goto label_182a60;
        case 0x182a64u: goto label_182a64;
        case 0x182a68u: goto label_182a68;
        case 0x182a6cu: goto label_182a6c;
        case 0x182a70u: goto label_182a70;
        case 0x182a74u: goto label_182a74;
        case 0x182a78u: goto label_182a78;
        case 0x182a7cu: goto label_182a7c;
        case 0x182a80u: goto label_182a80;
        case 0x182a84u: goto label_182a84;
        case 0x182a88u: goto label_182a88;
        case 0x182a8cu: goto label_182a8c;
        case 0x182a90u: goto label_182a90;
        case 0x182a94u: goto label_182a94;
        case 0x182a98u: goto label_182a98;
        case 0x182a9cu: goto label_182a9c;
        case 0x182aa0u: goto label_182aa0;
        case 0x182aa4u: goto label_182aa4;
        case 0x182aa8u: goto label_182aa8;
        case 0x182aacu: goto label_182aac;
        case 0x182ab0u: goto label_182ab0;
        case 0x182ab4u: goto label_182ab4;
        case 0x182ab8u: goto label_182ab8;
        case 0x182abcu: goto label_182abc;
        case 0x182ac0u: goto label_182ac0;
        case 0x182ac4u: goto label_182ac4;
        case 0x182ac8u: goto label_182ac8;
        case 0x182accu: goto label_182acc;
        case 0x182ad0u: goto label_182ad0;
        case 0x182ad4u: goto label_182ad4;
        case 0x182ad8u: goto label_182ad8;
        case 0x182adcu: goto label_182adc;
        case 0x182ae0u: goto label_182ae0;
        case 0x182ae4u: goto label_182ae4;
        case 0x182ae8u: goto label_182ae8;
        case 0x182aecu: goto label_182aec;
        case 0x182af0u: goto label_182af0;
        case 0x182af4u: goto label_182af4;
        case 0x182af8u: goto label_182af8;
        case 0x182afcu: goto label_182afc;
        case 0x182b00u: goto label_182b00;
        case 0x182b04u: goto label_182b04;
        case 0x182b08u: goto label_182b08;
        case 0x182b0cu: goto label_182b0c;
        case 0x182b10u: goto label_182b10;
        case 0x182b14u: goto label_182b14;
        case 0x182b18u: goto label_182b18;
        case 0x182b1cu: goto label_182b1c;
        case 0x182b20u: goto label_182b20;
        case 0x182b24u: goto label_182b24;
        case 0x182b28u: goto label_182b28;
        case 0x182b2cu: goto label_182b2c;
        case 0x182b30u: goto label_182b30;
        case 0x182b34u: goto label_182b34;
        case 0x182b38u: goto label_182b38;
        case 0x182b3cu: goto label_182b3c;
        case 0x182b40u: goto label_182b40;
        case 0x182b44u: goto label_182b44;
        case 0x182b48u: goto label_182b48;
        case 0x182b4cu: goto label_182b4c;
        case 0x182b50u: goto label_182b50;
        case 0x182b54u: goto label_182b54;
        case 0x182b58u: goto label_182b58;
        case 0x182b5cu: goto label_182b5c;
        case 0x182b60u: goto label_182b60;
        case 0x182b64u: goto label_182b64;
        case 0x182b68u: goto label_182b68;
        case 0x182b6cu: goto label_182b6c;
        case 0x182b70u: goto label_182b70;
        case 0x182b74u: goto label_182b74;
        case 0x182b78u: goto label_182b78;
        case 0x182b7cu: goto label_182b7c;
        case 0x182b80u: goto label_182b80;
        case 0x182b84u: goto label_182b84;
        case 0x182b88u: goto label_182b88;
        case 0x182b8cu: goto label_182b8c;
        case 0x182b90u: goto label_182b90;
        case 0x182b94u: goto label_182b94;
        case 0x182b98u: goto label_182b98;
        case 0x182b9cu: goto label_182b9c;
        case 0x182ba0u: goto label_182ba0;
        case 0x182ba4u: goto label_182ba4;
        case 0x182ba8u: goto label_182ba8;
        case 0x182bacu: goto label_182bac;
        case 0x182bb0u: goto label_182bb0;
        case 0x182bb4u: goto label_182bb4;
        case 0x182bb8u: goto label_182bb8;
        case 0x182bbcu: goto label_182bbc;
        case 0x182bc0u: goto label_182bc0;
        case 0x182bc4u: goto label_182bc4;
        case 0x182bc8u: goto label_182bc8;
        case 0x182bccu: goto label_182bcc;
        default: break;
    }

    ctx->pc = 0x1828d8u;

label_1828d8:
    // 0x1828d8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1828d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1828dc:
    // 0x1828dc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1828dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1828e0:
    // 0x1828e0: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1828e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1828e4:
    // 0x1828e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1828e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1828e8:
    // 0x1828e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1828e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1828ec:
    // 0x1828ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1828ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1828f0:
    // 0x1828f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1828f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1828f4:
    // 0x1828f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1828f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1828f8:
    // 0x1828f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1828f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1828fc:
    // 0x1828fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1828fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_182900:
    // 0x182900: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x182900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_182904:
    // 0x182904: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x182904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_182908:
    // 0x182908: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_18290c:
    if (ctx->pc == 0x18290Cu) {
        ctx->pc = 0x18290Cu;
            // 0x18290c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->pc = 0x182910u;
        goto label_182910;
    }
    ctx->pc = 0x182908u;
    {
        const bool branch_taken_0x182908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182908u;
            // 0x18290c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182908) {
            ctx->pc = 0x182930u;
            goto label_182930;
        }
    }
    ctx->pc = 0x182910u;
label_182910:
    // 0x182910: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_182914:
    // 0x182914: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x182914u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
label_182918:
    // 0x182918: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x182918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18291c:
    // 0x18291c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x18291cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_182920:
    // 0x182920: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x182920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_182924:
    // 0x182924: 0xaea3ced0  sw          $v1, -0x3130($s5)
    ctx->pc = 0x182924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294954704), GPR_U32(ctx, 3));
label_182928:
    // 0x182928: 0x10000002  b           . + 4 + (0x2 << 2)
label_18292c:
    if (ctx->pc == 0x18292Cu) {
        ctx->pc = 0x18292Cu;
            // 0x18292c: 0xac82ced4  sw          $v0, -0x312C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954708), GPR_U32(ctx, 2));
        ctx->pc = 0x182930u;
        goto label_182930;
    }
    ctx->pc = 0x182928u;
    {
        const bool branch_taken_0x182928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18292Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182928u;
            // 0x18292c: 0xac82ced4  sw          $v0, -0x312C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182928) {
            ctx->pc = 0x182934u;
            goto label_182934;
        }
    }
    ctx->pc = 0x182930u;
label_182930:
    // 0x182930: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x182930u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
label_182934:
    // 0x182934: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x182934u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
label_182938:
    // 0x182938: 0x2670cedc  addiu       $s0, $s3, -0x3124
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954716));
label_18293c:
    // 0x18293c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_182940:
    // 0x182940: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_182944:
    if (ctx->pc == 0x182944u) {
        ctx->pc = 0x182944u;
            // 0x182944: 0x3c10005f  lui         $s0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
        ctx->pc = 0x182948u;
        goto label_182948;
    }
    ctx->pc = 0x182940u;
    {
        const bool branch_taken_0x182940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182940) {
            ctx->pc = 0x182944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182940u;
            // 0x182944: 0x3c10005f  lui         $s0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1829D8u;
            goto label_1829d8;
        }
    }
    ctx->pc = 0x182948u;
label_182948:
    // 0x182948: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x182948u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
label_18294c:
    // 0x18294c: 0x2651ced4  addiu       $s1, $s2, -0x312C
    ctx->pc = 0x18294cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954708));
label_182950:
    // 0x182950: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x182950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_182954:
    // 0x182954: 0xc045208  jal         func_114820
label_182958:
    if (ctx->pc == 0x182958u) {
        ctx->pc = 0x182958u;
            // 0x182958: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x18295Cu;
        goto label_18295c;
    }
    ctx->pc = 0x182954u;
    SET_GPR_U32(ctx, 31, 0x18295Cu);
    ctx->pc = 0x182958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182954u;
            // 0x182958: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114820u;
    if (runtime->hasFunction(0x114820u)) {
        auto targetFn = runtime->lookupFunction(0x114820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18295Cu; }
        if (ctx->pc != 0x18295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114820_0x114820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18295Cu; }
        if (ctx->pc != 0x18295Cu) { return; }
    }
    ctx->pc = 0x18295Cu;
label_18295c:
    // 0x18295c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_182960:
    if (ctx->pc == 0x182960u) {
        ctx->pc = 0x182960u;
            // 0x182960: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x182964u;
        goto label_182964;
    }
    ctx->pc = 0x18295Cu;
    {
        const bool branch_taken_0x18295c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18295Cu;
            // 0x182960: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18295c) {
            ctx->pc = 0x182998u;
            goto label_182998;
        }
    }
    ctx->pc = 0x182964u;
label_182964:
    // 0x182964: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x182964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_182968:
    // 0x182968: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x182968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_18296c:
    // 0x18296c: 0x248474a0  addiu       $a0, $a0, 0x74A0
    ctx->pc = 0x18296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
label_182970:
    // 0x182970: 0xc05b99c  jal         func_16E670
label_182974:
    if (ctx->pc == 0x182974u) {
        ctx->pc = 0x182974u;
            // 0x182974: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->pc = 0x182978u;
        goto label_182978;
    }
    ctx->pc = 0x182970u;
    SET_GPR_U32(ctx, 31, 0x182978u);
    ctx->pc = 0x182974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182970u;
            // 0x182974: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182978u; }
        if (ctx->pc != 0x182978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182978u; }
        if (ctx->pc != 0x182978u) { return; }
    }
    ctx->pc = 0x182978u;
label_182978:
    // 0x182978: 0x0  nop
    ctx->pc = 0x182978u;
    // NOP
label_18297c:
    // 0x18297c: 0x0  nop
    ctx->pc = 0x18297cu;
    // NOP
label_182980:
    // 0x182980: 0x0  nop
    ctx->pc = 0x182980u;
    // NOP
label_182984:
    // 0x182984: 0x0  nop
    ctx->pc = 0x182984u;
    // NOP
label_182988:
    // 0x182988: 0x0  nop
    ctx->pc = 0x182988u;
    // NOP
label_18298c:
    // 0x18298c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_182990:
    if (ctx->pc == 0x182990u) {
        ctx->pc = 0x182994u;
        goto label_182994;
    }
    ctx->pc = 0x18298Cu;
    {
        const bool branch_taken_0x18298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18298c) {
            ctx->pc = 0x182978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182978;
        }
    }
    ctx->pc = 0x182994u;
label_182994:
    // 0x182994: 0x0  nop
    ctx->pc = 0x182994u;
    // NOP
label_182998:
    // 0x182998: 0x2670cedc  addiu       $s0, $s3, -0x3124
    ctx->pc = 0x182998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954716));
label_18299c:
    // 0x18299c: 0x8e45ced4  lw          $a1, -0x312C($s2)
    ctx->pc = 0x18299cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954708)));
label_1829a0:
    // 0x1829a0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1829a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1829a4:
    // 0x1829a4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1829a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1829a8:
    // 0x1829a8: 0x248474e8  addiu       $a0, $a0, 0x74E8
    ctx->pc = 0x1829a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29928));
label_1829ac:
    // 0x1829ac: 0xc05b99c  jal         func_16E670
label_1829b0:
    if (ctx->pc == 0x1829B0u) {
        ctx->pc = 0x1829B0u;
            // 0x1829b0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->pc = 0x1829B4u;
        goto label_1829b4;
    }
    ctx->pc = 0x1829ACu;
    SET_GPR_U32(ctx, 31, 0x1829B4u);
    ctx->pc = 0x1829B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829ACu;
            // 0x1829b0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829B4u; }
        if (ctx->pc != 0x1829B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829B4u; }
        if (ctx->pc != 0x1829B4u) { return; }
    }
    ctx->pc = 0x1829B4u;
label_1829b4:
    // 0x1829b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1829b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1829b8:
    // 0x1829b8: 0x2405ffc0  addiu       $a1, $zero, -0x40
    ctx->pc = 0x1829b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_1829bc:
    // 0x1829bc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1829bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_1829c0:
    // 0x1829c0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1829c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1829c4:
    // 0x1829c4: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x1829c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_1829c8:
    // 0x1829c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1829c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1829cc:
    // 0x1829cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1829ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1829d0:
    // 0x1829d0: 0xa082cee4  sb          $v0, -0x311C($a0)
    ctx->pc = 0x1829d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294954724), (uint8_t)GPR_U32(ctx, 2));
label_1829d4:
    // 0x1829d4: 0xae03cee0  sw          $v1, -0x3120($s0)
    ctx->pc = 0x1829d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954720), GPR_U32(ctx, 3));
label_1829d8:
    // 0x1829d8: 0x3c14005f  lui         $s4, 0x5F
    ctx->pc = 0x1829d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
label_1829dc:
    // 0x1829dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1829dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1829e0:
    // 0x1829e0: 0x2684cf30  addiu       $a0, $s4, -0x30D0
    ctx->pc = 0x1829e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954800));
label_1829e4:
    // 0x1829e4: 0xc04a576  jal         func_1295D8
label_1829e8:
    if (ctx->pc == 0x1829E8u) {
        ctx->pc = 0x1829E8u;
            // 0x1829e8: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->pc = 0x1829ECu;
        goto label_1829ec;
    }
    ctx->pc = 0x1829E4u;
    SET_GPR_U32(ctx, 31, 0x1829ECu);
    ctx->pc = 0x1829E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829E4u;
            // 0x1829e8: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829ECu; }
        if (ctx->pc != 0x1829ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829ECu; }
        if (ctx->pc != 0x1829ECu) { return; }
    }
    ctx->pc = 0x1829ECu;
label_1829ec:
    // 0x1829ec: 0x8e11cee0  lw          $s1, -0x3120($s0)
    ctx->pc = 0x1829ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954720)));
label_1829f0:
    // 0x1829f0: 0x8ea2ced0  lw          $v0, -0x3130($s5)
    ctx->pc = 0x1829f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954704)));
label_1829f4:
    // 0x1829f4: 0x1840006a  blez        $v0, . + 4 + (0x6A << 2)
label_1829f8:
    if (ctx->pc == 0x1829F8u) {
        ctx->pc = 0x1829F8u;
            // 0x1829f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1829FCu;
        goto label_1829fc;
    }
    ctx->pc = 0x1829F4u;
    {
        const bool branch_taken_0x1829f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1829F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1829F4u;
            // 0x1829f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829f4) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x1829FCu;
label_1829fc:
    // 0x1829fc: 0x3c16005f  lui         $s6, 0x5F
    ctx->pc = 0x1829fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)95 << 16));
label_182a00:
    // 0x182a00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x182a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182a04:
    // 0x182a04: 0x3c1e0063  lui         $fp, 0x63
    ctx->pc = 0x182a04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)99 << 16));
label_182a08:
    // 0x182a08: 0x3c170063  lui         $s7, 0x63
    ctx->pc = 0x182a08u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)99 << 16));
label_182a0c:
    // 0x182a0c: 0x2682cf30  addiu       $v0, $s4, -0x30D0
    ctx->pc = 0x182a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954800));
label_182a10:
    // 0x182a10: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x182a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_182a14:
    // 0x182a14: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x182a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_182a18:
    // 0x182a18: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x182a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_182a1c:
    // 0x182a1c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_182a20:
    if (ctx->pc == 0x182A20u) {
        ctx->pc = 0x182A20u;
            // 0x182a20: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x182A24u;
        goto label_182a24;
    }
    ctx->pc = 0x182A1Cu;
    {
        const bool branch_taken_0x182a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A1Cu;
            // 0x182a20: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a1c) {
            ctx->pc = 0x182A50u;
            goto label_182a50;
        }
    }
    ctx->pc = 0x182A24u;
label_182a24:
    // 0x182a24: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x182a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_182a28:
    // 0x182a28: 0xc05b99c  jal         func_16E670
label_182a2c:
    if (ctx->pc == 0x182A2Cu) {
        ctx->pc = 0x182A2Cu;
            // 0x182a2c: 0x24447518  addiu       $a0, $v0, 0x7518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29976));
        ctx->pc = 0x182A30u;
        goto label_182a30;
    }
    ctx->pc = 0x182A28u;
    SET_GPR_U32(ctx, 31, 0x182A30u);
    ctx->pc = 0x182A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A28u;
            // 0x182a2c: 0x24447518  addiu       $a0, $v0, 0x7518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A30u; }
        if (ctx->pc != 0x182A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A30u; }
        if (ctx->pc != 0x182A30u) { return; }
    }
    ctx->pc = 0x182A30u;
label_182a30:
    // 0x182a30: 0x0  nop
    ctx->pc = 0x182a30u;
    // NOP
label_182a34:
    // 0x182a34: 0x0  nop
    ctx->pc = 0x182a34u;
    // NOP
label_182a38:
    // 0x182a38: 0x0  nop
    ctx->pc = 0x182a38u;
    // NOP
label_182a3c:
    // 0x182a3c: 0x0  nop
    ctx->pc = 0x182a3cu;
    // NOP
label_182a40:
    // 0x182a40: 0x0  nop
    ctx->pc = 0x182a40u;
    // NOP
label_182a44:
    // 0x182a44: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_182a48:
    if (ctx->pc == 0x182A48u) {
        ctx->pc = 0x182A4Cu;
        goto label_182a4c;
    }
    ctx->pc = 0x182A44u;
    {
        const bool branch_taken_0x182a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182a44) {
            ctx->pc = 0x182A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182a30;
        }
    }
    ctx->pc = 0x182A4Cu;
label_182a4c:
    // 0x182a4c: 0x0  nop
    ctx->pc = 0x182a4cu;
    // NOP
label_182a50:
    // 0x182a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x182a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_182a54:
    // 0x182a54: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_182a58:
    // 0x182a58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x182a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182a5c:
    // 0x182a5c: 0xc061d0e  jal         func_187438
label_182a60:
    if (ctx->pc == 0x182A60u) {
        ctx->pc = 0x182A60u;
            // 0x182a60: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x182A64u;
        goto label_182a64;
    }
    ctx->pc = 0x182A5Cu;
    SET_GPR_U32(ctx, 31, 0x182A64u);
    ctx->pc = 0x182A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A5Cu;
            // 0x182a60: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187438u;
    if (runtime->hasFunction(0x187438u)) {
        auto targetFn = runtime->lookupFunction(0x187438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A64u; }
        if (ctx->pc != 0x182A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187438_0x187438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A64u; }
        if (ctx->pc != 0x182A64u) { return; }
    }
    ctx->pc = 0x182A64u;
label_182a64:
    // 0x182a64: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x182a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_182a68:
    // 0x182a68: 0x26c5d230  addiu       $a1, $s6, -0x2DD0
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955568));
label_182a6c:
    // 0x182a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x182a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182a70:
    // 0x182a70: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x182a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182a74:
    // 0x182a74: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x182a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_182a78:
    // 0x182a78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x182a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_182a7c:
    // 0x182a7c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x182a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_182a80:
    // 0x182a80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_182a84:
    if (ctx->pc == 0x182A84u) {
        ctx->pc = 0x182A84u;
            // 0x182a84: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x182A88u;
        goto label_182a88;
    }
    ctx->pc = 0x182A80u;
    {
        const bool branch_taken_0x182a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A80u;
            // 0x182a84: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a80) {
            ctx->pc = 0x182AB8u;
            goto label_182ab8;
        }
    }
    ctx->pc = 0x182A88u;
label_182a88:
    // 0x182a88: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x182a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_182a8c:
    // 0x182a8c: 0xc05b99c  jal         func_16E670
label_182a90:
    if (ctx->pc == 0x182A90u) {
        ctx->pc = 0x182A90u;
            // 0x182a90: 0x24447548  addiu       $a0, $v0, 0x7548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30024));
        ctx->pc = 0x182A94u;
        goto label_182a94;
    }
    ctx->pc = 0x182A8Cu;
    SET_GPR_U32(ctx, 31, 0x182A94u);
    ctx->pc = 0x182A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A8Cu;
            // 0x182a90: 0x24447548  addiu       $a0, $v0, 0x7548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A94u; }
        if (ctx->pc != 0x182A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A94u; }
        if (ctx->pc != 0x182A94u) { return; }
    }
    ctx->pc = 0x182A94u;
label_182a94:
    // 0x182a94: 0x0  nop
    ctx->pc = 0x182a94u;
    // NOP
label_182a98:
    // 0x182a98: 0x0  nop
    ctx->pc = 0x182a98u;
    // NOP
label_182a9c:
    // 0x182a9c: 0x0  nop
    ctx->pc = 0x182a9cu;
    // NOP
label_182aa0:
    // 0x182aa0: 0x0  nop
    ctx->pc = 0x182aa0u;
    // NOP
label_182aa4:
    // 0x182aa4: 0x0  nop
    ctx->pc = 0x182aa4u;
    // NOP
label_182aa8:
    // 0x182aa8: 0x0  nop
    ctx->pc = 0x182aa8u;
    // NOP
label_182aac:
    // 0x182aac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_182ab0:
    if (ctx->pc == 0x182AB0u) {
        ctx->pc = 0x182AB4u;
        goto label_182ab4;
    }
    ctx->pc = 0x182AACu;
    {
        const bool branch_taken_0x182aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182aac) {
            ctx->pc = 0x182A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182a98;
        }
    }
    ctx->pc = 0x182AB4u;
label_182ab4:
    // 0x182ab4: 0x0  nop
    ctx->pc = 0x182ab4u;
    // NOP
label_182ab8:
    // 0x182ab8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_182abc:
    if (ctx->pc == 0x182ABCu) {
        ctx->pc = 0x182ABCu;
            // 0x182abc: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x182AC0u;
        goto label_182ac0;
    }
    ctx->pc = 0x182AB8u;
    {
        const bool branch_taken_0x182ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182AB8u;
            // 0x182abc: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ab8) {
            ctx->pc = 0x182AE8u;
            goto label_182ae8;
        }
    }
    ctx->pc = 0x182AC0u;
label_182ac0:
    // 0x182ac0: 0xc05b99c  jal         func_16E670
label_182ac4:
    if (ctx->pc == 0x182AC4u) {
        ctx->pc = 0x182AC4u;
            // 0x182ac4: 0x24447580  addiu       $a0, $v0, 0x7580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30080));
        ctx->pc = 0x182AC8u;
        goto label_182ac8;
    }
    ctx->pc = 0x182AC0u;
    SET_GPR_U32(ctx, 31, 0x182AC8u);
    ctx->pc = 0x182AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182AC0u;
            // 0x182ac4: 0x24447580  addiu       $a0, $v0, 0x7580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AC8u; }
        if (ctx->pc != 0x182AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AC8u; }
        if (ctx->pc != 0x182AC8u) { return; }
    }
    ctx->pc = 0x182AC8u;
label_182ac8:
    // 0x182ac8: 0x0  nop
    ctx->pc = 0x182ac8u;
    // NOP
label_182acc:
    // 0x182acc: 0x0  nop
    ctx->pc = 0x182accu;
    // NOP
label_182ad0:
    // 0x182ad0: 0x0  nop
    ctx->pc = 0x182ad0u;
    // NOP
label_182ad4:
    // 0x182ad4: 0x0  nop
    ctx->pc = 0x182ad4u;
    // NOP
label_182ad8:
    // 0x182ad8: 0x0  nop
    ctx->pc = 0x182ad8u;
    // NOP
label_182adc:
    // 0x182adc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_182ae0:
    if (ctx->pc == 0x182AE0u) {
        ctx->pc = 0x182AE4u;
        goto label_182ae4;
    }
    ctx->pc = 0x182ADCu;
    {
        const bool branch_taken_0x182adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182adc) {
            ctx->pc = 0x182AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182ac8;
        }
    }
    ctx->pc = 0x182AE4u;
label_182ae4:
    // 0x182ae4: 0x0  nop
    ctx->pc = 0x182ae4u;
    // NOP
label_182ae8:
    // 0x182ae8: 0xc0618fa  jal         func_1863E8
label_182aec:
    if (ctx->pc == 0x182AECu) {
        ctx->pc = 0x182AF0u;
        goto label_182af0;
    }
    ctx->pc = 0x182AE8u;
    SET_GPR_U32(ctx, 31, 0x182AF0u);
    ctx->pc = 0x1863E8u;
    if (runtime->hasFunction(0x1863E8u)) {
        auto targetFn = runtime->lookupFunction(0x1863E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AF0u; }
        if (ctx->pc != 0x182AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001863E8_0x1863e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AF0u; }
        if (ctx->pc != 0x182AF0u) { return; }
    }
    ctx->pc = 0x182AF0u;
label_182af0:
    // 0x182af0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x182af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_182af4:
    // 0x182af4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x182af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_182af8:
    // 0x182af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182afc:
    // 0x182afc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_182b00:
    if (ctx->pc == 0x182B00u) {
        ctx->pc = 0x182B00u;
            // 0x182b00: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x182B04u;
        goto label_182b04;
    }
    ctx->pc = 0x182AFCu;
    {
        const bool branch_taken_0x182afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182AFCu;
            // 0x182b00: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182afc) {
            ctx->pc = 0x182B30u;
            goto label_182b30;
        }
    }
    ctx->pc = 0x182B04u;
label_182b04:
    // 0x182b04: 0xc05b99c  jal         func_16E670
label_182b08:
    if (ctx->pc == 0x182B08u) {
        ctx->pc = 0x182B08u;
            // 0x182b08: 0x27c475b0  addiu       $a0, $fp, 0x75B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 30128));
        ctx->pc = 0x182B0Cu;
        goto label_182b0c;
    }
    ctx->pc = 0x182B04u;
    SET_GPR_U32(ctx, 31, 0x182B0Cu);
    ctx->pc = 0x182B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B04u;
            // 0x182b08: 0x27c475b0  addiu       $a0, $fp, 0x75B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 30128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B0Cu; }
        if (ctx->pc != 0x182B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B0Cu; }
        if (ctx->pc != 0x182B0Cu) { return; }
    }
    ctx->pc = 0x182B0Cu;
label_182b0c:
    // 0x182b0c: 0x0  nop
    ctx->pc = 0x182b0cu;
    // NOP
label_182b10:
    // 0x182b10: 0x0  nop
    ctx->pc = 0x182b10u;
    // NOP
label_182b14:
    // 0x182b14: 0x0  nop
    ctx->pc = 0x182b14u;
    // NOP
label_182b18:
    // 0x182b18: 0x0  nop
    ctx->pc = 0x182b18u;
    // NOP
label_182b1c:
    // 0x182b1c: 0x0  nop
    ctx->pc = 0x182b1cu;
    // NOP
label_182b20:
    // 0x182b20: 0x0  nop
    ctx->pc = 0x182b20u;
    // NOP
label_182b24:
    // 0x182b24: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_182b28:
    if (ctx->pc == 0x182B28u) {
        ctx->pc = 0x182B2Cu;
        goto label_182b2c;
    }
    ctx->pc = 0x182B24u;
    {
        const bool branch_taken_0x182b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b24) {
            ctx->pc = 0x182B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182b10;
        }
    }
    ctx->pc = 0x182B2Cu;
label_182b2c:
    // 0x182b2c: 0x0  nop
    ctx->pc = 0x182b2cu;
    // NOP
label_182b30:
    // 0x182b30: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x182b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_182b34:
    // 0x182b34: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x182b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_182b38:
    // 0x182b38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x182b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_182b3c:
    // 0x182b3c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x182b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_182b40:
    // 0x182b40: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x182b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_182b44:
    // 0x182b44: 0x40f809  jalr        $v0
label_182b48:
    if (ctx->pc == 0x182B48u) {
        ctx->pc = 0x182B48u;
            // 0x182b48: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->pc = 0x182B4Cu;
        goto label_182b4c;
    }
    ctx->pc = 0x182B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182B4Cu);
        ctx->pc = 0x182B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B44u;
            // 0x182b48: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x182B4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182B4Cu; }
            if (ctx->pc != 0x182B4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x182B4Cu;
label_182b4c:
    // 0x182b4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x182b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_182b50:
    // 0x182b50: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x182b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_182b54:
    // 0x182b54: 0xc061ee4  jal         func_187B90
label_182b58:
    if (ctx->pc == 0x182B58u) {
        ctx->pc = 0x182B58u;
            // 0x182b58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x182B5Cu;
        goto label_182b5c;
    }
    ctx->pc = 0x182B54u;
    SET_GPR_U32(ctx, 31, 0x182B5Cu);
    ctx->pc = 0x182B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B54u;
            // 0x182b58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B90u;
    if (runtime->hasFunction(0x187B90u)) {
        auto targetFn = runtime->lookupFunction(0x187B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B5Cu; }
        if (ctx->pc != 0x182B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187B90_0x187b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B5Cu; }
        if (ctx->pc != 0x182B5Cu) { return; }
    }
    ctx->pc = 0x182B5Cu;
label_182b5c:
    // 0x182b5c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_182b60:
    if (ctx->pc == 0x182B60u) {
        ctx->pc = 0x182B60u;
            // 0x182b60: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x182B64u;
        goto label_182b64;
    }
    ctx->pc = 0x182B5Cu;
    {
        const bool branch_taken_0x182b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B5Cu;
            // 0x182b60: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b5c) {
            ctx->pc = 0x182B90u;
            goto label_182b90;
        }
    }
    ctx->pc = 0x182B64u;
label_182b64:
    // 0x182b64: 0xc05b99c  jal         func_16E670
label_182b68:
    if (ctx->pc == 0x182B68u) {
        ctx->pc = 0x182B68u;
            // 0x182b68: 0x26e475e8  addiu       $a0, $s7, 0x75E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 30184));
        ctx->pc = 0x182B6Cu;
        goto label_182b6c;
    }
    ctx->pc = 0x182B64u;
    SET_GPR_U32(ctx, 31, 0x182B6Cu);
    ctx->pc = 0x182B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B64u;
            // 0x182b68: 0x26e475e8  addiu       $a0, $s7, 0x75E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 30184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B6Cu; }
        if (ctx->pc != 0x182B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B6Cu; }
        if (ctx->pc != 0x182B6Cu) { return; }
    }
    ctx->pc = 0x182B6Cu;
label_182b6c:
    // 0x182b6c: 0x0  nop
    ctx->pc = 0x182b6cu;
    // NOP
label_182b70:
    // 0x182b70: 0x0  nop
    ctx->pc = 0x182b70u;
    // NOP
label_182b74:
    // 0x182b74: 0x0  nop
    ctx->pc = 0x182b74u;
    // NOP
label_182b78:
    // 0x182b78: 0x0  nop
    ctx->pc = 0x182b78u;
    // NOP
label_182b7c:
    // 0x182b7c: 0x0  nop
    ctx->pc = 0x182b7cu;
    // NOP
label_182b80:
    // 0x182b80: 0x0  nop
    ctx->pc = 0x182b80u;
    // NOP
label_182b84:
    // 0x182b84: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_182b88:
    if (ctx->pc == 0x182B88u) {
        ctx->pc = 0x182B8Cu;
        goto label_182b8c;
    }
    ctx->pc = 0x182B84u;
    {
        const bool branch_taken_0x182b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b84) {
            ctx->pc = 0x182B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182b70;
        }
    }
    ctx->pc = 0x182B8Cu;
label_182b8c:
    // 0x182b8c: 0x0  nop
    ctx->pc = 0x182b8cu;
    // NOP
label_182b90:
    // 0x182b90: 0x8ea2ced0  lw          $v0, -0x3130($s5)
    ctx->pc = 0x182b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954704)));
label_182b94:
    // 0x182b94: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x182b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_182b98:
    // 0x182b98: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_182b9c:
    if (ctx->pc == 0x182B9Cu) {
        ctx->pc = 0x182B9Cu;
            // 0x182b9c: 0x2682cf30  addiu       $v0, $s4, -0x30D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954800));
        ctx->pc = 0x182BA0u;
        goto label_182ba0;
    }
    ctx->pc = 0x182B98u;
    {
        const bool branch_taken_0x182b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B98u;
            // 0x182b9c: 0x2682cf30  addiu       $v0, $s4, -0x30D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b98) {
            ctx->pc = 0x182A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182a10;
        }
    }
    ctx->pc = 0x182BA0u;
label_182ba0:
    // 0x182ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182ba4:
    // 0x182ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_182ba8:
    // 0x182ba8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182bac:
    // 0x182bac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x182bacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_182bb0:
    // 0x182bb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x182bb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_182bb4:
    // 0x182bb4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x182bb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_182bb8:
    // 0x182bb8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x182bb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_182bbc:
    // 0x182bbc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x182bbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_182bc0:
    // 0x182bc0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x182bc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_182bc4:
    // 0x182bc4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x182bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_182bc8:
    // 0x182bc8: 0x3e00008  jr          $ra
label_182bcc:
    if (ctx->pc == 0x182BCCu) {
        ctx->pc = 0x182BCCu;
            // 0x182bcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x182BD0u;
        goto label_fallthrough_0x182bc8;
    }
    ctx->pc = 0x182BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BC8u;
            // 0x182bcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x182bc8:
    ctx->pc = 0x182BD0u;
}
