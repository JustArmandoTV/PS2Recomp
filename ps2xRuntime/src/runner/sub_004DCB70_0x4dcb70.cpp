#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DCB70
// Address: 0x4dcb70 - 0x4dcfc0
void sub_004DCB70_0x4dcb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCB70_0x4dcb70");
#endif

    switch (ctx->pc) {
        case 0x4dcb70u: goto label_4dcb70;
        case 0x4dcb74u: goto label_4dcb74;
        case 0x4dcb78u: goto label_4dcb78;
        case 0x4dcb7cu: goto label_4dcb7c;
        case 0x4dcb80u: goto label_4dcb80;
        case 0x4dcb84u: goto label_4dcb84;
        case 0x4dcb88u: goto label_4dcb88;
        case 0x4dcb8cu: goto label_4dcb8c;
        case 0x4dcb90u: goto label_4dcb90;
        case 0x4dcb94u: goto label_4dcb94;
        case 0x4dcb98u: goto label_4dcb98;
        case 0x4dcb9cu: goto label_4dcb9c;
        case 0x4dcba0u: goto label_4dcba0;
        case 0x4dcba4u: goto label_4dcba4;
        case 0x4dcba8u: goto label_4dcba8;
        case 0x4dcbacu: goto label_4dcbac;
        case 0x4dcbb0u: goto label_4dcbb0;
        case 0x4dcbb4u: goto label_4dcbb4;
        case 0x4dcbb8u: goto label_4dcbb8;
        case 0x4dcbbcu: goto label_4dcbbc;
        case 0x4dcbc0u: goto label_4dcbc0;
        case 0x4dcbc4u: goto label_4dcbc4;
        case 0x4dcbc8u: goto label_4dcbc8;
        case 0x4dcbccu: goto label_4dcbcc;
        case 0x4dcbd0u: goto label_4dcbd0;
        case 0x4dcbd4u: goto label_4dcbd4;
        case 0x4dcbd8u: goto label_4dcbd8;
        case 0x4dcbdcu: goto label_4dcbdc;
        case 0x4dcbe0u: goto label_4dcbe0;
        case 0x4dcbe4u: goto label_4dcbe4;
        case 0x4dcbe8u: goto label_4dcbe8;
        case 0x4dcbecu: goto label_4dcbec;
        case 0x4dcbf0u: goto label_4dcbf0;
        case 0x4dcbf4u: goto label_4dcbf4;
        case 0x4dcbf8u: goto label_4dcbf8;
        case 0x4dcbfcu: goto label_4dcbfc;
        case 0x4dcc00u: goto label_4dcc00;
        case 0x4dcc04u: goto label_4dcc04;
        case 0x4dcc08u: goto label_4dcc08;
        case 0x4dcc0cu: goto label_4dcc0c;
        case 0x4dcc10u: goto label_4dcc10;
        case 0x4dcc14u: goto label_4dcc14;
        case 0x4dcc18u: goto label_4dcc18;
        case 0x4dcc1cu: goto label_4dcc1c;
        case 0x4dcc20u: goto label_4dcc20;
        case 0x4dcc24u: goto label_4dcc24;
        case 0x4dcc28u: goto label_4dcc28;
        case 0x4dcc2cu: goto label_4dcc2c;
        case 0x4dcc30u: goto label_4dcc30;
        case 0x4dcc34u: goto label_4dcc34;
        case 0x4dcc38u: goto label_4dcc38;
        case 0x4dcc3cu: goto label_4dcc3c;
        case 0x4dcc40u: goto label_4dcc40;
        case 0x4dcc44u: goto label_4dcc44;
        case 0x4dcc48u: goto label_4dcc48;
        case 0x4dcc4cu: goto label_4dcc4c;
        case 0x4dcc50u: goto label_4dcc50;
        case 0x4dcc54u: goto label_4dcc54;
        case 0x4dcc58u: goto label_4dcc58;
        case 0x4dcc5cu: goto label_4dcc5c;
        case 0x4dcc60u: goto label_4dcc60;
        case 0x4dcc64u: goto label_4dcc64;
        case 0x4dcc68u: goto label_4dcc68;
        case 0x4dcc6cu: goto label_4dcc6c;
        case 0x4dcc70u: goto label_4dcc70;
        case 0x4dcc74u: goto label_4dcc74;
        case 0x4dcc78u: goto label_4dcc78;
        case 0x4dcc7cu: goto label_4dcc7c;
        case 0x4dcc80u: goto label_4dcc80;
        case 0x4dcc84u: goto label_4dcc84;
        case 0x4dcc88u: goto label_4dcc88;
        case 0x4dcc8cu: goto label_4dcc8c;
        case 0x4dcc90u: goto label_4dcc90;
        case 0x4dcc94u: goto label_4dcc94;
        case 0x4dcc98u: goto label_4dcc98;
        case 0x4dcc9cu: goto label_4dcc9c;
        case 0x4dcca0u: goto label_4dcca0;
        case 0x4dcca4u: goto label_4dcca4;
        case 0x4dcca8u: goto label_4dcca8;
        case 0x4dccacu: goto label_4dccac;
        case 0x4dccb0u: goto label_4dccb0;
        case 0x4dccb4u: goto label_4dccb4;
        case 0x4dccb8u: goto label_4dccb8;
        case 0x4dccbcu: goto label_4dccbc;
        case 0x4dccc0u: goto label_4dccc0;
        case 0x4dccc4u: goto label_4dccc4;
        case 0x4dccc8u: goto label_4dccc8;
        case 0x4dccccu: goto label_4dcccc;
        case 0x4dccd0u: goto label_4dccd0;
        case 0x4dccd4u: goto label_4dccd4;
        case 0x4dccd8u: goto label_4dccd8;
        case 0x4dccdcu: goto label_4dccdc;
        case 0x4dcce0u: goto label_4dcce0;
        case 0x4dcce4u: goto label_4dcce4;
        case 0x4dcce8u: goto label_4dcce8;
        case 0x4dccecu: goto label_4dccec;
        case 0x4dccf0u: goto label_4dccf0;
        case 0x4dccf4u: goto label_4dccf4;
        case 0x4dccf8u: goto label_4dccf8;
        case 0x4dccfcu: goto label_4dccfc;
        case 0x4dcd00u: goto label_4dcd00;
        case 0x4dcd04u: goto label_4dcd04;
        case 0x4dcd08u: goto label_4dcd08;
        case 0x4dcd0cu: goto label_4dcd0c;
        case 0x4dcd10u: goto label_4dcd10;
        case 0x4dcd14u: goto label_4dcd14;
        case 0x4dcd18u: goto label_4dcd18;
        case 0x4dcd1cu: goto label_4dcd1c;
        case 0x4dcd20u: goto label_4dcd20;
        case 0x4dcd24u: goto label_4dcd24;
        case 0x4dcd28u: goto label_4dcd28;
        case 0x4dcd2cu: goto label_4dcd2c;
        case 0x4dcd30u: goto label_4dcd30;
        case 0x4dcd34u: goto label_4dcd34;
        case 0x4dcd38u: goto label_4dcd38;
        case 0x4dcd3cu: goto label_4dcd3c;
        case 0x4dcd40u: goto label_4dcd40;
        case 0x4dcd44u: goto label_4dcd44;
        case 0x4dcd48u: goto label_4dcd48;
        case 0x4dcd4cu: goto label_4dcd4c;
        case 0x4dcd50u: goto label_4dcd50;
        case 0x4dcd54u: goto label_4dcd54;
        case 0x4dcd58u: goto label_4dcd58;
        case 0x4dcd5cu: goto label_4dcd5c;
        case 0x4dcd60u: goto label_4dcd60;
        case 0x4dcd64u: goto label_4dcd64;
        case 0x4dcd68u: goto label_4dcd68;
        case 0x4dcd6cu: goto label_4dcd6c;
        case 0x4dcd70u: goto label_4dcd70;
        case 0x4dcd74u: goto label_4dcd74;
        case 0x4dcd78u: goto label_4dcd78;
        case 0x4dcd7cu: goto label_4dcd7c;
        case 0x4dcd80u: goto label_4dcd80;
        case 0x4dcd84u: goto label_4dcd84;
        case 0x4dcd88u: goto label_4dcd88;
        case 0x4dcd8cu: goto label_4dcd8c;
        case 0x4dcd90u: goto label_4dcd90;
        case 0x4dcd94u: goto label_4dcd94;
        case 0x4dcd98u: goto label_4dcd98;
        case 0x4dcd9cu: goto label_4dcd9c;
        case 0x4dcda0u: goto label_4dcda0;
        case 0x4dcda4u: goto label_4dcda4;
        case 0x4dcda8u: goto label_4dcda8;
        case 0x4dcdacu: goto label_4dcdac;
        case 0x4dcdb0u: goto label_4dcdb0;
        case 0x4dcdb4u: goto label_4dcdb4;
        case 0x4dcdb8u: goto label_4dcdb8;
        case 0x4dcdbcu: goto label_4dcdbc;
        case 0x4dcdc0u: goto label_4dcdc0;
        case 0x4dcdc4u: goto label_4dcdc4;
        case 0x4dcdc8u: goto label_4dcdc8;
        case 0x4dcdccu: goto label_4dcdcc;
        case 0x4dcdd0u: goto label_4dcdd0;
        case 0x4dcdd4u: goto label_4dcdd4;
        case 0x4dcdd8u: goto label_4dcdd8;
        case 0x4dcddcu: goto label_4dcddc;
        case 0x4dcde0u: goto label_4dcde0;
        case 0x4dcde4u: goto label_4dcde4;
        case 0x4dcde8u: goto label_4dcde8;
        case 0x4dcdecu: goto label_4dcdec;
        case 0x4dcdf0u: goto label_4dcdf0;
        case 0x4dcdf4u: goto label_4dcdf4;
        case 0x4dcdf8u: goto label_4dcdf8;
        case 0x4dcdfcu: goto label_4dcdfc;
        case 0x4dce00u: goto label_4dce00;
        case 0x4dce04u: goto label_4dce04;
        case 0x4dce08u: goto label_4dce08;
        case 0x4dce0cu: goto label_4dce0c;
        case 0x4dce10u: goto label_4dce10;
        case 0x4dce14u: goto label_4dce14;
        case 0x4dce18u: goto label_4dce18;
        case 0x4dce1cu: goto label_4dce1c;
        case 0x4dce20u: goto label_4dce20;
        case 0x4dce24u: goto label_4dce24;
        case 0x4dce28u: goto label_4dce28;
        case 0x4dce2cu: goto label_4dce2c;
        case 0x4dce30u: goto label_4dce30;
        case 0x4dce34u: goto label_4dce34;
        case 0x4dce38u: goto label_4dce38;
        case 0x4dce3cu: goto label_4dce3c;
        case 0x4dce40u: goto label_4dce40;
        case 0x4dce44u: goto label_4dce44;
        case 0x4dce48u: goto label_4dce48;
        case 0x4dce4cu: goto label_4dce4c;
        case 0x4dce50u: goto label_4dce50;
        case 0x4dce54u: goto label_4dce54;
        case 0x4dce58u: goto label_4dce58;
        case 0x4dce5cu: goto label_4dce5c;
        case 0x4dce60u: goto label_4dce60;
        case 0x4dce64u: goto label_4dce64;
        case 0x4dce68u: goto label_4dce68;
        case 0x4dce6cu: goto label_4dce6c;
        case 0x4dce70u: goto label_4dce70;
        case 0x4dce74u: goto label_4dce74;
        case 0x4dce78u: goto label_4dce78;
        case 0x4dce7cu: goto label_4dce7c;
        case 0x4dce80u: goto label_4dce80;
        case 0x4dce84u: goto label_4dce84;
        case 0x4dce88u: goto label_4dce88;
        case 0x4dce8cu: goto label_4dce8c;
        case 0x4dce90u: goto label_4dce90;
        case 0x4dce94u: goto label_4dce94;
        case 0x4dce98u: goto label_4dce98;
        case 0x4dce9cu: goto label_4dce9c;
        case 0x4dcea0u: goto label_4dcea0;
        case 0x4dcea4u: goto label_4dcea4;
        case 0x4dcea8u: goto label_4dcea8;
        case 0x4dceacu: goto label_4dceac;
        case 0x4dceb0u: goto label_4dceb0;
        case 0x4dceb4u: goto label_4dceb4;
        case 0x4dceb8u: goto label_4dceb8;
        case 0x4dcebcu: goto label_4dcebc;
        case 0x4dcec0u: goto label_4dcec0;
        case 0x4dcec4u: goto label_4dcec4;
        case 0x4dcec8u: goto label_4dcec8;
        case 0x4dceccu: goto label_4dcecc;
        case 0x4dced0u: goto label_4dced0;
        case 0x4dced4u: goto label_4dced4;
        case 0x4dced8u: goto label_4dced8;
        case 0x4dcedcu: goto label_4dcedc;
        case 0x4dcee0u: goto label_4dcee0;
        case 0x4dcee4u: goto label_4dcee4;
        case 0x4dcee8u: goto label_4dcee8;
        case 0x4dceecu: goto label_4dceec;
        case 0x4dcef0u: goto label_4dcef0;
        case 0x4dcef4u: goto label_4dcef4;
        case 0x4dcef8u: goto label_4dcef8;
        case 0x4dcefcu: goto label_4dcefc;
        case 0x4dcf00u: goto label_4dcf00;
        case 0x4dcf04u: goto label_4dcf04;
        case 0x4dcf08u: goto label_4dcf08;
        case 0x4dcf0cu: goto label_4dcf0c;
        case 0x4dcf10u: goto label_4dcf10;
        case 0x4dcf14u: goto label_4dcf14;
        case 0x4dcf18u: goto label_4dcf18;
        case 0x4dcf1cu: goto label_4dcf1c;
        case 0x4dcf20u: goto label_4dcf20;
        case 0x4dcf24u: goto label_4dcf24;
        case 0x4dcf28u: goto label_4dcf28;
        case 0x4dcf2cu: goto label_4dcf2c;
        case 0x4dcf30u: goto label_4dcf30;
        case 0x4dcf34u: goto label_4dcf34;
        case 0x4dcf38u: goto label_4dcf38;
        case 0x4dcf3cu: goto label_4dcf3c;
        case 0x4dcf40u: goto label_4dcf40;
        case 0x4dcf44u: goto label_4dcf44;
        case 0x4dcf48u: goto label_4dcf48;
        case 0x4dcf4cu: goto label_4dcf4c;
        case 0x4dcf50u: goto label_4dcf50;
        case 0x4dcf54u: goto label_4dcf54;
        case 0x4dcf58u: goto label_4dcf58;
        case 0x4dcf5cu: goto label_4dcf5c;
        case 0x4dcf60u: goto label_4dcf60;
        case 0x4dcf64u: goto label_4dcf64;
        case 0x4dcf68u: goto label_4dcf68;
        case 0x4dcf6cu: goto label_4dcf6c;
        case 0x4dcf70u: goto label_4dcf70;
        case 0x4dcf74u: goto label_4dcf74;
        case 0x4dcf78u: goto label_4dcf78;
        case 0x4dcf7cu: goto label_4dcf7c;
        case 0x4dcf80u: goto label_4dcf80;
        case 0x4dcf84u: goto label_4dcf84;
        case 0x4dcf88u: goto label_4dcf88;
        case 0x4dcf8cu: goto label_4dcf8c;
        case 0x4dcf90u: goto label_4dcf90;
        case 0x4dcf94u: goto label_4dcf94;
        case 0x4dcf98u: goto label_4dcf98;
        case 0x4dcf9cu: goto label_4dcf9c;
        case 0x4dcfa0u: goto label_4dcfa0;
        case 0x4dcfa4u: goto label_4dcfa4;
        case 0x4dcfa8u: goto label_4dcfa8;
        case 0x4dcfacu: goto label_4dcfac;
        case 0x4dcfb0u: goto label_4dcfb0;
        case 0x4dcfb4u: goto label_4dcfb4;
        case 0x4dcfb8u: goto label_4dcfb8;
        case 0x4dcfbcu: goto label_4dcfbc;
        default: break;
    }

    ctx->pc = 0x4dcb70u;

label_4dcb70:
    // 0x4dcb70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dcb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4dcb74:
    // 0x4dcb74: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4dcb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dcb78:
    // 0x4dcb78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4dcb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4dcb7c:
    // 0x4dcb7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dcb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dcb80:
    // 0x4dcb80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dcb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dcb84:
    // 0x4dcb84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4dcb84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dcb88:
    // 0x4dcb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dcb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dcb8c:
    // 0x4dcb8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dcb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dcb90:
    // 0x4dcb90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dcb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dcb94:
    // 0x4dcb94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4dcb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dcb98:
    // 0x4dcb98: 0xc10ca68  jal         func_4329A0
label_4dcb9c:
    if (ctx->pc == 0x4DCB9Cu) {
        ctx->pc = 0x4DCB9Cu;
            // 0x4dcb9c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4DCBA0u;
        goto label_4dcba0;
    }
    ctx->pc = 0x4DCB98u;
    SET_GPR_U32(ctx, 31, 0x4DCBA0u);
    ctx->pc = 0x4DCB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCB98u;
            // 0x4dcb9c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCBA0u; }
        if (ctx->pc != 0x4DCBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCBA0u; }
        if (ctx->pc != 0x4DCBA0u) { return; }
    }
    ctx->pc = 0x4DCBA0u;
label_4dcba0:
    // 0x4dcba0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4dcba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4dcba4:
    // 0x4dcba4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4dcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4dcba8:
    // 0x4dcba8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4dcba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4dcbac:
    // 0x4dcbac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4dcbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4dcbb0:
    // 0x4dcbb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4dcbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4dcbb4:
    // 0x4dcbb4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4dcbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4dcbb8:
    // 0x4dcbb8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4dcbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4dcbbc:
    // 0x4dcbbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4dcbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4dcbc0:
    // 0x4dcbc0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4dcbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4dcbc4:
    // 0x4dcbc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dcbc8:
    // 0x4dcbc8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4dcbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4dcbcc:
    // 0x4dcbcc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4dcbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dcbd0:
    // 0x4dcbd0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4dcbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4dcbd4:
    // 0x4dcbd4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4dcbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4dcbd8:
    // 0x4dcbd8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4dcbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4dcbdc:
    // 0x4dcbdc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4dcbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4dcbe0:
    // 0x4dcbe0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4dcbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4dcbe4:
    // 0x4dcbe4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4dcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4dcbe8:
    // 0x4dcbe8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4dcbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4dcbec:
    // 0x4dcbec: 0xc0582cc  jal         func_160B30
label_4dcbf0:
    if (ctx->pc == 0x4DCBF0u) {
        ctx->pc = 0x4DCBF0u;
            // 0x4dcbf0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4DCBF4u;
        goto label_4dcbf4;
    }
    ctx->pc = 0x4DCBECu;
    SET_GPR_U32(ctx, 31, 0x4DCBF4u);
    ctx->pc = 0x4DCBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCBECu;
            // 0x4dcbf0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCBF4u; }
        if (ctx->pc != 0x4DCBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCBF4u; }
        if (ctx->pc != 0x4DCBF4u) { return; }
    }
    ctx->pc = 0x4DCBF4u;
label_4dcbf4:
    // 0x4dcbf4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dcbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dcbf8:
    // 0x4dcbf8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4dcbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4dcbfc:
    // 0x4dcbfc: 0x24632d18  addiu       $v1, $v1, 0x2D18
    ctx->pc = 0x4dcbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11544));
label_4dcc00:
    // 0x4dcc00: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4dcc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4dcc04:
    // 0x4dcc04: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4dcc04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4dcc08:
    // 0x4dcc08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dcc0c:
    // 0x4dcc0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dcc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dcc10:
    // 0x4dcc10: 0xac4464b0  sw          $a0, 0x64B0($v0)
    ctx->pc = 0x4dcc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25776), GPR_U32(ctx, 4));
label_4dcc14:
    // 0x4dcc14: 0x24632d30  addiu       $v1, $v1, 0x2D30
    ctx->pc = 0x4dcc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11568));
label_4dcc18:
    // 0x4dcc18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dcc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dcc1c:
    // 0x4dcc1c: 0x24422d68  addiu       $v0, $v0, 0x2D68
    ctx->pc = 0x4dcc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11624));
label_4dcc20:
    // 0x4dcc20: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4dcc20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4dcc24:
    // 0x4dcc24: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4dcc24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4dcc28:
    // 0x4dcc28: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4dcc28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4dcc2c:
    // 0x4dcc2c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4dcc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4dcc30:
    // 0x4dcc30: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4dcc30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4dcc34:
    // 0x4dcc34: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4dcc34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4dcc38:
    // 0x4dcc38: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4dcc38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4dcc3c:
    // 0x4dcc3c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4dcc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4dcc40:
    // 0x4dcc40: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4dcc40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4dcc44:
    // 0x4dcc44: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4dcc44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4dcc48:
    // 0x4dcc48: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4dcc48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4dcc4c:
    // 0x4dcc4c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4dcc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4dcc50:
    // 0x4dcc50: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4dcc50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_4dcc54:
    // 0x4dcc54: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4dcc54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_4dcc58:
    // 0x4dcc58: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x4dcc58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_4dcc5c:
    // 0x4dcc5c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x4dcc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_4dcc60:
    // 0x4dcc60: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x4dcc60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_4dcc64:
    // 0x4dcc64: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x4dcc64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_4dcc68:
    // 0x4dcc68: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4dcc68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4dcc6c:
    // 0x4dcc6c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_4dcc70:
    if (ctx->pc == 0x4DCC70u) {
        ctx->pc = 0x4DCC74u;
        goto label_4dcc74;
    }
    ctx->pc = 0x4DCC6Cu;
    {
        const bool branch_taken_0x4dcc6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dcc6c) {
            ctx->pc = 0x4DCD08u;
            goto label_4dcd08;
        }
    }
    ctx->pc = 0x4DCC74u;
label_4dcc74:
    // 0x4dcc74: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4dcc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4dcc78:
    // 0x4dcc78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4dcc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4dcc7c:
    // 0x4dcc7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4dcc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4dcc80:
    // 0x4dcc80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4dcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4dcc84:
    // 0x4dcc84: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4dcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4dcc88:
    // 0x4dcc88: 0xc040138  jal         func_1004E0
label_4dcc8c:
    if (ctx->pc == 0x4DCC8Cu) {
        ctx->pc = 0x4DCC8Cu;
            // 0x4dcc8c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4DCC90u;
        goto label_4dcc90;
    }
    ctx->pc = 0x4DCC88u;
    SET_GPR_U32(ctx, 31, 0x4DCC90u);
    ctx->pc = 0x4DCC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCC88u;
            // 0x4dcc8c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCC90u; }
        if (ctx->pc != 0x4DCC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCC90u; }
        if (ctx->pc != 0x4DCC90u) { return; }
    }
    ctx->pc = 0x4DCC90u;
label_4dcc90:
    // 0x4dcc90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4dcc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4dcc94:
    // 0x4dcc94: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4dcc94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4dcc98:
    // 0x4dcc98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dcc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dcc9c:
    // 0x4dcc9c: 0x24a5cd30  addiu       $a1, $a1, -0x32D0
    ctx->pc = 0x4dcc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954288));
label_4dcca0:
    // 0x4dcca0: 0x24c6c120  addiu       $a2, $a2, -0x3EE0
    ctx->pc = 0x4dcca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951200));
label_4dcca4:
    // 0x4dcca4: 0x240701a0  addiu       $a3, $zero, 0x1A0
    ctx->pc = 0x4dcca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_4dcca8:
    // 0x4dcca8: 0xc040840  jal         func_102100
label_4dccac:
    if (ctx->pc == 0x4DCCACu) {
        ctx->pc = 0x4DCCACu;
            // 0x4dccac: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCCB0u;
        goto label_4dccb0;
    }
    ctx->pc = 0x4DCCA8u;
    SET_GPR_U32(ctx, 31, 0x4DCCB0u);
    ctx->pc = 0x4DCCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCCA8u;
            // 0x4dccac: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCCB0u; }
        if (ctx->pc != 0x4DCCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCCB0u; }
        if (ctx->pc != 0x4DCCB0u) { return; }
    }
    ctx->pc = 0x4DCCB0u;
label_4dccb0:
    // 0x4dccb0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4dccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4dccb4:
    // 0x4dccb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4dccb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dccb8:
    // 0x4dccb8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4dccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4dccbc:
    // 0x4dccbc: 0xc0788fc  jal         func_1E23F0
label_4dccc0:
    if (ctx->pc == 0x4DCCC0u) {
        ctx->pc = 0x4DCCC0u;
            // 0x4dccc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCCC4u;
        goto label_4dccc4;
    }
    ctx->pc = 0x4DCCBCu;
    SET_GPR_U32(ctx, 31, 0x4DCCC4u);
    ctx->pc = 0x4DCCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCCBCu;
            // 0x4dccc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCCC4u; }
        if (ctx->pc != 0x4DCCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCCC4u; }
        if (ctx->pc != 0x4DCCC4u) { return; }
    }
    ctx->pc = 0x4DCCC4u;
label_4dccc4:
    // 0x4dccc4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4dccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4dccc8:
    // 0x4dccc8: 0xc0788fc  jal         func_1E23F0
label_4dcccc:
    if (ctx->pc == 0x4DCCCCu) {
        ctx->pc = 0x4DCCCCu;
            // 0x4dcccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCCD0u;
        goto label_4dccd0;
    }
    ctx->pc = 0x4DCCC8u;
    SET_GPR_U32(ctx, 31, 0x4DCCD0u);
    ctx->pc = 0x4DCCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCCC8u;
            // 0x4dcccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCCD0u; }
        if (ctx->pc != 0x4DCCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCCD0u; }
        if (ctx->pc != 0x4DCCD0u) { return; }
    }
    ctx->pc = 0x4DCCD0u;
label_4dccd0:
    // 0x4dccd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4dccd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dccd4:
    // 0x4dccd4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4dccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4dccd8:
    // 0x4dccd8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4dccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4dccdc:
    // 0x4dccdc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4dccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4dcce0:
    // 0x4dcce0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4dcce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dcce4:
    // 0x4dcce4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4dcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4dcce8:
    // 0x4dcce8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4dcce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4dccec:
    // 0x4dccec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dccecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dccf0:
    // 0x4dccf0: 0xc0a997c  jal         func_2A65F0
label_4dccf4:
    if (ctx->pc == 0x4DCCF4u) {
        ctx->pc = 0x4DCCF4u;
            // 0x4dccf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4DCCF8u;
        goto label_4dccf8;
    }
    ctx->pc = 0x4DCCF0u;
    SET_GPR_U32(ctx, 31, 0x4DCCF8u);
    ctx->pc = 0x4DCCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCCF0u;
            // 0x4dccf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCCF8u; }
        if (ctx->pc != 0x4DCCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCCF8u; }
        if (ctx->pc != 0x4DCCF8u) { return; }
    }
    ctx->pc = 0x4DCCF8u;
label_4dccf8:
    // 0x4dccf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4dccf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4dccfc:
    // 0x4dccfc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4dccfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4dcd00:
    // 0x4dcd00: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4dcd04:
    if (ctx->pc == 0x4DCD04u) {
        ctx->pc = 0x4DCD04u;
            // 0x4dcd04: 0x265201a0  addiu       $s2, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->pc = 0x4DCD08u;
        goto label_4dcd08;
    }
    ctx->pc = 0x4DCD00u;
    {
        const bool branch_taken_0x4dcd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DCD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCD00u;
            // 0x4dcd04: 0x265201a0  addiu       $s2, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcd00) {
            ctx->pc = 0x4DCCD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dccd4;
        }
    }
    ctx->pc = 0x4DCD08u;
label_4dcd08:
    // 0x4dcd08: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4dcd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dcd0c:
    // 0x4dcd0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4dcd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4dcd10:
    // 0x4dcd10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dcd10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dcd14:
    // 0x4dcd14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dcd14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dcd18:
    // 0x4dcd18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dcd18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dcd1c:
    // 0x4dcd1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dcd1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcd20:
    // 0x4dcd20: 0x3e00008  jr          $ra
label_4dcd24:
    if (ctx->pc == 0x4DCD24u) {
        ctx->pc = 0x4DCD24u;
            // 0x4dcd24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DCD28u;
        goto label_4dcd28;
    }
    ctx->pc = 0x4DCD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCD20u;
            // 0x4dcd24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DCD28u;
label_4dcd28:
    // 0x4dcd28: 0x0  nop
    ctx->pc = 0x4dcd28u;
    // NOP
label_4dcd2c:
    // 0x4dcd2c: 0x0  nop
    ctx->pc = 0x4dcd2cu;
    // NOP
label_4dcd30:
    // 0x4dcd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dcd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dcd34:
    // 0x4dcd34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dcd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dcd38:
    // 0x4dcd38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dcd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dcd3c:
    // 0x4dcd3c: 0xc12e6bc  jal         func_4B9AF0
label_4dcd40:
    if (ctx->pc == 0x4DCD40u) {
        ctx->pc = 0x4DCD40u;
            // 0x4dcd40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCD44u;
        goto label_4dcd44;
    }
    ctx->pc = 0x4DCD3Cu;
    SET_GPR_U32(ctx, 31, 0x4DCD44u);
    ctx->pc = 0x4DCD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCD3Cu;
            // 0x4dcd40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCD44u; }
        if (ctx->pc != 0x4DCD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCD44u; }
        if (ctx->pc != 0x4DCD44u) { return; }
    }
    ctx->pc = 0x4DCD44u;
label_4dcd44:
    // 0x4dcd44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dcd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dcd48:
    // 0x4dcd48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dcd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dcd4c:
    // 0x4dcd4c: 0x24632c30  addiu       $v1, $v1, 0x2C30
    ctx->pc = 0x4dcd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11312));
label_4dcd50:
    // 0x4dcd50: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4dcd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4dcd54:
    // 0x4dcd54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dcd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4dcd58:
    // 0x4dcd58: 0x24422c70  addiu       $v0, $v0, 0x2C70
    ctx->pc = 0x4dcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
label_4dcd5c:
    // 0x4dcd5c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4dcd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4dcd60:
    // 0x4dcd60: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dcd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dcd64:
    // 0x4dcd64: 0x24842dd0  addiu       $a0, $a0, 0x2DD0
    ctx->pc = 0x4dcd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11728));
label_4dcd68:
    // 0x4dcd68: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x4dcd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_4dcd6c:
    // 0x4dcd6c: 0x24632e10  addiu       $v1, $v1, 0x2E10
    ctx->pc = 0x4dcd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11792));
label_4dcd70:
    // 0x4dcd70: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4dcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4dcd74:
    // 0x4dcd74: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4dcd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4dcd78:
    // 0x4dcd78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dcd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dcd7c:
    // 0x4dcd7c: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x4dcd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_4dcd80:
    // 0x4dcd80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dcd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dcd84:
    // 0x4dcd84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dcd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcd88:
    // 0x4dcd88: 0x3e00008  jr          $ra
label_4dcd8c:
    if (ctx->pc == 0x4DCD8Cu) {
        ctx->pc = 0x4DCD8Cu;
            // 0x4dcd8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DCD90u;
        goto label_4dcd90;
    }
    ctx->pc = 0x4DCD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCD88u;
            // 0x4dcd8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DCD90u;
label_4dcd90:
    // 0x4dcd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dcd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dcd94:
    // 0x4dcd94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dcd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dcd98:
    // 0x4dcd98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dcd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dcd9c:
    // 0x4dcd9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dcd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dcda0:
    // 0x4dcda0: 0x8c840190  lw          $a0, 0x190($a0)
    ctx->pc = 0x4dcda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
label_4dcda4:
    // 0x4dcda4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4dcda8:
    if (ctx->pc == 0x4DCDA8u) {
        ctx->pc = 0x4DCDA8u;
            // 0x4dcda8: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->pc = 0x4DCDACu;
        goto label_4dcdac;
    }
    ctx->pc = 0x4DCDA4u;
    {
        const bool branch_taken_0x4dcda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dcda4) {
            ctx->pc = 0x4DCDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCDA4u;
            // 0x4dcda8: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DCDC0u;
            goto label_4dcdc0;
        }
    }
    ctx->pc = 0x4DCDACu;
label_4dcdac:
    // 0x4dcdac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dcdacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dcdb0:
    // 0x4dcdb0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dcdb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dcdb4:
    // 0x4dcdb4: 0x320f809  jalr        $t9
label_4dcdb8:
    if (ctx->pc == 0x4DCDB8u) {
        ctx->pc = 0x4DCDB8u;
            // 0x4dcdb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DCDBCu;
        goto label_4dcdbc;
    }
    ctx->pc = 0x4DCDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DCDBCu);
        ctx->pc = 0x4DCDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCDB4u;
            // 0x4dcdb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DCDBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DCDBCu; }
            if (ctx->pc != 0x4DCDBCu) { return; }
        }
        }
    }
    ctx->pc = 0x4DCDBCu;
label_4dcdbc:
    // 0x4dcdbc: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x4dcdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_4dcdc0:
    // 0x4dcdc0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4dcdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dcdc4:
    // 0x4dcdc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4dcdc8:
    if (ctx->pc == 0x4DCDC8u) {
        ctx->pc = 0x4DCDC8u;
            // 0x4dcdc8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4DCDCCu;
        goto label_4dcdcc;
    }
    ctx->pc = 0x4DCDC4u;
    {
        const bool branch_taken_0x4dcdc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dcdc4) {
            ctx->pc = 0x4DCDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCDC4u;
            // 0x4dcdc8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DCDE0u;
            goto label_4dcde0;
        }
    }
    ctx->pc = 0x4DCDCCu;
label_4dcdcc:
    // 0x4dcdcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dcdccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dcdd0:
    // 0x4dcdd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dcdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dcdd4:
    // 0x4dcdd4: 0x320f809  jalr        $t9
label_4dcdd8:
    if (ctx->pc == 0x4DCDD8u) {
        ctx->pc = 0x4DCDD8u;
            // 0x4dcdd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DCDDCu;
        goto label_4dcddc;
    }
    ctx->pc = 0x4DCDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DCDDCu);
        ctx->pc = 0x4DCDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCDD4u;
            // 0x4dcdd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DCDDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DCDDCu; }
            if (ctx->pc != 0x4DCDDCu) { return; }
        }
        }
    }
    ctx->pc = 0x4DCDDCu;
label_4dcddc:
    // 0x4dcddc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4dcddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4dcde0:
    // 0x4dcde0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dcde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dcde4:
    // 0x4dcde4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dcde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcde8:
    // 0x4dcde8: 0x3e00008  jr          $ra
label_4dcdec:
    if (ctx->pc == 0x4DCDECu) {
        ctx->pc = 0x4DCDECu;
            // 0x4dcdec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DCDF0u;
        goto label_4dcdf0;
    }
    ctx->pc = 0x4DCDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCDE8u;
            // 0x4dcdec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DCDF0u;
label_4dcdf0:
    // 0x4dcdf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4dcdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4dcdf4:
    // 0x4dcdf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dcdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dcdf8:
    // 0x4dcdf8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4dcdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dcdfc:
    // 0x4dcdfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dcdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dce00:
    // 0x4dce00: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4dce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dce04:
    // 0x4dce04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dce08:
    // 0x4dce08: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x4dce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4dce0c:
    // 0x4dce0c: 0xc4820128  lwc1        $f2, 0x128($a0)
    ctx->pc = 0x4dce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dce10:
    // 0x4dce10: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x4dce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dce14:
    // 0x4dce14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dce14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dce18:
    // 0x4dce18: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x4dce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dce1c:
    // 0x4dce1c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4dce1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4dce20:
    // 0x4dce20: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4dce20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4dce24:
    // 0x4dce24: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4dce24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4dce28:
    // 0x4dce28: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x4dce28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4dce2c:
    // 0x4dce2c: 0xc483013c  lwc1        $f3, 0x13C($a0)
    ctx->pc = 0x4dce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4dce30:
    // 0x4dce30: 0xc4820138  lwc1        $f2, 0x138($a0)
    ctx->pc = 0x4dce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dce34:
    // 0x4dce34: 0xc4810134  lwc1        $f1, 0x134($a0)
    ctx->pc = 0x4dce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dce38:
    // 0x4dce38: 0xc4800130  lwc1        $f0, 0x130($a0)
    ctx->pc = 0x4dce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dce3c:
    // 0x4dce3c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4dce3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4dce40:
    // 0x4dce40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dce40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dce44:
    // 0x4dce44: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4dce44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4dce48:
    // 0x4dce48: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4dce48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4dce4c:
    // 0x4dce4c: 0xc0892b0  jal         func_224AC0
label_4dce50:
    if (ctx->pc == 0x4DCE50u) {
        ctx->pc = 0x4DCE50u;
            // 0x4dce50: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x4DCE54u;
        goto label_4dce54;
    }
    ctx->pc = 0x4DCE4Cu;
    SET_GPR_U32(ctx, 31, 0x4DCE54u);
    ctx->pc = 0x4DCE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCE4Cu;
            // 0x4dce50: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCE54u; }
        if (ctx->pc != 0x4DCE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCE54u; }
        if (ctx->pc != 0x4DCE54u) { return; }
    }
    ctx->pc = 0x4DCE54u;
label_4dce54:
    // 0x4dce54: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4dce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dce58:
    // 0x4dce58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4dce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4dce5c:
    // 0x4dce5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4dce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dce60:
    // 0x4dce60: 0xc08914c  jal         func_224530
label_4dce64:
    if (ctx->pc == 0x4DCE64u) {
        ctx->pc = 0x4DCE64u;
            // 0x4dce64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCE68u;
        goto label_4dce68;
    }
    ctx->pc = 0x4DCE60u;
    SET_GPR_U32(ctx, 31, 0x4DCE68u);
    ctx->pc = 0x4DCE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCE60u;
            // 0x4dce64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCE68u; }
        if (ctx->pc != 0x4DCE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCE68u; }
        if (ctx->pc != 0x4DCE68u) { return; }
    }
    ctx->pc = 0x4DCE68u;
label_4dce68:
    // 0x4dce68: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4dce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dce6c:
    // 0x4dce6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4dce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dce70:
    // 0x4dce70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dce74:
    // 0x4dce74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4dce74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dce78:
    // 0x4dce78: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4dce78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4dce7c:
    // 0x4dce7c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4dce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4dce80:
    // 0x4dce80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4dce80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4dce84:
    // 0x4dce84: 0xc08bff0  jal         func_22FFC0
label_4dce88:
    if (ctx->pc == 0x4DCE88u) {
        ctx->pc = 0x4DCE88u;
            // 0x4dce88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCE8Cu;
        goto label_4dce8c;
    }
    ctx->pc = 0x4DCE84u;
    SET_GPR_U32(ctx, 31, 0x4DCE8Cu);
    ctx->pc = 0x4DCE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCE84u;
            // 0x4dce88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCE8Cu; }
        if (ctx->pc != 0x4DCE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCE8Cu; }
        if (ctx->pc != 0x4DCE8Cu) { return; }
    }
    ctx->pc = 0x4DCE8Cu;
label_4dce8c:
    // 0x4dce8c: 0xc0e393c  jal         func_38E4F0
label_4dce90:
    if (ctx->pc == 0x4DCE90u) {
        ctx->pc = 0x4DCE90u;
            // 0x4dce90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCE94u;
        goto label_4dce94;
    }
    ctx->pc = 0x4DCE8Cu;
    SET_GPR_U32(ctx, 31, 0x4DCE94u);
    ctx->pc = 0x4DCE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCE8Cu;
            // 0x4dce90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCE94u; }
        if (ctx->pc != 0x4DCE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCE94u; }
        if (ctx->pc != 0x4DCE94u) { return; }
    }
    ctx->pc = 0x4DCE94u;
label_4dce94:
    // 0x4dce94: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4dce94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4dce98:
    // 0x4dce98: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4dce98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4dce9c:
    // 0x4dce9c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4dce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4dcea0:
    // 0x4dcea0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4dcea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4dcea4:
    // 0x4dcea4: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4dcea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dcea8:
    // 0x4dcea8: 0xc088b74  jal         func_222DD0
label_4dceac:
    if (ctx->pc == 0x4DCEACu) {
        ctx->pc = 0x4DCEACu;
            // 0x4dceac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCEB0u;
        goto label_4dceb0;
    }
    ctx->pc = 0x4DCEA8u;
    SET_GPR_U32(ctx, 31, 0x4DCEB0u);
    ctx->pc = 0x4DCEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCEA8u;
            // 0x4dceac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCEB0u; }
        if (ctx->pc != 0x4DCEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCEB0u; }
        if (ctx->pc != 0x4DCEB0u) { return; }
    }
    ctx->pc = 0x4DCEB0u;
label_4dceb0:
    // 0x4dceb0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4dceb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4dceb4:
    // 0x4dceb4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4dceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4dceb8:
    // 0x4dceb8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4dceb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4dcebc:
    // 0x4dcebc: 0x320f809  jalr        $t9
label_4dcec0:
    if (ctx->pc == 0x4DCEC0u) {
        ctx->pc = 0x4DCEC0u;
            // 0x4dcec0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4DCEC4u;
        goto label_4dcec4;
    }
    ctx->pc = 0x4DCEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DCEC4u);
        ctx->pc = 0x4DCEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCEBCu;
            // 0x4dcec0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DCEC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DCEC4u; }
            if (ctx->pc != 0x4DCEC4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DCEC4u;
label_4dcec4:
    // 0x4dcec4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4dcec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dcec8:
    // 0x4dcec8: 0xc603013c  lwc1        $f3, 0x13C($s0)
    ctx->pc = 0x4dcec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4dcecc:
    // 0x4dcecc: 0xc6020138  lwc1        $f2, 0x138($s0)
    ctx->pc = 0x4dceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dced0:
    // 0x4dced0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4dced0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dced4:
    // 0x4dced4: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x4dced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dced8:
    // 0x4dced8: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x4dced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dcedc:
    // 0x4dcedc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4dcedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4dcee0:
    // 0x4dcee0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4dcee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4dcee4:
    // 0x4dcee4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4dcee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4dcee8:
    // 0x4dcee8: 0xc0892a0  jal         func_224A80
label_4dceec:
    if (ctx->pc == 0x4DCEECu) {
        ctx->pc = 0x4DCEECu;
            // 0x4dceec: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4DCEF0u;
        goto label_4dcef0;
    }
    ctx->pc = 0x4DCEE8u;
    SET_GPR_U32(ctx, 31, 0x4DCEF0u);
    ctx->pc = 0x4DCEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCEE8u;
            // 0x4dceec: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCEF0u; }
        if (ctx->pc != 0x4DCEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCEF0u; }
        if (ctx->pc != 0x4DCEF0u) { return; }
    }
    ctx->pc = 0x4DCEF0u;
label_4dcef0:
    // 0x4dcef0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4dcef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dcef4:
    // 0x4dcef4: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x4dcef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dcef8:
    // 0x4dcef8: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4dcef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dcefc:
    // 0x4dcefc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4dcefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4dcf00:
    // 0x4dcf00: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x4dcf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dcf04:
    // 0x4dcf04: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4dcf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4dcf08:
    // 0x4dcf08: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4dcf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_4dcf0c:
    // 0x4dcf0c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4dcf0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4dcf10:
    // 0x4dcf10: 0xc089290  jal         func_224A40
label_4dcf14:
    if (ctx->pc == 0x4DCF14u) {
        ctx->pc = 0x4DCF14u;
            // 0x4dcf14: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4DCF18u;
        goto label_4dcf18;
    }
    ctx->pc = 0x4DCF10u;
    SET_GPR_U32(ctx, 31, 0x4DCF18u);
    ctx->pc = 0x4DCF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCF10u;
            // 0x4dcf14: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCF18u; }
        if (ctx->pc != 0x4DCF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCF18u; }
        if (ctx->pc != 0x4DCF18u) { return; }
    }
    ctx->pc = 0x4DCF18u;
label_4dcf18:
    // 0x4dcf18: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x4dcf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dcf1c:
    // 0x4dcf1c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x4dcf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_4dcf20:
    // 0x4dcf20: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4dcf20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dcf24:
    // 0x4dcf24: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4dcf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4dcf28:
    // 0x4dcf28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4dcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4dcf2c:
    // 0x4dcf2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4dcf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dcf30:
    // 0x4dcf30: 0xe60100f0  swc1        $f1, 0xF0($s0)
    ctx->pc = 0x4dcf30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_4dcf34:
    // 0x4dcf34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4dcf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dcf38:
    // 0x4dcf38: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x4dcf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dcf3c:
    // 0x4dcf3c: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x4dcf3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_4dcf40:
    // 0x4dcf40: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x4dcf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dcf44:
    // 0x4dcf44: 0xe60100f8  swc1        $f1, 0xF8($s0)
    ctx->pc = 0x4dcf44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_4dcf48:
    // 0x4dcf48: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4dcf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_4dcf4c:
    // 0x4dcf4c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4dcf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_4dcf50:
    // 0x4dcf50: 0x8c8464b0  lw          $a0, 0x64B0($a0)
    ctx->pc = 0x4dcf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25776)));
label_4dcf54:
    // 0x4dcf54: 0x8c840098  lw          $a0, 0x98($a0)
    ctx->pc = 0x4dcf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_4dcf58:
    // 0x4dcf58: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x4dcf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dcf5c:
    // 0x4dcf5c: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x4dcf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_4dcf60:
    // 0x4dcf60: 0x8c6364b0  lw          $v1, 0x64B0($v1)
    ctx->pc = 0x4dcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25776)));
label_4dcf64:
    // 0x4dcf64: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x4dcf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4dcf68:
    // 0x4dcf68: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4dcf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dcf6c:
    // 0x4dcf6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4dcf6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4dcf70:
    // 0x4dcf70: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x4dcf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_4dcf74:
    // 0x4dcf74: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x4dcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_4dcf78:
    // 0x4dcf78: 0xa2060100  sb          $a2, 0x100($s0)
    ctx->pc = 0x4dcf78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 6));
label_4dcf7c:
    // 0x4dcf7c: 0xa2050064  sb          $a1, 0x64($s0)
    ctx->pc = 0x4dcf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 5));
label_4dcf80:
    // 0x4dcf80: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4dcf80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4dcf84:
    // 0x4dcf84: 0xa2050066  sb          $a1, 0x66($s0)
    ctx->pc = 0x4dcf84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 5));
label_4dcf88:
    // 0x4dcf88: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4dcf88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4dcf8c:
    // 0x4dcf8c: 0xa2050068  sb          $a1, 0x68($s0)
    ctx->pc = 0x4dcf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 5));
label_4dcf90:
    // 0x4dcf90: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4dcf90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4dcf94:
    // 0x4dcf94: 0xa205006a  sb          $a1, 0x6A($s0)
    ctx->pc = 0x4dcf94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 5));
label_4dcf98:
    // 0x4dcf98: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x4dcf98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_4dcf9c:
    // 0x4dcf9c: 0xa20600d1  sb          $a2, 0xD1($s0)
    ctx->pc = 0x4dcf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 6));
label_4dcfa0:
    // 0x4dcfa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dcfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dcfa4:
    // 0x4dcfa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dcfa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dcfa8:
    // 0x4dcfa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dcfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcfac:
    // 0x4dcfac: 0x3e00008  jr          $ra
label_4dcfb0:
    if (ctx->pc == 0x4DCFB0u) {
        ctx->pc = 0x4DCFB0u;
            // 0x4dcfb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4DCFB4u;
        goto label_4dcfb4;
    }
    ctx->pc = 0x4DCFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCFACu;
            // 0x4dcfb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DCFB4u;
label_4dcfb4:
    // 0x4dcfb4: 0x0  nop
    ctx->pc = 0x4dcfb4u;
    // NOP
label_4dcfb8:
    // 0x4dcfb8: 0x0  nop
    ctx->pc = 0x4dcfb8u;
    // NOP
label_4dcfbc:
    // 0x4dcfbc: 0x0  nop
    ctx->pc = 0x4dcfbcu;
    // NOP
}
