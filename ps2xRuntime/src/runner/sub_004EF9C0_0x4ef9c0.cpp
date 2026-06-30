#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EF9C0
// Address: 0x4ef9c0 - 0x4efe40
void sub_004EF9C0_0x4ef9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF9C0_0x4ef9c0");
#endif

    switch (ctx->pc) {
        case 0x4ef9c0u: goto label_4ef9c0;
        case 0x4ef9c4u: goto label_4ef9c4;
        case 0x4ef9c8u: goto label_4ef9c8;
        case 0x4ef9ccu: goto label_4ef9cc;
        case 0x4ef9d0u: goto label_4ef9d0;
        case 0x4ef9d4u: goto label_4ef9d4;
        case 0x4ef9d8u: goto label_4ef9d8;
        case 0x4ef9dcu: goto label_4ef9dc;
        case 0x4ef9e0u: goto label_4ef9e0;
        case 0x4ef9e4u: goto label_4ef9e4;
        case 0x4ef9e8u: goto label_4ef9e8;
        case 0x4ef9ecu: goto label_4ef9ec;
        case 0x4ef9f0u: goto label_4ef9f0;
        case 0x4ef9f4u: goto label_4ef9f4;
        case 0x4ef9f8u: goto label_4ef9f8;
        case 0x4ef9fcu: goto label_4ef9fc;
        case 0x4efa00u: goto label_4efa00;
        case 0x4efa04u: goto label_4efa04;
        case 0x4efa08u: goto label_4efa08;
        case 0x4efa0cu: goto label_4efa0c;
        case 0x4efa10u: goto label_4efa10;
        case 0x4efa14u: goto label_4efa14;
        case 0x4efa18u: goto label_4efa18;
        case 0x4efa1cu: goto label_4efa1c;
        case 0x4efa20u: goto label_4efa20;
        case 0x4efa24u: goto label_4efa24;
        case 0x4efa28u: goto label_4efa28;
        case 0x4efa2cu: goto label_4efa2c;
        case 0x4efa30u: goto label_4efa30;
        case 0x4efa34u: goto label_4efa34;
        case 0x4efa38u: goto label_4efa38;
        case 0x4efa3cu: goto label_4efa3c;
        case 0x4efa40u: goto label_4efa40;
        case 0x4efa44u: goto label_4efa44;
        case 0x4efa48u: goto label_4efa48;
        case 0x4efa4cu: goto label_4efa4c;
        case 0x4efa50u: goto label_4efa50;
        case 0x4efa54u: goto label_4efa54;
        case 0x4efa58u: goto label_4efa58;
        case 0x4efa5cu: goto label_4efa5c;
        case 0x4efa60u: goto label_4efa60;
        case 0x4efa64u: goto label_4efa64;
        case 0x4efa68u: goto label_4efa68;
        case 0x4efa6cu: goto label_4efa6c;
        case 0x4efa70u: goto label_4efa70;
        case 0x4efa74u: goto label_4efa74;
        case 0x4efa78u: goto label_4efa78;
        case 0x4efa7cu: goto label_4efa7c;
        case 0x4efa80u: goto label_4efa80;
        case 0x4efa84u: goto label_4efa84;
        case 0x4efa88u: goto label_4efa88;
        case 0x4efa8cu: goto label_4efa8c;
        case 0x4efa90u: goto label_4efa90;
        case 0x4efa94u: goto label_4efa94;
        case 0x4efa98u: goto label_4efa98;
        case 0x4efa9cu: goto label_4efa9c;
        case 0x4efaa0u: goto label_4efaa0;
        case 0x4efaa4u: goto label_4efaa4;
        case 0x4efaa8u: goto label_4efaa8;
        case 0x4efaacu: goto label_4efaac;
        case 0x4efab0u: goto label_4efab0;
        case 0x4efab4u: goto label_4efab4;
        case 0x4efab8u: goto label_4efab8;
        case 0x4efabcu: goto label_4efabc;
        case 0x4efac0u: goto label_4efac0;
        case 0x4efac4u: goto label_4efac4;
        case 0x4efac8u: goto label_4efac8;
        case 0x4efaccu: goto label_4efacc;
        case 0x4efad0u: goto label_4efad0;
        case 0x4efad4u: goto label_4efad4;
        case 0x4efad8u: goto label_4efad8;
        case 0x4efadcu: goto label_4efadc;
        case 0x4efae0u: goto label_4efae0;
        case 0x4efae4u: goto label_4efae4;
        case 0x4efae8u: goto label_4efae8;
        case 0x4efaecu: goto label_4efaec;
        case 0x4efaf0u: goto label_4efaf0;
        case 0x4efaf4u: goto label_4efaf4;
        case 0x4efaf8u: goto label_4efaf8;
        case 0x4efafcu: goto label_4efafc;
        case 0x4efb00u: goto label_4efb00;
        case 0x4efb04u: goto label_4efb04;
        case 0x4efb08u: goto label_4efb08;
        case 0x4efb0cu: goto label_4efb0c;
        case 0x4efb10u: goto label_4efb10;
        case 0x4efb14u: goto label_4efb14;
        case 0x4efb18u: goto label_4efb18;
        case 0x4efb1cu: goto label_4efb1c;
        case 0x4efb20u: goto label_4efb20;
        case 0x4efb24u: goto label_4efb24;
        case 0x4efb28u: goto label_4efb28;
        case 0x4efb2cu: goto label_4efb2c;
        case 0x4efb30u: goto label_4efb30;
        case 0x4efb34u: goto label_4efb34;
        case 0x4efb38u: goto label_4efb38;
        case 0x4efb3cu: goto label_4efb3c;
        case 0x4efb40u: goto label_4efb40;
        case 0x4efb44u: goto label_4efb44;
        case 0x4efb48u: goto label_4efb48;
        case 0x4efb4cu: goto label_4efb4c;
        case 0x4efb50u: goto label_4efb50;
        case 0x4efb54u: goto label_4efb54;
        case 0x4efb58u: goto label_4efb58;
        case 0x4efb5cu: goto label_4efb5c;
        case 0x4efb60u: goto label_4efb60;
        case 0x4efb64u: goto label_4efb64;
        case 0x4efb68u: goto label_4efb68;
        case 0x4efb6cu: goto label_4efb6c;
        case 0x4efb70u: goto label_4efb70;
        case 0x4efb74u: goto label_4efb74;
        case 0x4efb78u: goto label_4efb78;
        case 0x4efb7cu: goto label_4efb7c;
        case 0x4efb80u: goto label_4efb80;
        case 0x4efb84u: goto label_4efb84;
        case 0x4efb88u: goto label_4efb88;
        case 0x4efb8cu: goto label_4efb8c;
        case 0x4efb90u: goto label_4efb90;
        case 0x4efb94u: goto label_4efb94;
        case 0x4efb98u: goto label_4efb98;
        case 0x4efb9cu: goto label_4efb9c;
        case 0x4efba0u: goto label_4efba0;
        case 0x4efba4u: goto label_4efba4;
        case 0x4efba8u: goto label_4efba8;
        case 0x4efbacu: goto label_4efbac;
        case 0x4efbb0u: goto label_4efbb0;
        case 0x4efbb4u: goto label_4efbb4;
        case 0x4efbb8u: goto label_4efbb8;
        case 0x4efbbcu: goto label_4efbbc;
        case 0x4efbc0u: goto label_4efbc0;
        case 0x4efbc4u: goto label_4efbc4;
        case 0x4efbc8u: goto label_4efbc8;
        case 0x4efbccu: goto label_4efbcc;
        case 0x4efbd0u: goto label_4efbd0;
        case 0x4efbd4u: goto label_4efbd4;
        case 0x4efbd8u: goto label_4efbd8;
        case 0x4efbdcu: goto label_4efbdc;
        case 0x4efbe0u: goto label_4efbe0;
        case 0x4efbe4u: goto label_4efbe4;
        case 0x4efbe8u: goto label_4efbe8;
        case 0x4efbecu: goto label_4efbec;
        case 0x4efbf0u: goto label_4efbf0;
        case 0x4efbf4u: goto label_4efbf4;
        case 0x4efbf8u: goto label_4efbf8;
        case 0x4efbfcu: goto label_4efbfc;
        case 0x4efc00u: goto label_4efc00;
        case 0x4efc04u: goto label_4efc04;
        case 0x4efc08u: goto label_4efc08;
        case 0x4efc0cu: goto label_4efc0c;
        case 0x4efc10u: goto label_4efc10;
        case 0x4efc14u: goto label_4efc14;
        case 0x4efc18u: goto label_4efc18;
        case 0x4efc1cu: goto label_4efc1c;
        case 0x4efc20u: goto label_4efc20;
        case 0x4efc24u: goto label_4efc24;
        case 0x4efc28u: goto label_4efc28;
        case 0x4efc2cu: goto label_4efc2c;
        case 0x4efc30u: goto label_4efc30;
        case 0x4efc34u: goto label_4efc34;
        case 0x4efc38u: goto label_4efc38;
        case 0x4efc3cu: goto label_4efc3c;
        case 0x4efc40u: goto label_4efc40;
        case 0x4efc44u: goto label_4efc44;
        case 0x4efc48u: goto label_4efc48;
        case 0x4efc4cu: goto label_4efc4c;
        case 0x4efc50u: goto label_4efc50;
        case 0x4efc54u: goto label_4efc54;
        case 0x4efc58u: goto label_4efc58;
        case 0x4efc5cu: goto label_4efc5c;
        case 0x4efc60u: goto label_4efc60;
        case 0x4efc64u: goto label_4efc64;
        case 0x4efc68u: goto label_4efc68;
        case 0x4efc6cu: goto label_4efc6c;
        case 0x4efc70u: goto label_4efc70;
        case 0x4efc74u: goto label_4efc74;
        case 0x4efc78u: goto label_4efc78;
        case 0x4efc7cu: goto label_4efc7c;
        case 0x4efc80u: goto label_4efc80;
        case 0x4efc84u: goto label_4efc84;
        case 0x4efc88u: goto label_4efc88;
        case 0x4efc8cu: goto label_4efc8c;
        case 0x4efc90u: goto label_4efc90;
        case 0x4efc94u: goto label_4efc94;
        case 0x4efc98u: goto label_4efc98;
        case 0x4efc9cu: goto label_4efc9c;
        case 0x4efca0u: goto label_4efca0;
        case 0x4efca4u: goto label_4efca4;
        case 0x4efca8u: goto label_4efca8;
        case 0x4efcacu: goto label_4efcac;
        case 0x4efcb0u: goto label_4efcb0;
        case 0x4efcb4u: goto label_4efcb4;
        case 0x4efcb8u: goto label_4efcb8;
        case 0x4efcbcu: goto label_4efcbc;
        case 0x4efcc0u: goto label_4efcc0;
        case 0x4efcc4u: goto label_4efcc4;
        case 0x4efcc8u: goto label_4efcc8;
        case 0x4efcccu: goto label_4efccc;
        case 0x4efcd0u: goto label_4efcd0;
        case 0x4efcd4u: goto label_4efcd4;
        case 0x4efcd8u: goto label_4efcd8;
        case 0x4efcdcu: goto label_4efcdc;
        case 0x4efce0u: goto label_4efce0;
        case 0x4efce4u: goto label_4efce4;
        case 0x4efce8u: goto label_4efce8;
        case 0x4efcecu: goto label_4efcec;
        case 0x4efcf0u: goto label_4efcf0;
        case 0x4efcf4u: goto label_4efcf4;
        case 0x4efcf8u: goto label_4efcf8;
        case 0x4efcfcu: goto label_4efcfc;
        case 0x4efd00u: goto label_4efd00;
        case 0x4efd04u: goto label_4efd04;
        case 0x4efd08u: goto label_4efd08;
        case 0x4efd0cu: goto label_4efd0c;
        case 0x4efd10u: goto label_4efd10;
        case 0x4efd14u: goto label_4efd14;
        case 0x4efd18u: goto label_4efd18;
        case 0x4efd1cu: goto label_4efd1c;
        case 0x4efd20u: goto label_4efd20;
        case 0x4efd24u: goto label_4efd24;
        case 0x4efd28u: goto label_4efd28;
        case 0x4efd2cu: goto label_4efd2c;
        case 0x4efd30u: goto label_4efd30;
        case 0x4efd34u: goto label_4efd34;
        case 0x4efd38u: goto label_4efd38;
        case 0x4efd3cu: goto label_4efd3c;
        case 0x4efd40u: goto label_4efd40;
        case 0x4efd44u: goto label_4efd44;
        case 0x4efd48u: goto label_4efd48;
        case 0x4efd4cu: goto label_4efd4c;
        case 0x4efd50u: goto label_4efd50;
        case 0x4efd54u: goto label_4efd54;
        case 0x4efd58u: goto label_4efd58;
        case 0x4efd5cu: goto label_4efd5c;
        case 0x4efd60u: goto label_4efd60;
        case 0x4efd64u: goto label_4efd64;
        case 0x4efd68u: goto label_4efd68;
        case 0x4efd6cu: goto label_4efd6c;
        case 0x4efd70u: goto label_4efd70;
        case 0x4efd74u: goto label_4efd74;
        case 0x4efd78u: goto label_4efd78;
        case 0x4efd7cu: goto label_4efd7c;
        case 0x4efd80u: goto label_4efd80;
        case 0x4efd84u: goto label_4efd84;
        case 0x4efd88u: goto label_4efd88;
        case 0x4efd8cu: goto label_4efd8c;
        case 0x4efd90u: goto label_4efd90;
        case 0x4efd94u: goto label_4efd94;
        case 0x4efd98u: goto label_4efd98;
        case 0x4efd9cu: goto label_4efd9c;
        case 0x4efda0u: goto label_4efda0;
        case 0x4efda4u: goto label_4efda4;
        case 0x4efda8u: goto label_4efda8;
        case 0x4efdacu: goto label_4efdac;
        case 0x4efdb0u: goto label_4efdb0;
        case 0x4efdb4u: goto label_4efdb4;
        case 0x4efdb8u: goto label_4efdb8;
        case 0x4efdbcu: goto label_4efdbc;
        case 0x4efdc0u: goto label_4efdc0;
        case 0x4efdc4u: goto label_4efdc4;
        case 0x4efdc8u: goto label_4efdc8;
        case 0x4efdccu: goto label_4efdcc;
        case 0x4efdd0u: goto label_4efdd0;
        case 0x4efdd4u: goto label_4efdd4;
        case 0x4efdd8u: goto label_4efdd8;
        case 0x4efddcu: goto label_4efddc;
        case 0x4efde0u: goto label_4efde0;
        case 0x4efde4u: goto label_4efde4;
        case 0x4efde8u: goto label_4efde8;
        case 0x4efdecu: goto label_4efdec;
        case 0x4efdf0u: goto label_4efdf0;
        case 0x4efdf4u: goto label_4efdf4;
        case 0x4efdf8u: goto label_4efdf8;
        case 0x4efdfcu: goto label_4efdfc;
        case 0x4efe00u: goto label_4efe00;
        case 0x4efe04u: goto label_4efe04;
        case 0x4efe08u: goto label_4efe08;
        case 0x4efe0cu: goto label_4efe0c;
        case 0x4efe10u: goto label_4efe10;
        case 0x4efe14u: goto label_4efe14;
        case 0x4efe18u: goto label_4efe18;
        case 0x4efe1cu: goto label_4efe1c;
        case 0x4efe20u: goto label_4efe20;
        case 0x4efe24u: goto label_4efe24;
        case 0x4efe28u: goto label_4efe28;
        case 0x4efe2cu: goto label_4efe2c;
        case 0x4efe30u: goto label_4efe30;
        case 0x4efe34u: goto label_4efe34;
        case 0x4efe38u: goto label_4efe38;
        case 0x4efe3cu: goto label_4efe3c;
        default: break;
    }

    ctx->pc = 0x4ef9c0u;

label_4ef9c0:
    // 0x4ef9c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4ef9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_4ef9c4:
    // 0x4ef9c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4ef9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4ef9c8:
    // 0x4ef9c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4ef9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4ef9cc:
    // 0x4ef9cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4ef9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4ef9d0:
    // 0x4ef9d0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x4ef9d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4ef9d4:
    // 0x4ef9d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ef9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ef9d8:
    // 0x4ef9d8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4ef9d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4ef9dc:
    // 0x4ef9dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ef9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ef9e0:
    // 0x4ef9e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ef9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ef9e4:
    // 0x4ef9e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4ef9e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ef9e8:
    // 0x4ef9e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ef9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ef9ec:
    // 0x4ef9ec: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x4ef9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4ef9f0:
    // 0x4ef9f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ef9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ef9f4:
    // 0x4ef9f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ef9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef9f8:
    // 0x4ef9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ef9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ef9fc:
    // 0x4ef9fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4ef9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4efa00:
    // 0x4efa00: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x4efa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4efa04:
    // 0x4efa04: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4efa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4efa08:
    // 0x4efa08: 0xc04f278  jal         func_13C9E0
label_4efa0c:
    if (ctx->pc == 0x4EFA0Cu) {
        ctx->pc = 0x4EFA0Cu;
            // 0x4efa0c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x4EFA10u;
        goto label_4efa10;
    }
    ctx->pc = 0x4EFA08u;
    SET_GPR_U32(ctx, 31, 0x4EFA10u);
    ctx->pc = 0x4EFA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFA08u;
            // 0x4efa0c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA10u; }
        if (ctx->pc != 0x4EFA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA10u; }
        if (ctx->pc != 0x4EFA10u) { return; }
    }
    ctx->pc = 0x4EFA10u;
label_4efa10:
    // 0x4efa10: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x4efa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4efa14:
    // 0x4efa14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4efa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efa18:
    // 0x4efa18: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x4efa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4efa1c:
    // 0x4efa1c: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x4efa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4efa20:
    // 0x4efa20: 0xc04ce50  jal         func_133940
label_4efa24:
    if (ctx->pc == 0x4EFA24u) {
        ctx->pc = 0x4EFA24u;
            // 0x4efa24: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4EFA28u;
        goto label_4efa28;
    }
    ctx->pc = 0x4EFA20u;
    SET_GPR_U32(ctx, 31, 0x4EFA28u);
    ctx->pc = 0x4EFA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFA20u;
            // 0x4efa24: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA28u; }
        if (ctx->pc != 0x4EFA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA28u; }
        if (ctx->pc != 0x4EFA28u) { return; }
    }
    ctx->pc = 0x4EFA28u;
label_4efa28:
    // 0x4efa28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4efa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efa2c:
    // 0x4efa2c: 0xc04ce80  jal         func_133A00
label_4efa30:
    if (ctx->pc == 0x4EFA30u) {
        ctx->pc = 0x4EFA30u;
            // 0x4efa30: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x4EFA34u;
        goto label_4efa34;
    }
    ctx->pc = 0x4EFA2Cu;
    SET_GPR_U32(ctx, 31, 0x4EFA34u);
    ctx->pc = 0x4EFA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFA2Cu;
            // 0x4efa30: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA34u; }
        if (ctx->pc != 0x4EFA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA34u; }
        if (ctx->pc != 0x4EFA34u) { return; }
    }
    ctx->pc = 0x4EFA34u;
label_4efa34:
    // 0x4efa34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4efa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4efa38:
    // 0x4efa38: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x4efa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_4efa3c:
    // 0x4efa3c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4efa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4efa40:
    // 0x4efa40: 0x9246004c  lbu         $a2, 0x4C($s2)
    ctx->pc = 0x4efa40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_4efa44:
    // 0x4efa44: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x4efa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_4efa48:
    // 0x4efa48: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x4efa48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4efa4c:
    // 0x4efa4c: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4efa4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4efa50:
    // 0x4efa50: 0xc07698c  jal         func_1DA630
label_4efa54:
    if (ctx->pc == 0x4EFA54u) {
        ctx->pc = 0x4EFA54u;
            // 0x4efa54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFA58u;
        goto label_4efa58;
    }
    ctx->pc = 0x4EFA50u;
    SET_GPR_U32(ctx, 31, 0x4EFA58u);
    ctx->pc = 0x4EFA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFA50u;
            // 0x4efa54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA58u; }
        if (ctx->pc != 0x4EFA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA58u; }
        if (ctx->pc != 0x4EFA58u) { return; }
    }
    ctx->pc = 0x4EFA58u;
label_4efa58:
    // 0x4efa58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4efa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4efa5c:
    // 0x4efa5c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4efa60:
    if (ctx->pc == 0x4EFA60u) {
        ctx->pc = 0x4EFA64u;
        goto label_4efa64;
    }
    ctx->pc = 0x4EFA5Cu;
    {
        const bool branch_taken_0x4efa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4efa5c) {
            ctx->pc = 0x4EFA6Cu;
            goto label_4efa6c;
        }
    }
    ctx->pc = 0x4EFA64u;
label_4efa64:
    // 0x4efa64: 0x10000033  b           . + 4 + (0x33 << 2)
label_4efa68:
    if (ctx->pc == 0x4EFA68u) {
        ctx->pc = 0x4EFA68u;
            // 0x4efa68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4EFA6Cu;
        goto label_4efa6c;
    }
    ctx->pc = 0x4EFA64u;
    {
        const bool branch_taken_0x4efa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFA64u;
            // 0x4efa68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efa64) {
            ctx->pc = 0x4EFB34u;
            goto label_4efb34;
        }
    }
    ctx->pc = 0x4EFA6Cu;
label_4efa6c:
    // 0x4efa6c: 0xc0576f4  jal         func_15DBD0
label_4efa70:
    if (ctx->pc == 0x4EFA70u) {
        ctx->pc = 0x4EFA74u;
        goto label_4efa74;
    }
    ctx->pc = 0x4EFA6Cu;
    SET_GPR_U32(ctx, 31, 0x4EFA74u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA74u; }
        if (ctx->pc != 0x4EFA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA74u; }
        if (ctx->pc != 0x4EFA74u) { return; }
    }
    ctx->pc = 0x4EFA74u;
label_4efa74:
    // 0x4efa74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4efa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4efa78:
    // 0x4efa78: 0xc076984  jal         func_1DA610
label_4efa7c:
    if (ctx->pc == 0x4EFA7Cu) {
        ctx->pc = 0x4EFA7Cu;
            // 0x4efa7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFA80u;
        goto label_4efa80;
    }
    ctx->pc = 0x4EFA78u;
    SET_GPR_U32(ctx, 31, 0x4EFA80u);
    ctx->pc = 0x4EFA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFA78u;
            // 0x4efa7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA80u; }
        if (ctx->pc != 0x4EFA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFA80u; }
        if (ctx->pc != 0x4EFA80u) { return; }
    }
    ctx->pc = 0x4EFA80u;
label_4efa80:
    // 0x4efa80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4efa80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4efa84:
    // 0x4efa84: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4efa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4efa88:
    // 0x4efa88: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4efa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4efa8c:
    // 0x4efa8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4efa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efa90:
    // 0x4efa90: 0xc442cb90  lwc1        $f2, -0x3470($v0)
    ctx->pc = 0x4efa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4efa94:
    // 0x4efa94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4efa94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4efa98:
    // 0x4efa98: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4efa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4efa9c:
    // 0x4efa9c: 0xc441cb98  lwc1        $f1, -0x3468($v0)
    ctx->pc = 0x4efa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4efaa0:
    // 0x4efaa0: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x4efaa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4efaa4:
    // 0x4efaa4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4efaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4efaa8:
    // 0x4efaa8: 0xc440cb9c  lwc1        $f0, -0x3464($v0)
    ctx->pc = 0x4efaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4efaac:
    // 0x4efaac: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x4efaacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4efab0:
    // 0x4efab0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4efab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4efab4:
    // 0x4efab4: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x4efab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
label_4efab8:
    // 0x4efab8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x4efab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_4efabc:
    // 0x4efabc: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x4efabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_4efac0:
    // 0x4efac0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x4efac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4efac4:
    // 0x4efac4: 0xc04cca0  jal         func_133280
label_4efac8:
    if (ctx->pc == 0x4EFAC8u) {
        ctx->pc = 0x4EFAC8u;
            // 0x4efac8: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x4EFACCu;
        goto label_4efacc;
    }
    ctx->pc = 0x4EFAC4u;
    SET_GPR_U32(ctx, 31, 0x4EFACCu);
    ctx->pc = 0x4EFAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFAC4u;
            // 0x4efac8: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFACCu; }
        if (ctx->pc != 0x4EFACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFACCu; }
        if (ctx->pc != 0x4EFACCu) { return; }
    }
    ctx->pc = 0x4EFACCu;
label_4efacc:
    // 0x4efacc: 0xc076980  jal         func_1DA600
label_4efad0:
    if (ctx->pc == 0x4EFAD0u) {
        ctx->pc = 0x4EFAD0u;
            // 0x4efad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFAD4u;
        goto label_4efad4;
    }
    ctx->pc = 0x4EFACCu;
    SET_GPR_U32(ctx, 31, 0x4EFAD4u);
    ctx->pc = 0x4EFAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFACCu;
            // 0x4efad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFAD4u; }
        if (ctx->pc != 0x4EFAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFAD4u; }
        if (ctx->pc != 0x4EFAD4u) { return; }
    }
    ctx->pc = 0x4EFAD4u;
label_4efad4:
    // 0x4efad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4efad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4efad8:
    // 0x4efad8: 0xc04cc34  jal         func_1330D0
label_4efadc:
    if (ctx->pc == 0x4EFADCu) {
        ctx->pc = 0x4EFADCu;
            // 0x4efadc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4EFAE0u;
        goto label_4efae0;
    }
    ctx->pc = 0x4EFAD8u;
    SET_GPR_U32(ctx, 31, 0x4EFAE0u);
    ctx->pc = 0x4EFADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFAD8u;
            // 0x4efadc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFAE0u; }
        if (ctx->pc != 0x4EFAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFAE0u; }
        if (ctx->pc != 0x4EFAE0u) { return; }
    }
    ctx->pc = 0x4EFAE0u;
label_4efae0:
    // 0x4efae0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4efae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4efae4:
    // 0x4efae4: 0xc44188e8  lwc1        $f1, -0x7718($v0)
    ctx->pc = 0x4efae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4efae8:
    // 0x4efae8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4efae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4efaec:
    // 0x4efaec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4efaf0:
    if (ctx->pc == 0x4EFAF0u) {
        ctx->pc = 0x4EFAF0u;
            // 0x4efaf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFAF4u;
        goto label_4efaf4;
    }
    ctx->pc = 0x4EFAECu;
    {
        const bool branch_taken_0x4efaec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4efaec) {
            ctx->pc = 0x4EFAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFAECu;
            // 0x4efaf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EFAFCu;
            goto label_4efafc;
        }
    }
    ctx->pc = 0x4EFAF4u;
label_4efaf4:
    // 0x4efaf4: 0x1000000f  b           . + 4 + (0xF << 2)
label_4efaf8:
    if (ctx->pc == 0x4EFAF8u) {
        ctx->pc = 0x4EFAF8u;
            // 0x4efaf8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4EFAFCu;
        goto label_4efafc;
    }
    ctx->pc = 0x4EFAF4u;
    {
        const bool branch_taken_0x4efaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFAF4u;
            // 0x4efaf8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efaf4) {
            ctx->pc = 0x4EFB34u;
            goto label_4efb34;
        }
    }
    ctx->pc = 0x4EFAFCu;
label_4efafc:
    // 0x4efafc: 0xc07697c  jal         func_1DA5F0
label_4efb00:
    if (ctx->pc == 0x4EFB00u) {
        ctx->pc = 0x4EFB04u;
        goto label_4efb04;
    }
    ctx->pc = 0x4EFAFCu;
    SET_GPR_U32(ctx, 31, 0x4EFB04u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB04u; }
        if (ctx->pc != 0x4EFB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB04u; }
        if (ctx->pc != 0x4EFB04u) { return; }
    }
    ctx->pc = 0x4EFB04u;
label_4efb04:
    // 0x4efb04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4efb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4efb08:
    // 0x4efb08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4efb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4efb0c:
    // 0x4efb0c: 0xc04cd60  jal         func_133580
label_4efb10:
    if (ctx->pc == 0x4EFB10u) {
        ctx->pc = 0x4EFB10u;
            // 0x4efb10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFB14u;
        goto label_4efb14;
    }
    ctx->pc = 0x4EFB0Cu;
    SET_GPR_U32(ctx, 31, 0x4EFB14u);
    ctx->pc = 0x4EFB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFB0Cu;
            // 0x4efb10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB14u; }
        if (ctx->pc != 0x4EFB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB14u; }
        if (ctx->pc != 0x4EFB14u) { return; }
    }
    ctx->pc = 0x4EFB14u;
label_4efb14:
    // 0x4efb14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4efb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4efb18:
    // 0x4efb18: 0xc04c650  jal         func_131940
label_4efb1c:
    if (ctx->pc == 0x4EFB1Cu) {
        ctx->pc = 0x4EFB1Cu;
            // 0x4efb1c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4EFB20u;
        goto label_4efb20;
    }
    ctx->pc = 0x4EFB18u;
    SET_GPR_U32(ctx, 31, 0x4EFB20u);
    ctx->pc = 0x4EFB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFB18u;
            // 0x4efb1c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB20u; }
        if (ctx->pc != 0x4EFB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB20u; }
        if (ctx->pc != 0x4EFB20u) { return; }
    }
    ctx->pc = 0x4EFB20u;
label_4efb20:
    // 0x4efb20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4efb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4efb24:
    // 0x4efb24: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4efb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4efb28:
    // 0x4efb28: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x4efb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_4efb2c:
    // 0x4efb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4efb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4efb30:
    // 0x4efb30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4efb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4efb34:
    // 0x4efb34: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4efb34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4efb38:
    // 0x4efb38: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4efb3c:
    if (ctx->pc == 0x4EFB3Cu) {
        ctx->pc = 0x4EFB3Cu;
            // 0x4efb3c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4EFB40u;
        goto label_4efb40;
    }
    ctx->pc = 0x4EFB38u;
    {
        const bool branch_taken_0x4efb38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EFB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFB38u;
            // 0x4efb3c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efb38) {
            ctx->pc = 0x4EFB48u;
            goto label_4efb48;
        }
    }
    ctx->pc = 0x4EFB40u;
label_4efb40:
    // 0x4efb40: 0x10000013  b           . + 4 + (0x13 << 2)
label_4efb44:
    if (ctx->pc == 0x4EFB44u) {
        ctx->pc = 0x4EFB44u;
            // 0x4efb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFB48u;
        goto label_4efb48;
    }
    ctx->pc = 0x4EFB40u;
    {
        const bool branch_taken_0x4efb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFB40u;
            // 0x4efb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efb40) {
            ctx->pc = 0x4EFB90u;
            goto label_4efb90;
        }
    }
    ctx->pc = 0x4EFB48u;
label_4efb48:
    // 0x4efb48: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x4efb48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4efb4c:
    // 0x4efb4c: 0xc04e738  jal         func_139CE0
label_4efb50:
    if (ctx->pc == 0x4EFB50u) {
        ctx->pc = 0x4EFB50u;
            // 0x4efb50: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x4EFB54u;
        goto label_4efb54;
    }
    ctx->pc = 0x4EFB4Cu;
    SET_GPR_U32(ctx, 31, 0x4EFB54u);
    ctx->pc = 0x4EFB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFB4Cu;
            // 0x4efb50: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB54u; }
        if (ctx->pc != 0x4EFB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB54u; }
        if (ctx->pc != 0x4EFB54u) { return; }
    }
    ctx->pc = 0x4EFB54u;
label_4efb54:
    // 0x4efb54: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x4efb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_4efb58:
    // 0x4efb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4efb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efb5c:
    // 0x4efb5c: 0xc04e4a4  jal         func_139290
label_4efb60:
    if (ctx->pc == 0x4EFB60u) {
        ctx->pc = 0x4EFB60u;
            // 0x4efb60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFB64u;
        goto label_4efb64;
    }
    ctx->pc = 0x4EFB5Cu;
    SET_GPR_U32(ctx, 31, 0x4EFB64u);
    ctx->pc = 0x4EFB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFB5Cu;
            // 0x4efb60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB64u; }
        if (ctx->pc != 0x4EFB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB64u; }
        if (ctx->pc != 0x4EFB64u) { return; }
    }
    ctx->pc = 0x4EFB64u;
label_4efb64:
    // 0x4efb64: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4efb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4efb68:
    // 0x4efb68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4efb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efb6c:
    // 0x4efb6c: 0xc04cd60  jal         func_133580
label_4efb70:
    if (ctx->pc == 0x4EFB70u) {
        ctx->pc = 0x4EFB70u;
            // 0x4efb70: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4EFB74u;
        goto label_4efb74;
    }
    ctx->pc = 0x4EFB6Cu;
    SET_GPR_U32(ctx, 31, 0x4EFB74u);
    ctx->pc = 0x4EFB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFB6Cu;
            // 0x4efb70: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB74u; }
        if (ctx->pc != 0x4EFB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB74u; }
        if (ctx->pc != 0x4EFB74u) { return; }
    }
    ctx->pc = 0x4EFB74u;
label_4efb74:
    // 0x4efb74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4efb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4efb78:
    // 0x4efb78: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4efb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4efb7c:
    // 0x4efb7c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4efb7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efb80:
    // 0x4efb80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4efb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4efb84:
    // 0x4efb84: 0x26590050  addiu       $t9, $s2, 0x50
    ctx->pc = 0x4efb84u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_4efb88:
    // 0x4efb88: 0xc0408c8  jal         func_102320
label_4efb8c:
    if (ctx->pc == 0x4EFB8Cu) {
        ctx->pc = 0x4EFB8Cu;
            // 0x4efb8c: 0x27a800e0  addiu       $t0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4EFB90u;
        goto label_4efb90;
    }
    ctx->pc = 0x4EFB88u;
    SET_GPR_U32(ctx, 31, 0x4EFB90u);
    ctx->pc = 0x4EFB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFB88u;
            // 0x4efb8c: 0x27a800e0  addiu       $t0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB90u; }
        if (ctx->pc != 0x4EFB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFB90u; }
        if (ctx->pc != 0x4EFB90u) { return; }
    }
    ctx->pc = 0x4EFB90u;
label_4efb90:
    // 0x4efb90: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4efb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4efb94:
    // 0x4efb94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4efb94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4efb98:
    // 0x4efb98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4efb98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4efb9c:
    // 0x4efb9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4efb9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4efba0:
    // 0x4efba0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4efba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4efba4:
    // 0x4efba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4efba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4efba8:
    // 0x4efba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4efba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4efbac:
    // 0x4efbac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4efbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4efbb0:
    // 0x4efbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4efbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4efbb4:
    // 0x4efbb4: 0x3e00008  jr          $ra
label_4efbb8:
    if (ctx->pc == 0x4EFBB8u) {
        ctx->pc = 0x4EFBB8u;
            // 0x4efbb8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4EFBBCu;
        goto label_4efbbc;
    }
    ctx->pc = 0x4EFBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFBB4u;
            // 0x4efbb8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EFBBCu;
label_4efbbc:
    // 0x4efbbc: 0x0  nop
    ctx->pc = 0x4efbbcu;
    // NOP
label_4efbc0:
    // 0x4efbc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4efbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4efbc4:
    // 0x4efbc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4efbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4efbc8:
    // 0x4efbc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4efbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4efbcc:
    // 0x4efbcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4efbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4efbd0:
    // 0x4efbd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4efbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4efbd4:
    // 0x4efbd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4efbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4efbd8:
    // 0x4efbd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4efbd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4efbdc:
    // 0x4efbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4efbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4efbe0:
    // 0x4efbe0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4efbe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4efbe4:
    // 0x4efbe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4efbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4efbe8:
    // 0x4efbe8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4efbe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4efbec:
    // 0x4efbec: 0x320f809  jalr        $t9
label_4efbf0:
    if (ctx->pc == 0x4EFBF0u) {
        ctx->pc = 0x4EFBF0u;
            // 0x4efbf0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFBF4u;
        goto label_4efbf4;
    }
    ctx->pc = 0x4EFBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EFBF4u);
        ctx->pc = 0x4EFBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFBECu;
            // 0x4efbf0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EFBF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EFBF4u; }
            if (ctx->pc != 0x4EFBF4u) { return; }
        }
        }
    }
    ctx->pc = 0x4EFBF4u;
label_4efbf4:
    // 0x4efbf4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4efbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4efbf8:
    // 0x4efbf8: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x4efbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4efbfc:
    // 0x4efbfc: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4efbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4efc00:
    // 0x4efc00: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x4efc00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4efc04:
    // 0x4efc04: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4efc04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efc08:
    // 0x4efc08: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4efc08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4efc0c:
    // 0x4efc0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4efc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4efc10:
    // 0x4efc10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4efc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efc14:
    // 0x4efc14: 0xc04cff4  jal         func_133FD0
label_4efc18:
    if (ctx->pc == 0x4EFC18u) {
        ctx->pc = 0x4EFC18u;
            // 0x4efc18: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4EFC1Cu;
        goto label_4efc1c;
    }
    ctx->pc = 0x4EFC14u;
    SET_GPR_U32(ctx, 31, 0x4EFC1Cu);
    ctx->pc = 0x4EFC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFC14u;
            // 0x4efc18: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFC1Cu; }
        if (ctx->pc != 0x4EFC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFC1Cu; }
        if (ctx->pc != 0x4EFC1Cu) { return; }
    }
    ctx->pc = 0x4EFC1Cu;
label_4efc1c:
    // 0x4efc1c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4efc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4efc20:
    // 0x4efc20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4efc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4efc24:
    // 0x4efc24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4efc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efc28:
    // 0x4efc28: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4efc28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4efc2c:
    // 0x4efc2c: 0xc054c2c  jal         func_1530B0
label_4efc30:
    if (ctx->pc == 0x4EFC30u) {
        ctx->pc = 0x4EFC30u;
            // 0x4efc30: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4EFC34u;
        goto label_4efc34;
    }
    ctx->pc = 0x4EFC2Cu;
    SET_GPR_U32(ctx, 31, 0x4EFC34u);
    ctx->pc = 0x4EFC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFC2Cu;
            // 0x4efc30: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFC34u; }
        if (ctx->pc != 0x4EFC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFC34u; }
        if (ctx->pc != 0x4EFC34u) { return; }
    }
    ctx->pc = 0x4EFC34u;
label_4efc34:
    // 0x4efc34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4efc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4efc38:
    // 0x4efc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4efc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4efc3c:
    // 0x4efc3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4efc3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4efc40:
    // 0x4efc40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4efc40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4efc44:
    // 0x4efc44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4efc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4efc48:
    // 0x4efc48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4efc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4efc4c:
    // 0x4efc4c: 0x3e00008  jr          $ra
label_4efc50:
    if (ctx->pc == 0x4EFC50u) {
        ctx->pc = 0x4EFC50u;
            // 0x4efc50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4EFC54u;
        goto label_4efc54;
    }
    ctx->pc = 0x4EFC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFC4Cu;
            // 0x4efc50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EFC54u;
label_4efc54:
    // 0x4efc54: 0x0  nop
    ctx->pc = 0x4efc54u;
    // NOP
label_4efc58:
    // 0x4efc58: 0x0  nop
    ctx->pc = 0x4efc58u;
    // NOP
label_4efc5c:
    // 0x4efc5c: 0x0  nop
    ctx->pc = 0x4efc5cu;
    // NOP
label_4efc60:
    // 0x4efc60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4efc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4efc64:
    // 0x4efc64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4efc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4efc68:
    // 0x4efc68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4efc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4efc6c:
    // 0x4efc6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4efc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4efc70:
    // 0x4efc70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4efc70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4efc74:
    // 0x4efc74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4efc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4efc78:
    // 0x4efc78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4efc78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4efc7c:
    // 0x4efc7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4efc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4efc80:
    // 0x4efc80: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4efc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4efc84:
    // 0x4efc84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4efc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4efc88:
    // 0x4efc88: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4efc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4efc8c:
    // 0x4efc8c: 0x320f809  jalr        $t9
label_4efc90:
    if (ctx->pc == 0x4EFC90u) {
        ctx->pc = 0x4EFC90u;
            // 0x4efc90: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFC94u;
        goto label_4efc94;
    }
    ctx->pc = 0x4EFC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EFC94u);
        ctx->pc = 0x4EFC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFC8Cu;
            // 0x4efc90: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EFC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EFC94u; }
            if (ctx->pc != 0x4EFC94u) { return; }
        }
        }
    }
    ctx->pc = 0x4EFC94u;
label_4efc94:
    // 0x4efc94: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4efc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4efc98:
    // 0x4efc98: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4efc98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4efc9c:
    // 0x4efc9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4efc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efca0:
    // 0x4efca0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4efca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4efca4:
    // 0x4efca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4efca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4efca8:
    // 0x4efca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4efca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efcac:
    // 0x4efcac: 0xc04cfcc  jal         func_133F30
label_4efcb0:
    if (ctx->pc == 0x4EFCB0u) {
        ctx->pc = 0x4EFCB0u;
            // 0x4efcb0: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x4EFCB4u;
        goto label_4efcb4;
    }
    ctx->pc = 0x4EFCACu;
    SET_GPR_U32(ctx, 31, 0x4EFCB4u);
    ctx->pc = 0x4EFCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFCACu;
            // 0x4efcb0: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFCB4u; }
        if (ctx->pc != 0x4EFCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFCB4u; }
        if (ctx->pc != 0x4EFCB4u) { return; }
    }
    ctx->pc = 0x4EFCB4u;
label_4efcb4:
    // 0x4efcb4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4efcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4efcb8:
    // 0x4efcb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4efcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4efcbc:
    // 0x4efcbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4efcbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efcc0:
    // 0x4efcc0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4efcc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4efcc4:
    // 0x4efcc4: 0xc054c2c  jal         func_1530B0
label_4efcc8:
    if (ctx->pc == 0x4EFCC8u) {
        ctx->pc = 0x4EFCC8u;
            // 0x4efcc8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4EFCCCu;
        goto label_4efccc;
    }
    ctx->pc = 0x4EFCC4u;
    SET_GPR_U32(ctx, 31, 0x4EFCCCu);
    ctx->pc = 0x4EFCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFCC4u;
            // 0x4efcc8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFCCCu; }
        if (ctx->pc != 0x4EFCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFCCCu; }
        if (ctx->pc != 0x4EFCCCu) { return; }
    }
    ctx->pc = 0x4EFCCCu;
label_4efccc:
    // 0x4efccc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4efcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4efcd0:
    // 0x4efcd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4efcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4efcd4:
    // 0x4efcd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4efcd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4efcd8:
    // 0x4efcd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4efcd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4efcdc:
    // 0x4efcdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4efcdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4efce0:
    // 0x4efce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4efce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4efce4:
    // 0x4efce4: 0x3e00008  jr          $ra
label_4efce8:
    if (ctx->pc == 0x4EFCE8u) {
        ctx->pc = 0x4EFCE8u;
            // 0x4efce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4EFCECu;
        goto label_4efcec;
    }
    ctx->pc = 0x4EFCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFCE4u;
            // 0x4efce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EFCECu;
label_4efcec:
    // 0x4efcec: 0x0  nop
    ctx->pc = 0x4efcecu;
    // NOP
label_4efcf0:
    // 0x4efcf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4efcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4efcf4:
    // 0x4efcf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4efcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4efcf8:
    // 0x4efcf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4efcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4efcfc:
    // 0x4efcfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4efcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4efd00:
    // 0x4efd00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4efd00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4efd04:
    // 0x4efd04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4efd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4efd08:
    // 0x4efd08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4efd08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4efd0c:
    // 0x4efd0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4efd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4efd10:
    // 0x4efd10: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4efd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4efd14:
    // 0x4efd14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4efd14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4efd18:
    // 0x4efd18: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4efd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4efd1c:
    // 0x4efd1c: 0x320f809  jalr        $t9
label_4efd20:
    if (ctx->pc == 0x4EFD20u) {
        ctx->pc = 0x4EFD20u;
            // 0x4efd20: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFD24u;
        goto label_4efd24;
    }
    ctx->pc = 0x4EFD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EFD24u);
        ctx->pc = 0x4EFD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFD1Cu;
            // 0x4efd20: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EFD24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EFD24u; }
            if (ctx->pc != 0x4EFD24u) { return; }
        }
        }
    }
    ctx->pc = 0x4EFD24u;
label_4efd24:
    // 0x4efd24: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4efd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4efd28:
    // 0x4efd28: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x4efd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4efd2c:
    // 0x4efd2c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4efd2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4efd30:
    // 0x4efd30: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x4efd30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4efd34:
    // 0x4efd34: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4efd34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efd38:
    // 0x4efd38: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4efd38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4efd3c:
    // 0x4efd3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4efd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4efd40:
    // 0x4efd40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4efd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efd44:
    // 0x4efd44: 0xc04cff4  jal         func_133FD0
label_4efd48:
    if (ctx->pc == 0x4EFD48u) {
        ctx->pc = 0x4EFD48u;
            // 0x4efd48: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4EFD4Cu;
        goto label_4efd4c;
    }
    ctx->pc = 0x4EFD44u;
    SET_GPR_U32(ctx, 31, 0x4EFD4Cu);
    ctx->pc = 0x4EFD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFD44u;
            // 0x4efd48: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFD4Cu; }
        if (ctx->pc != 0x4EFD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFD4Cu; }
        if (ctx->pc != 0x4EFD4Cu) { return; }
    }
    ctx->pc = 0x4EFD4Cu;
label_4efd4c:
    // 0x4efd4c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4efd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4efd50:
    // 0x4efd50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4efd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4efd54:
    // 0x4efd54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4efd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efd58:
    // 0x4efd58: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4efd58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4efd5c:
    // 0x4efd5c: 0xc0538d8  jal         func_14E360
label_4efd60:
    if (ctx->pc == 0x4EFD60u) {
        ctx->pc = 0x4EFD60u;
            // 0x4efd60: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4EFD64u;
        goto label_4efd64;
    }
    ctx->pc = 0x4EFD5Cu;
    SET_GPR_U32(ctx, 31, 0x4EFD64u);
    ctx->pc = 0x4EFD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFD5Cu;
            // 0x4efd60: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFD64u; }
        if (ctx->pc != 0x4EFD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFD64u; }
        if (ctx->pc != 0x4EFD64u) { return; }
    }
    ctx->pc = 0x4EFD64u;
label_4efd64:
    // 0x4efd64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4efd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4efd68:
    // 0x4efd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4efd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4efd6c:
    // 0x4efd6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4efd6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4efd70:
    // 0x4efd70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4efd70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4efd74:
    // 0x4efd74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4efd74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4efd78:
    // 0x4efd78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4efd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4efd7c:
    // 0x4efd7c: 0x3e00008  jr          $ra
label_4efd80:
    if (ctx->pc == 0x4EFD80u) {
        ctx->pc = 0x4EFD80u;
            // 0x4efd80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4EFD84u;
        goto label_4efd84;
    }
    ctx->pc = 0x4EFD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFD7Cu;
            // 0x4efd80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EFD84u;
label_4efd84:
    // 0x4efd84: 0x0  nop
    ctx->pc = 0x4efd84u;
    // NOP
label_4efd88:
    // 0x4efd88: 0x0  nop
    ctx->pc = 0x4efd88u;
    // NOP
label_4efd8c:
    // 0x4efd8c: 0x0  nop
    ctx->pc = 0x4efd8cu;
    // NOP
label_4efd90:
    // 0x4efd90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4efd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4efd94:
    // 0x4efd94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4efd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4efd98:
    // 0x4efd98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4efd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4efd9c:
    // 0x4efd9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4efd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4efda0:
    // 0x4efda0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4efda0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4efda4:
    // 0x4efda4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4efda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4efda8:
    // 0x4efda8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4efda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4efdac:
    // 0x4efdac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4efdacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4efdb0:
    // 0x4efdb0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4efdb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4efdb4:
    // 0x4efdb4: 0x320f809  jalr        $t9
label_4efdb8:
    if (ctx->pc == 0x4EFDB8u) {
        ctx->pc = 0x4EFDB8u;
            // 0x4efdb8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFDBCu;
        goto label_4efdbc;
    }
    ctx->pc = 0x4EFDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EFDBCu);
        ctx->pc = 0x4EFDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFDB4u;
            // 0x4efdb8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EFDBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EFDBCu; }
            if (ctx->pc != 0x4EFDBCu) { return; }
        }
        }
    }
    ctx->pc = 0x4EFDBCu;
label_4efdbc:
    // 0x4efdbc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4efdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4efdc0:
    // 0x4efdc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4efdc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4efdc4:
    // 0x4efdc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4efdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efdc8:
    // 0x4efdc8: 0xc054fd4  jal         func_153F50
label_4efdcc:
    if (ctx->pc == 0x4EFDCCu) {
        ctx->pc = 0x4EFDCCu;
            // 0x4efdcc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EFDD0u;
        goto label_4efdd0;
    }
    ctx->pc = 0x4EFDC8u;
    SET_GPR_U32(ctx, 31, 0x4EFDD0u);
    ctx->pc = 0x4EFDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFDC8u;
            // 0x4efdcc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFDD0u; }
        if (ctx->pc != 0x4EFDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFDD0u; }
        if (ctx->pc != 0x4EFDD0u) { return; }
    }
    ctx->pc = 0x4EFDD0u;
label_4efdd0:
    // 0x4efdd0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4efdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4efdd4:
    // 0x4efdd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4efdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efdd8:
    // 0x4efdd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4efdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4efddc:
    // 0x4efddc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4efddcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4efde0:
    // 0x4efde0: 0xc055234  jal         func_1548D0
label_4efde4:
    if (ctx->pc == 0x4EFDE4u) {
        ctx->pc = 0x4EFDE4u;
            // 0x4efde4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4EFDE8u;
        goto label_4efde8;
    }
    ctx->pc = 0x4EFDE0u;
    SET_GPR_U32(ctx, 31, 0x4EFDE8u);
    ctx->pc = 0x4EFDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFDE0u;
            // 0x4efde4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFDE8u; }
        if (ctx->pc != 0x4EFDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFDE8u; }
        if (ctx->pc != 0x4EFDE8u) { return; }
    }
    ctx->pc = 0x4EFDE8u;
label_4efde8:
    // 0x4efde8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4efde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4efdec:
    // 0x4efdec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4efdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4efdf0:
    // 0x4efdf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4efdf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4efdf4:
    // 0x4efdf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4efdf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4efdf8:
    // 0x4efdf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4efdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4efdfc:
    // 0x4efdfc: 0x3e00008  jr          $ra
label_4efe00:
    if (ctx->pc == 0x4EFE00u) {
        ctx->pc = 0x4EFE00u;
            // 0x4efe00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4EFE04u;
        goto label_4efe04;
    }
    ctx->pc = 0x4EFDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFDFCu;
            // 0x4efe00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EFE04u;
label_4efe04:
    // 0x4efe04: 0x0  nop
    ctx->pc = 0x4efe04u;
    // NOP
label_4efe08:
    // 0x4efe08: 0x0  nop
    ctx->pc = 0x4efe08u;
    // NOP
label_4efe0c:
    // 0x4efe0c: 0x0  nop
    ctx->pc = 0x4efe0cu;
    // NOP
label_4efe10:
    // 0x4efe10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efe14:
    // 0x4efe14: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4efe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4efe18:
    // 0x4efe18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4efe1c:
    // 0x4efe1c: 0x8c630df8  lw          $v1, 0xDF8($v1)
    ctx->pc = 0x4efe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3576)));
label_4efe20:
    // 0x4efe20: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x4efe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_4efe24:
    // 0x4efe24: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4efe28:
    if (ctx->pc == 0x4EFE28u) {
        ctx->pc = 0x4EFE28u;
            // 0x4efe28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4EFE2Cu;
        goto label_4efe2c;
    }
    ctx->pc = 0x4EFE24u;
    {
        const bool branch_taken_0x4efe24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4efe24) {
            ctx->pc = 0x4EFE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFE24u;
            // 0x4efe28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EFE38u;
            goto label_4efe38;
        }
    }
    ctx->pc = 0x4EFE2Cu;
label_4efe2c:
    // 0x4efe2c: 0xc13bf90  jal         func_4EFE40
label_4efe30:
    if (ctx->pc == 0x4EFE30u) {
        ctx->pc = 0x4EFE34u;
        goto label_4efe34;
    }
    ctx->pc = 0x4EFE2Cu;
    SET_GPR_U32(ctx, 31, 0x4EFE34u);
    ctx->pc = 0x4EFE40u;
    if (runtime->hasFunction(0x4EFE40u)) {
        auto targetFn = runtime->lookupFunction(0x4EFE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFE34u; }
        if (ctx->pc != 0x4EFE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EFE40_0x4efe40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFE34u; }
        if (ctx->pc != 0x4EFE34u) { return; }
    }
    ctx->pc = 0x4EFE34u;
label_4efe34:
    // 0x4efe34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efe38:
    // 0x4efe38: 0x3e00008  jr          $ra
label_4efe3c:
    if (ctx->pc == 0x4EFE3Cu) {
        ctx->pc = 0x4EFE3Cu;
            // 0x4efe3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4EFE40u;
        goto label_fallthrough_0x4efe38;
    }
    ctx->pc = 0x4EFE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFE38u;
            // 0x4efe3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4efe38:
    ctx->pc = 0x4EFE40u;
}
