#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BA940
// Address: 0x3ba940 - 0x3bac70
void sub_003BA940_0x3ba940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA940_0x3ba940");
#endif

    switch (ctx->pc) {
        case 0x3ba940u: goto label_3ba940;
        case 0x3ba944u: goto label_3ba944;
        case 0x3ba948u: goto label_3ba948;
        case 0x3ba94cu: goto label_3ba94c;
        case 0x3ba950u: goto label_3ba950;
        case 0x3ba954u: goto label_3ba954;
        case 0x3ba958u: goto label_3ba958;
        case 0x3ba95cu: goto label_3ba95c;
        case 0x3ba960u: goto label_3ba960;
        case 0x3ba964u: goto label_3ba964;
        case 0x3ba968u: goto label_3ba968;
        case 0x3ba96cu: goto label_3ba96c;
        case 0x3ba970u: goto label_3ba970;
        case 0x3ba974u: goto label_3ba974;
        case 0x3ba978u: goto label_3ba978;
        case 0x3ba97cu: goto label_3ba97c;
        case 0x3ba980u: goto label_3ba980;
        case 0x3ba984u: goto label_3ba984;
        case 0x3ba988u: goto label_3ba988;
        case 0x3ba98cu: goto label_3ba98c;
        case 0x3ba990u: goto label_3ba990;
        case 0x3ba994u: goto label_3ba994;
        case 0x3ba998u: goto label_3ba998;
        case 0x3ba99cu: goto label_3ba99c;
        case 0x3ba9a0u: goto label_3ba9a0;
        case 0x3ba9a4u: goto label_3ba9a4;
        case 0x3ba9a8u: goto label_3ba9a8;
        case 0x3ba9acu: goto label_3ba9ac;
        case 0x3ba9b0u: goto label_3ba9b0;
        case 0x3ba9b4u: goto label_3ba9b4;
        case 0x3ba9b8u: goto label_3ba9b8;
        case 0x3ba9bcu: goto label_3ba9bc;
        case 0x3ba9c0u: goto label_3ba9c0;
        case 0x3ba9c4u: goto label_3ba9c4;
        case 0x3ba9c8u: goto label_3ba9c8;
        case 0x3ba9ccu: goto label_3ba9cc;
        case 0x3ba9d0u: goto label_3ba9d0;
        case 0x3ba9d4u: goto label_3ba9d4;
        case 0x3ba9d8u: goto label_3ba9d8;
        case 0x3ba9dcu: goto label_3ba9dc;
        case 0x3ba9e0u: goto label_3ba9e0;
        case 0x3ba9e4u: goto label_3ba9e4;
        case 0x3ba9e8u: goto label_3ba9e8;
        case 0x3ba9ecu: goto label_3ba9ec;
        case 0x3ba9f0u: goto label_3ba9f0;
        case 0x3ba9f4u: goto label_3ba9f4;
        case 0x3ba9f8u: goto label_3ba9f8;
        case 0x3ba9fcu: goto label_3ba9fc;
        case 0x3baa00u: goto label_3baa00;
        case 0x3baa04u: goto label_3baa04;
        case 0x3baa08u: goto label_3baa08;
        case 0x3baa0cu: goto label_3baa0c;
        case 0x3baa10u: goto label_3baa10;
        case 0x3baa14u: goto label_3baa14;
        case 0x3baa18u: goto label_3baa18;
        case 0x3baa1cu: goto label_3baa1c;
        case 0x3baa20u: goto label_3baa20;
        case 0x3baa24u: goto label_3baa24;
        case 0x3baa28u: goto label_3baa28;
        case 0x3baa2cu: goto label_3baa2c;
        case 0x3baa30u: goto label_3baa30;
        case 0x3baa34u: goto label_3baa34;
        case 0x3baa38u: goto label_3baa38;
        case 0x3baa3cu: goto label_3baa3c;
        case 0x3baa40u: goto label_3baa40;
        case 0x3baa44u: goto label_3baa44;
        case 0x3baa48u: goto label_3baa48;
        case 0x3baa4cu: goto label_3baa4c;
        case 0x3baa50u: goto label_3baa50;
        case 0x3baa54u: goto label_3baa54;
        case 0x3baa58u: goto label_3baa58;
        case 0x3baa5cu: goto label_3baa5c;
        case 0x3baa60u: goto label_3baa60;
        case 0x3baa64u: goto label_3baa64;
        case 0x3baa68u: goto label_3baa68;
        case 0x3baa6cu: goto label_3baa6c;
        case 0x3baa70u: goto label_3baa70;
        case 0x3baa74u: goto label_3baa74;
        case 0x3baa78u: goto label_3baa78;
        case 0x3baa7cu: goto label_3baa7c;
        case 0x3baa80u: goto label_3baa80;
        case 0x3baa84u: goto label_3baa84;
        case 0x3baa88u: goto label_3baa88;
        case 0x3baa8cu: goto label_3baa8c;
        case 0x3baa90u: goto label_3baa90;
        case 0x3baa94u: goto label_3baa94;
        case 0x3baa98u: goto label_3baa98;
        case 0x3baa9cu: goto label_3baa9c;
        case 0x3baaa0u: goto label_3baaa0;
        case 0x3baaa4u: goto label_3baaa4;
        case 0x3baaa8u: goto label_3baaa8;
        case 0x3baaacu: goto label_3baaac;
        case 0x3baab0u: goto label_3baab0;
        case 0x3baab4u: goto label_3baab4;
        case 0x3baab8u: goto label_3baab8;
        case 0x3baabcu: goto label_3baabc;
        case 0x3baac0u: goto label_3baac0;
        case 0x3baac4u: goto label_3baac4;
        case 0x3baac8u: goto label_3baac8;
        case 0x3baaccu: goto label_3baacc;
        case 0x3baad0u: goto label_3baad0;
        case 0x3baad4u: goto label_3baad4;
        case 0x3baad8u: goto label_3baad8;
        case 0x3baadcu: goto label_3baadc;
        case 0x3baae0u: goto label_3baae0;
        case 0x3baae4u: goto label_3baae4;
        case 0x3baae8u: goto label_3baae8;
        case 0x3baaecu: goto label_3baaec;
        case 0x3baaf0u: goto label_3baaf0;
        case 0x3baaf4u: goto label_3baaf4;
        case 0x3baaf8u: goto label_3baaf8;
        case 0x3baafcu: goto label_3baafc;
        case 0x3bab00u: goto label_3bab00;
        case 0x3bab04u: goto label_3bab04;
        case 0x3bab08u: goto label_3bab08;
        case 0x3bab0cu: goto label_3bab0c;
        case 0x3bab10u: goto label_3bab10;
        case 0x3bab14u: goto label_3bab14;
        case 0x3bab18u: goto label_3bab18;
        case 0x3bab1cu: goto label_3bab1c;
        case 0x3bab20u: goto label_3bab20;
        case 0x3bab24u: goto label_3bab24;
        case 0x3bab28u: goto label_3bab28;
        case 0x3bab2cu: goto label_3bab2c;
        case 0x3bab30u: goto label_3bab30;
        case 0x3bab34u: goto label_3bab34;
        case 0x3bab38u: goto label_3bab38;
        case 0x3bab3cu: goto label_3bab3c;
        case 0x3bab40u: goto label_3bab40;
        case 0x3bab44u: goto label_3bab44;
        case 0x3bab48u: goto label_3bab48;
        case 0x3bab4cu: goto label_3bab4c;
        case 0x3bab50u: goto label_3bab50;
        case 0x3bab54u: goto label_3bab54;
        case 0x3bab58u: goto label_3bab58;
        case 0x3bab5cu: goto label_3bab5c;
        case 0x3bab60u: goto label_3bab60;
        case 0x3bab64u: goto label_3bab64;
        case 0x3bab68u: goto label_3bab68;
        case 0x3bab6cu: goto label_3bab6c;
        case 0x3bab70u: goto label_3bab70;
        case 0x3bab74u: goto label_3bab74;
        case 0x3bab78u: goto label_3bab78;
        case 0x3bab7cu: goto label_3bab7c;
        case 0x3bab80u: goto label_3bab80;
        case 0x3bab84u: goto label_3bab84;
        case 0x3bab88u: goto label_3bab88;
        case 0x3bab8cu: goto label_3bab8c;
        case 0x3bab90u: goto label_3bab90;
        case 0x3bab94u: goto label_3bab94;
        case 0x3bab98u: goto label_3bab98;
        case 0x3bab9cu: goto label_3bab9c;
        case 0x3baba0u: goto label_3baba0;
        case 0x3baba4u: goto label_3baba4;
        case 0x3baba8u: goto label_3baba8;
        case 0x3babacu: goto label_3babac;
        case 0x3babb0u: goto label_3babb0;
        case 0x3babb4u: goto label_3babb4;
        case 0x3babb8u: goto label_3babb8;
        case 0x3babbcu: goto label_3babbc;
        case 0x3babc0u: goto label_3babc0;
        case 0x3babc4u: goto label_3babc4;
        case 0x3babc8u: goto label_3babc8;
        case 0x3babccu: goto label_3babcc;
        case 0x3babd0u: goto label_3babd0;
        case 0x3babd4u: goto label_3babd4;
        case 0x3babd8u: goto label_3babd8;
        case 0x3babdcu: goto label_3babdc;
        case 0x3babe0u: goto label_3babe0;
        case 0x3babe4u: goto label_3babe4;
        case 0x3babe8u: goto label_3babe8;
        case 0x3babecu: goto label_3babec;
        case 0x3babf0u: goto label_3babf0;
        case 0x3babf4u: goto label_3babf4;
        case 0x3babf8u: goto label_3babf8;
        case 0x3babfcu: goto label_3babfc;
        case 0x3bac00u: goto label_3bac00;
        case 0x3bac04u: goto label_3bac04;
        case 0x3bac08u: goto label_3bac08;
        case 0x3bac0cu: goto label_3bac0c;
        case 0x3bac10u: goto label_3bac10;
        case 0x3bac14u: goto label_3bac14;
        case 0x3bac18u: goto label_3bac18;
        case 0x3bac1cu: goto label_3bac1c;
        case 0x3bac20u: goto label_3bac20;
        case 0x3bac24u: goto label_3bac24;
        case 0x3bac28u: goto label_3bac28;
        case 0x3bac2cu: goto label_3bac2c;
        case 0x3bac30u: goto label_3bac30;
        case 0x3bac34u: goto label_3bac34;
        case 0x3bac38u: goto label_3bac38;
        case 0x3bac3cu: goto label_3bac3c;
        case 0x3bac40u: goto label_3bac40;
        case 0x3bac44u: goto label_3bac44;
        case 0x3bac48u: goto label_3bac48;
        case 0x3bac4cu: goto label_3bac4c;
        case 0x3bac50u: goto label_3bac50;
        case 0x3bac54u: goto label_3bac54;
        case 0x3bac58u: goto label_3bac58;
        case 0x3bac5cu: goto label_3bac5c;
        case 0x3bac60u: goto label_3bac60;
        case 0x3bac64u: goto label_3bac64;
        case 0x3bac68u: goto label_3bac68;
        case 0x3bac6cu: goto label_3bac6c;
        default: break;
    }

    ctx->pc = 0x3ba940u;

label_3ba940:
    // 0x3ba940: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x3ba940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_3ba944:
    // 0x3ba944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ba944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ba948:
    // 0x3ba948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ba948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ba94c:
    // 0x3ba94c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ba94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ba950:
    // 0x3ba950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ba950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ba954:
    // 0x3ba954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ba954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ba958:
    // 0x3ba958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ba958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ba95c:
    // 0x3ba95c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3ba95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3ba960:
    // 0x3ba960: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x3ba960u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba964:
    // 0x3ba964: 0x10a000b9  beqz        $a1, . + 4 + (0xB9 << 2)
label_3ba968:
    if (ctx->pc == 0x3BA968u) {
        ctx->pc = 0x3BA968u;
            // 0x3ba968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA96Cu;
        goto label_3ba96c;
    }
    ctx->pc = 0x3BA964u;
    {
        const bool branch_taken_0x3ba964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA964u;
            // 0x3ba968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba964) {
            ctx->pc = 0x3BAC4Cu;
            goto label_3bac4c;
        }
    }
    ctx->pc = 0x3BA96Cu;
label_3ba96c:
    // 0x3ba96c: 0x8e640e34  lw          $a0, 0xE34($s3)
    ctx->pc = 0x3ba96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3ba970:
    // 0x3ba970: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ba970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ba974:
    // 0x3ba974: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
label_3ba978:
    if (ctx->pc == 0x3BA978u) {
        ctx->pc = 0x3BA978u;
            // 0x3ba978: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->pc = 0x3BA97Cu;
        goto label_3ba97c;
    }
    ctx->pc = 0x3BA974u;
    {
        const bool branch_taken_0x3ba974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ba974) {
            ctx->pc = 0x3BA978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA974u;
            // 0x3ba978: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA9A0u;
            goto label_3ba9a0;
        }
    }
    ctx->pc = 0x3BA97Cu;
label_3ba97c:
    // 0x3ba97c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ba97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ba980:
    // 0x3ba980: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3ba980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ba984:
    // 0x3ba984: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3ba984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3ba988:
    // 0x3ba988: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3ba988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3ba98c:
    // 0x3ba98c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_3ba990:
    if (ctx->pc == 0x3BA990u) {
        ctx->pc = 0x3BA994u;
        goto label_3ba994;
    }
    ctx->pc = 0x3BA98Cu;
    {
        const bool branch_taken_0x3ba98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ba98c) {
            ctx->pc = 0x3BA99Cu;
            goto label_3ba99c;
        }
    }
    ctx->pc = 0x3BA994u;
label_3ba994:
    // 0x3ba994: 0x100000ae  b           . + 4 + (0xAE << 2)
label_3ba998:
    if (ctx->pc == 0x3BA998u) {
        ctx->pc = 0x3BA998u;
            // 0x3ba998: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3BA99Cu;
        goto label_3ba99c;
    }
    ctx->pc = 0x3BA994u;
    {
        const bool branch_taken_0x3ba994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA994u;
            // 0x3ba998: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba994) {
            ctx->pc = 0x3BAC50u;
            goto label_3bac50;
        }
    }
    ctx->pc = 0x3BA99Cu;
label_3ba99c:
    // 0x3ba99c: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x3ba99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3ba9a0:
    // 0x3ba9a0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3ba9a4:
    if (ctx->pc == 0x3BA9A4u) {
        ctx->pc = 0x3BA9A4u;
            // 0x3ba9a4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3BA9A8u;
        goto label_3ba9a8;
    }
    ctx->pc = 0x3BA9A0u;
    {
        const bool branch_taken_0x3ba9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ba9a0) {
            ctx->pc = 0x3BA9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA9A0u;
            // 0x3ba9a4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA9C8u;
            goto label_3ba9c8;
        }
    }
    ctx->pc = 0x3BA9A8u;
label_3ba9a8:
    // 0x3ba9a8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3ba9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3ba9ac:
    // 0x3ba9ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ba9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ba9b0:
    // 0x3ba9b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ba9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ba9b4:
    // 0x3ba9b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3ba9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ba9b8:
    // 0x3ba9b8: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x3ba9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ba9bc:
    // 0x3ba9bc: 0xc0eeb2c  jal         func_3BACB0
label_3ba9c0:
    if (ctx->pc == 0x3BA9C0u) {
        ctx->pc = 0x3BA9C0u;
            // 0x3ba9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA9C4u;
        goto label_3ba9c4;
    }
    ctx->pc = 0x3BA9BCu;
    SET_GPR_U32(ctx, 31, 0x3BA9C4u);
    ctx->pc = 0x3BA9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA9BCu;
            // 0x3ba9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BACB0u;
    if (runtime->hasFunction(0x3BACB0u)) {
        auto targetFn = runtime->lookupFunction(0x3BACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA9C4u; }
        if (ctx->pc != 0x3BA9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BACB0_0x3bacb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA9C4u; }
        if (ctx->pc != 0x3BA9C4u) { return; }
    }
    ctx->pc = 0x3BA9C4u;
label_3ba9c4:
    // 0x3ba9c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ba9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ba9c8:
    // 0x3ba9c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3ba9c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ba9cc:
    // 0x3ba9cc: 0xc44202c8  lwc1        $f2, 0x2C8($v0)
    ctx->pc = 0x3ba9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba9d0:
    // 0x3ba9d0: 0xc44102c4  lwc1        $f1, 0x2C4($v0)
    ctx->pc = 0x3ba9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba9d4:
    // 0x3ba9d4: 0xc44002c0  lwc1        $f0, 0x2C0($v0)
    ctx->pc = 0x3ba9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba9d8:
    // 0x3ba9d8: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x3ba9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3ba9dc:
    // 0x3ba9dc: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x3ba9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
label_3ba9e0:
    // 0x3ba9e0: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x3ba9e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_3ba9e4:
    // 0x3ba9e4: 0xe7a20188  swc1        $f2, 0x188($sp)
    ctx->pc = 0x3ba9e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_3ba9e8:
    // 0x3ba9e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3ba9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ba9ec:
    // 0x3ba9ec: 0xc08af48  jal         func_22BD20
label_3ba9f0:
    if (ctx->pc == 0x3BA9F0u) {
        ctx->pc = 0x3BA9F0u;
            // 0x3ba9f0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3BA9F4u;
        goto label_3ba9f4;
    }
    ctx->pc = 0x3BA9ECu;
    SET_GPR_U32(ctx, 31, 0x3BA9F4u);
    ctx->pc = 0x3BA9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA9ECu;
            // 0x3ba9f0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA9F4u; }
        if (ctx->pc != 0x3BA9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA9F4u; }
        if (ctx->pc != 0x3BA9F4u) { return; }
    }
    ctx->pc = 0x3BA9F4u;
label_3ba9f4:
    // 0x3ba9f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3ba9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3ba9f8:
    // 0x3ba9f8: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x3ba9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_3ba9fc:
    // 0x3ba9fc: 0x2463dfa0  addiu       $v1, $v1, -0x2060
    ctx->pc = 0x3ba9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959008));
label_3baa00:
    // 0x3baa00: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3baa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_3baa04:
    // 0x3baa04: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x3baa04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_3baa08:
    // 0x3baa08: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3baa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3baa0c:
    // 0x3baa0c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3baa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3baa10:
    // 0x3baa10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3baa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3baa14:
    // 0x3baa14: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3baa14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3baa18:
    // 0x3baa18: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3baa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3baa1c:
    // 0x3baa1c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3baa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_3baa20:
    // 0x3baa20: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3baa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3baa24:
    // 0x3baa24: 0xa3a00064  sb          $zero, 0x64($sp)
    ctx->pc = 0x3baa24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 0));
label_3baa28:
    // 0x3baa28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3baa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3baa2c:
    // 0x3baa2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3baa2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3baa30:
    // 0x3baa30: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3baa30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3baa34:
    // 0x3baa34: 0x320f809  jalr        $t9
label_3baa38:
    if (ctx->pc == 0x3BAA38u) {
        ctx->pc = 0x3BAA38u;
            // 0x3baa38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA3Cu;
        goto label_3baa3c;
    }
    ctx->pc = 0x3BAA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BAA3Cu);
        ctx->pc = 0x3BAA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAA34u;
            // 0x3baa38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BAA3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BAA3Cu; }
            if (ctx->pc != 0x3BAA3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3BAA3Cu;
label_3baa3c:
    // 0x3baa3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3baa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3baa40:
    // 0x3baa40: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3baa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3baa44:
    // 0x3baa44: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3baa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3baa48:
    // 0x3baa48: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3baa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3baa4c:
    // 0x3baa4c: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_3baa50:
    if (ctx->pc == 0x3BAA50u) {
        ctx->pc = 0x3BAA50u;
            // 0x3baa50: 0x8e620e34  lw          $v0, 0xE34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
        ctx->pc = 0x3BAA54u;
        goto label_3baa54;
    }
    ctx->pc = 0x3BAA4Cu;
    {
        const bool branch_taken_0x3baa4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3baa4c) {
            ctx->pc = 0x3BAA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAA4Cu;
            // 0x3baa50: 0x8e620e34  lw          $v0, 0xE34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAAB4u;
            goto label_3baab4;
        }
    }
    ctx->pc = 0x3BAA54u;
label_3baa54:
    // 0x3baa54: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3baa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3baa58:
    // 0x3baa58: 0x18400073  blez        $v0, . + 4 + (0x73 << 2)
label_3baa5c:
    if (ctx->pc == 0x3BAA5Cu) {
        ctx->pc = 0x3BAA5Cu;
            // 0x3baa5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA60u;
        goto label_3baa60;
    }
    ctx->pc = 0x3BAA58u;
    {
        const bool branch_taken_0x3baa58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BAA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAA58u;
            // 0x3baa5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa58) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BAA60u;
label_3baa60:
    // 0x3baa60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3baa60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3baa64:
    // 0x3baa64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3baa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3baa68:
    // 0x3baa68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3baa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3baa6c:
    // 0x3baa6c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3baa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3baa70:
    // 0x3baa70: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x3baa70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_3baa74:
    // 0x3baa74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3baa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3baa78:
    // 0x3baa78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3baa7c:
    if (ctx->pc == 0x3BAA7Cu) {
        ctx->pc = 0x3BAA7Cu;
            // 0x3baa7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA80u;
        goto label_3baa80;
    }
    ctx->pc = 0x3BAA78u;
    {
        const bool branch_taken_0x3baa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baa78) {
            ctx->pc = 0x3BAA7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAA78u;
            // 0x3baa7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAA8Cu;
            goto label_3baa8c;
        }
    }
    ctx->pc = 0x3BAA80u;
label_3baa80:
    // 0x3baa80: 0x10000002  b           . + 4 + (0x2 << 2)
label_3baa84:
    if (ctx->pc == 0x3BAA84u) {
        ctx->pc = 0x3BAA84u;
            // 0x3baa84: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x3BAA88u;
        goto label_3baa88;
    }
    ctx->pc = 0x3BAA80u;
    {
        const bool branch_taken_0x3baa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAA80u;
            // 0x3baa84: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa80) {
            ctx->pc = 0x3BAA8Cu;
            goto label_3baa8c;
        }
    }
    ctx->pc = 0x3BAA88u;
label_3baa88:
    // 0x3baa88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3baa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3baa8c:
    // 0x3baa8c: 0xc0e3634  jal         func_38D8D0
label_3baa90:
    if (ctx->pc == 0x3BAA90u) {
        ctx->pc = 0x3BAA90u;
            // 0x3baa90: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3BAA94u;
        goto label_3baa94;
    }
    ctx->pc = 0x3BAA8Cu;
    SET_GPR_U32(ctx, 31, 0x3BAA94u);
    ctx->pc = 0x3BAA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAA8Cu;
            // 0x3baa90: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D8D0u;
    if (runtime->hasFunction(0x38D8D0u)) {
        auto targetFn = runtime->lookupFunction(0x38D8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAA94u; }
        if (ctx->pc != 0x3BAA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D8D0_0x38d8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAA94u; }
        if (ctx->pc != 0x3BAA94u) { return; }
    }
    ctx->pc = 0x3BAA94u;
label_3baa94:
    // 0x3baa94: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3baa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3baa98:
    // 0x3baa98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3baa98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3baa9c:
    // 0x3baa9c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3baa9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3baaa0:
    // 0x3baaa0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3baaa4:
    if (ctx->pc == 0x3BAAA4u) {
        ctx->pc = 0x3BAAA4u;
            // 0x3baaa4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3BAAA8u;
        goto label_3baaa8;
    }
    ctx->pc = 0x3BAAA0u;
    {
        const bool branch_taken_0x3baaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAAA0u;
            // 0x3baaa4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baaa0) {
            ctx->pc = 0x3BAA64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3baa64;
        }
    }
    ctx->pc = 0x3BAAA8u;
label_3baaa8:
    // 0x3baaa8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_3baaac:
    if (ctx->pc == 0x3BAAACu) {
        ctx->pc = 0x3BAAB0u;
        goto label_3baab0;
    }
    ctx->pc = 0x3BAAA8u;
    {
        const bool branch_taken_0x3baaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baaa8) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BAAB0u;
label_3baab0:
    // 0x3baab0: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x3baab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3baab4:
    // 0x3baab4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3baab4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3baab8:
    // 0x3baab8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3baabc:
    if (ctx->pc == 0x3BAABCu) {
        ctx->pc = 0x3BAABCu;
            // 0x3baabc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAAC0u;
        goto label_3baac0;
    }
    ctx->pc = 0x3BAAB8u;
    {
        const bool branch_taken_0x3baab8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3BAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAAB8u;
            // 0x3baabc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baab8) {
            ctx->pc = 0x3BAAD0u;
            goto label_3baad0;
        }
    }
    ctx->pc = 0x3BAAC0u;
label_3baac0:
    // 0x3baac0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3baac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3baac4:
    // 0x3baac4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3baac8:
    if (ctx->pc == 0x3BAAC8u) {
        ctx->pc = 0x3BAACCu;
        goto label_3baacc;
    }
    ctx->pc = 0x3BAAC4u;
    {
        const bool branch_taken_0x3baac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baac4) {
            ctx->pc = 0x3BAAD0u;
            goto label_3baad0;
        }
    }
    ctx->pc = 0x3BAACCu;
label_3baacc:
    // 0x3baacc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3baaccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3baad0:
    // 0x3baad0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3baad4:
    if (ctx->pc == 0x3BAAD4u) {
        ctx->pc = 0x3BAAD8u;
        goto label_3baad8;
    }
    ctx->pc = 0x3BAAD0u;
    {
        const bool branch_taken_0x3baad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3baad0) {
            ctx->pc = 0x3BAAECu;
            goto label_3baaec;
        }
    }
    ctx->pc = 0x3BAAD8u;
label_3baad8:
    // 0x3baad8: 0xc075eb4  jal         func_1D7AD0
label_3baadc:
    if (ctx->pc == 0x3BAADCu) {
        ctx->pc = 0x3BAADCu;
            // 0x3baadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAAE0u;
        goto label_3baae0;
    }
    ctx->pc = 0x3BAAD8u;
    SET_GPR_U32(ctx, 31, 0x3BAAE0u);
    ctx->pc = 0x3BAADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAAD8u;
            // 0x3baadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAAE0u; }
        if (ctx->pc != 0x3BAAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAAE0u; }
        if (ctx->pc != 0x3BAAE0u) { return; }
    }
    ctx->pc = 0x3BAAE0u;
label_3baae0:
    // 0x3baae0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3baae4:
    if (ctx->pc == 0x3BAAE4u) {
        ctx->pc = 0x3BAAE8u;
        goto label_3baae8;
    }
    ctx->pc = 0x3BAAE0u;
    {
        const bool branch_taken_0x3baae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3baae0) {
            ctx->pc = 0x3BAAECu;
            goto label_3baaec;
        }
    }
    ctx->pc = 0x3BAAE8u;
label_3baae8:
    // 0x3baae8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3baae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3baaec:
    // 0x3baaec: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_3baaf0:
    if (ctx->pc == 0x3BAAF0u) {
        ctx->pc = 0x3BAAF0u;
            // 0x3baaf0: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->pc = 0x3BAAF4u;
        goto label_3baaf4;
    }
    ctx->pc = 0x3BAAECu;
    {
        const bool branch_taken_0x3baaec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3baaec) {
            ctx->pc = 0x3BAAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAAECu;
            // 0x3baaf0: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAB08u;
            goto label_3bab08;
        }
    }
    ctx->pc = 0x3BAAF4u;
label_3baaf4:
    // 0x3baaf4: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3baaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3baaf8:
    // 0x3baaf8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3baaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3baafc:
    // 0x3baafc: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_3bab00:
    if (ctx->pc == 0x3BAB00u) {
        ctx->pc = 0x3BAB04u;
        goto label_3bab04;
    }
    ctx->pc = 0x3BAAFCu;
    {
        const bool branch_taken_0x3baafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3baafc) {
            ctx->pc = 0x3BAB9Cu;
            goto label_3bab9c;
        }
    }
    ctx->pc = 0x3BAB04u;
label_3bab04:
    // 0x3bab04: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3bab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3bab08:
    // 0x3bab08: 0x18400047  blez        $v0, . + 4 + (0x47 << 2)
label_3bab0c:
    if (ctx->pc == 0x3BAB0Cu) {
        ctx->pc = 0x3BAB0Cu;
            // 0x3bab0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAB10u;
        goto label_3bab10;
    }
    ctx->pc = 0x3BAB08u;
    {
        const bool branch_taken_0x3bab08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BAB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAB08u;
            // 0x3bab0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab08) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BAB10u;
label_3bab10:
    // 0x3bab10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3bab10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bab14:
    // 0x3bab14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3bab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3bab18:
    // 0x3bab18: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3bab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3bab1c:
    // 0x3bab1c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3bab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3bab20:
    // 0x3bab20: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x3bab20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_3bab24:
    // 0x3bab24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3bab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3bab28:
    // 0x3bab28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3bab2c:
    if (ctx->pc == 0x3BAB2Cu) {
        ctx->pc = 0x3BAB2Cu;
            // 0x3bab2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAB30u;
        goto label_3bab30;
    }
    ctx->pc = 0x3BAB28u;
    {
        const bool branch_taken_0x3bab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bab28) {
            ctx->pc = 0x3BAB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAB28u;
            // 0x3bab2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAB3Cu;
            goto label_3bab3c;
        }
    }
    ctx->pc = 0x3BAB30u;
label_3bab30:
    // 0x3bab30: 0x10000002  b           . + 4 + (0x2 << 2)
label_3bab34:
    if (ctx->pc == 0x3BAB34u) {
        ctx->pc = 0x3BAB34u;
            // 0x3bab34: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x3BAB38u;
        goto label_3bab38;
    }
    ctx->pc = 0x3BAB30u;
    {
        const bool branch_taken_0x3bab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAB30u;
            // 0x3bab34: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab30) {
            ctx->pc = 0x3BAB3Cu;
            goto label_3bab3c;
        }
    }
    ctx->pc = 0x3BAB38u;
label_3bab38:
    // 0x3bab38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3bab38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bab3c:
    // 0x3bab3c: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x3bab3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_3bab40:
    // 0x3bab40: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3bab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3bab44:
    // 0x3bab44: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
label_3bab48:
    if (ctx->pc == 0x3BAB48u) {
        ctx->pc = 0x3BAB4Cu;
        goto label_3bab4c;
    }
    ctx->pc = 0x3BAB44u;
    {
        const bool branch_taken_0x3bab44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bab44) {
            ctx->pc = 0x3BAB70u;
            goto label_3bab70;
        }
    }
    ctx->pc = 0x3BAB4Cu;
label_3bab4c:
    // 0x3bab4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bab50:
    // 0x3bab50: 0x8e650d98  lw          $a1, 0xD98($s3)
    ctx->pc = 0x3bab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3bab54:
    // 0x3bab54: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3bab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3bab58:
    // 0x3bab58: 0xc0bd22c  jal         func_2F48B0
label_3bab5c:
    if (ctx->pc == 0x3BAB5Cu) {
        ctx->pc = 0x3BAB5Cu;
            // 0x3bab5c: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->pc = 0x3BAB60u;
        goto label_3bab60;
    }
    ctx->pc = 0x3BAB58u;
    SET_GPR_U32(ctx, 31, 0x3BAB60u);
    ctx->pc = 0x3BAB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAB58u;
            // 0x3bab5c: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F48B0u;
    if (runtime->hasFunction(0x2F48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAB60u; }
        if (ctx->pc != 0x3BAB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F48B0_0x2f48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAB60u; }
        if (ctx->pc != 0x3BAB60u) { return; }
    }
    ctx->pc = 0x3BAB60u;
label_3bab60:
    // 0x3bab60: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3bab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3bab64:
    // 0x3bab64: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_3bab68:
    if (ctx->pc == 0x3BAB68u) {
        ctx->pc = 0x3BAB6Cu;
        goto label_3bab6c;
    }
    ctx->pc = 0x3BAB64u;
    {
        const bool branch_taken_0x3bab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bab64) {
            ctx->pc = 0x3BAB80u;
            goto label_3bab80;
        }
    }
    ctx->pc = 0x3BAB6Cu;
label_3bab6c:
    // 0x3bab6c: 0x0  nop
    ctx->pc = 0x3bab6cu;
    // NOP
label_3bab70:
    // 0x3bab70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bab70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bab74:
    // 0x3bab74: 0xc0e3634  jal         func_38D8D0
label_3bab78:
    if (ctx->pc == 0x3BAB78u) {
        ctx->pc = 0x3BAB78u;
            // 0x3bab78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAB7Cu;
        goto label_3bab7c;
    }
    ctx->pc = 0x3BAB74u;
    SET_GPR_U32(ctx, 31, 0x3BAB7Cu);
    ctx->pc = 0x3BAB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAB74u;
            // 0x3bab78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D8D0u;
    if (runtime->hasFunction(0x38D8D0u)) {
        auto targetFn = runtime->lookupFunction(0x38D8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAB7Cu; }
        if (ctx->pc != 0x3BAB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D8D0_0x38d8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAB7Cu; }
        if (ctx->pc != 0x3BAB7Cu) { return; }
    }
    ctx->pc = 0x3BAB7Cu;
label_3bab7c:
    // 0x3bab7c: 0x0  nop
    ctx->pc = 0x3bab7cu;
    // NOP
label_3bab80:
    // 0x3bab80: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3bab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3bab84:
    // 0x3bab84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3bab84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3bab88:
    // 0x3bab88: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3bab88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bab8c:
    // 0x3bab8c: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_3bab90:
    if (ctx->pc == 0x3BAB90u) {
        ctx->pc = 0x3BAB90u;
            // 0x3bab90: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x3BAB94u;
        goto label_3bab94;
    }
    ctx->pc = 0x3BAB8Cu;
    {
        const bool branch_taken_0x3bab8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAB8Cu;
            // 0x3bab90: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab8c) {
            ctx->pc = 0x3BAB14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3bab14;
        }
    }
    ctx->pc = 0x3BAB94u;
label_3bab94:
    // 0x3bab94: 0x10000024  b           . + 4 + (0x24 << 2)
label_3bab98:
    if (ctx->pc == 0x3BAB98u) {
        ctx->pc = 0x3BAB9Cu;
        goto label_3bab9c;
    }
    ctx->pc = 0x3BAB94u;
    {
        const bool branch_taken_0x3bab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bab94) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BAB9Cu;
label_3bab9c:
    // 0x3bab9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3baba0:
    // 0x3baba0: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x3baba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_3baba4:
    // 0x3baba4: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3baba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3baba8:
    // 0x3baba8: 0xc0bd4bc  jal         func_2F52F0
label_3babac:
    if (ctx->pc == 0x3BABACu) {
        ctx->pc = 0x3BABACu;
            // 0x3babac: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->pc = 0x3BABB0u;
        goto label_3babb0;
    }
    ctx->pc = 0x3BABA8u;
    SET_GPR_U32(ctx, 31, 0x3BABB0u);
    ctx->pc = 0x3BABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BABA8u;
            // 0x3babac: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F52F0u;
    if (runtime->hasFunction(0x2F52F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BABB0u; }
        if (ctx->pc != 0x3BABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F52F0_0x2f52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BABB0u; }
        if (ctx->pc != 0x3BABB0u) { return; }
    }
    ctx->pc = 0x3BABB0u;
label_3babb0:
    // 0x3babb0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3babb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3babb4:
    // 0x3babb4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3babb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3babb8:
    // 0x3babb8: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_3babbc:
    if (ctx->pc == 0x3BABBCu) {
        ctx->pc = 0x3BABBCu;
            // 0x3babbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BABC0u;
        goto label_3babc0;
    }
    ctx->pc = 0x3BABB8u;
    {
        const bool branch_taken_0x3babb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BABB8u;
            // 0x3babbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3babb8) {
            ctx->pc = 0x3BAC28u;
            goto label_3bac28;
        }
    }
    ctx->pc = 0x3BABC0u;
label_3babc0:
    // 0x3babc0: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3babc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3babc4:
    // 0x3babc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3babc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3babc8:
    // 0x3babc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3babc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3babcc:
    // 0x3babcc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3babccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3babd0:
    // 0x3babd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3babd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3babd4:
    // 0x3babd4: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x3babd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_3babd8:
    // 0x3babd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3babd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3babdc:
    // 0x3babdc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3babe0:
    if (ctx->pc == 0x3BABE0u) {
        ctx->pc = 0x3BABE0u;
            // 0x3babe0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BABE4u;
        goto label_3babe4;
    }
    ctx->pc = 0x3BABDCu;
    {
        const bool branch_taken_0x3babdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3babdc) {
            ctx->pc = 0x3BABE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BABDCu;
            // 0x3babe0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BABF0u;
            goto label_3babf0;
        }
    }
    ctx->pc = 0x3BABE4u;
label_3babe4:
    // 0x3babe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3babe8:
    if (ctx->pc == 0x3BABE8u) {
        ctx->pc = 0x3BABE8u;
            // 0x3babe8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x3BABECu;
        goto label_3babec;
    }
    ctx->pc = 0x3BABE4u;
    {
        const bool branch_taken_0x3babe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BABE4u;
            // 0x3babe8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3babe4) {
            ctx->pc = 0x3BABF0u;
            goto label_3babf0;
        }
    }
    ctx->pc = 0x3BABECu;
label_3babec:
    // 0x3babec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3babecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3babf0:
    // 0x3babf0: 0x9083004c  lbu         $v1, 0x4C($a0)
    ctx->pc = 0x3babf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
label_3babf4:
    // 0x3babf4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3babf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3babf8:
    // 0x3babf8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3babfc:
    if (ctx->pc == 0x3BABFCu) {
        ctx->pc = 0x3BAC00u;
        goto label_3bac00;
    }
    ctx->pc = 0x3BABF8u;
    {
        const bool branch_taken_0x3babf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3babf8) {
            ctx->pc = 0x3BAC08u;
            goto label_3bac08;
        }
    }
    ctx->pc = 0x3BAC00u;
label_3bac00:
    // 0x3bac00: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
label_3bac04:
    if (ctx->pc == 0x3BAC04u) {
        ctx->pc = 0x3BAC08u;
        goto label_3bac08;
    }
    ctx->pc = 0x3BAC00u;
    {
        const bool branch_taken_0x3bac00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bac00) {
            ctx->pc = 0x3BAC10u;
            goto label_3bac10;
        }
    }
    ctx->pc = 0x3BAC08u;
label_3bac08:
    // 0x3bac08: 0xc0e3634  jal         func_38D8D0
label_3bac0c:
    if (ctx->pc == 0x3BAC0Cu) {
        ctx->pc = 0x3BAC0Cu;
            // 0x3bac0c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3BAC10u;
        goto label_3bac10;
    }
    ctx->pc = 0x3BAC08u;
    SET_GPR_U32(ctx, 31, 0x3BAC10u);
    ctx->pc = 0x3BAC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAC08u;
            // 0x3bac0c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D8D0u;
    if (runtime->hasFunction(0x38D8D0u)) {
        auto targetFn = runtime->lookupFunction(0x38D8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAC10u; }
        if (ctx->pc != 0x3BAC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D8D0_0x38d8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAC10u; }
        if (ctx->pc != 0x3BAC10u) { return; }
    }
    ctx->pc = 0x3BAC10u;
label_3bac10:
    // 0x3bac10: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3bac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3bac14:
    // 0x3bac14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3bac14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3bac18:
    // 0x3bac18: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3bac18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bac1c:
    // 0x3bac1c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3bac20:
    if (ctx->pc == 0x3BAC20u) {
        ctx->pc = 0x3BAC20u;
            // 0x3bac20: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x3BAC24u;
        goto label_3bac24;
    }
    ctx->pc = 0x3BAC1Cu;
    {
        const bool branch_taken_0x3bac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAC1Cu;
            // 0x3bac20: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bac1c) {
            ctx->pc = 0x3BABC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3babc8;
        }
    }
    ctx->pc = 0x3BAC24u;
label_3bac24:
    // 0x3bac24: 0x0  nop
    ctx->pc = 0x3bac24u;
    // NOP
label_3bac28:
    // 0x3bac28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3bac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3bac2c:
    // 0x3bac2c: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x3bac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
label_3bac30:
    // 0x3bac30: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x3bac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_3bac34:
    // 0x3bac34: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3bac34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_3bac38:
    // 0x3bac38: 0xc07f7a4  jal         func_1FDE90
label_3bac3c:
    if (ctx->pc == 0x3BAC3Cu) {
        ctx->pc = 0x3BAC3Cu;
            // 0x3bac3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3BAC40u;
        goto label_3bac40;
    }
    ctx->pc = 0x3BAC38u;
    SET_GPR_U32(ctx, 31, 0x3BAC40u);
    ctx->pc = 0x3BAC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAC38u;
            // 0x3bac3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDE90u;
    if (runtime->hasFunction(0x1FDE90u)) {
        auto targetFn = runtime->lookupFunction(0x1FDE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAC40u; }
        if (ctx->pc != 0x3BAC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDE90_0x1fde90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAC40u; }
        if (ctx->pc != 0x3BAC40u) { return; }
    }
    ctx->pc = 0x3BAC40u;
label_3bac40:
    // 0x3bac40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3bac44:
    // 0x3bac44: 0xc0793f4  jal         func_1E4FD0
label_3bac48:
    if (ctx->pc == 0x3BAC48u) {
        ctx->pc = 0x3BAC48u;
            // 0x3bac48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BAC4Cu;
        goto label_3bac4c;
    }
    ctx->pc = 0x3BAC44u;
    SET_GPR_U32(ctx, 31, 0x3BAC4Cu);
    ctx->pc = 0x3BAC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAC44u;
            // 0x3bac48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4FD0u;
    if (runtime->hasFunction(0x1E4FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E4FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAC4Cu; }
        if (ctx->pc != 0x3BAC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4FD0_0x1e4fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAC4Cu; }
        if (ctx->pc != 0x3BAC4Cu) { return; }
    }
    ctx->pc = 0x3BAC4Cu;
label_3bac4c:
    // 0x3bac4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3bac4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3bac50:
    // 0x3bac50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bac50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bac54:
    // 0x3bac54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bac54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bac58:
    // 0x3bac58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bac58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bac5c:
    // 0x3bac5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bac5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bac60:
    // 0x3bac60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bac60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bac64:
    // 0x3bac64: 0x3e00008  jr          $ra
label_3bac68:
    if (ctx->pc == 0x3BAC68u) {
        ctx->pc = 0x3BAC68u;
            // 0x3bac68: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x3BAC6Cu;
        goto label_3bac6c;
    }
    ctx->pc = 0x3BAC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAC64u;
            // 0x3bac68: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BAC6Cu;
label_3bac6c:
    // 0x3bac6c: 0x0  nop
    ctx->pc = 0x3bac6cu;
    // NOP
}
