#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164898
// Address: 0x164898 - 0x164bd8
void sub_00164898_0x164898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164898_0x164898");
#endif

    switch (ctx->pc) {
        case 0x164898u: goto label_164898;
        case 0x16489cu: goto label_16489c;
        case 0x1648a0u: goto label_1648a0;
        case 0x1648a4u: goto label_1648a4;
        case 0x1648a8u: goto label_1648a8;
        case 0x1648acu: goto label_1648ac;
        case 0x1648b0u: goto label_1648b0;
        case 0x1648b4u: goto label_1648b4;
        case 0x1648b8u: goto label_1648b8;
        case 0x1648bcu: goto label_1648bc;
        case 0x1648c0u: goto label_1648c0;
        case 0x1648c4u: goto label_1648c4;
        case 0x1648c8u: goto label_1648c8;
        case 0x1648ccu: goto label_1648cc;
        case 0x1648d0u: goto label_1648d0;
        case 0x1648d4u: goto label_1648d4;
        case 0x1648d8u: goto label_1648d8;
        case 0x1648dcu: goto label_1648dc;
        case 0x1648e0u: goto label_1648e0;
        case 0x1648e4u: goto label_1648e4;
        case 0x1648e8u: goto label_1648e8;
        case 0x1648ecu: goto label_1648ec;
        case 0x1648f0u: goto label_1648f0;
        case 0x1648f4u: goto label_1648f4;
        case 0x1648f8u: goto label_1648f8;
        case 0x1648fcu: goto label_1648fc;
        case 0x164900u: goto label_164900;
        case 0x164904u: goto label_164904;
        case 0x164908u: goto label_164908;
        case 0x16490cu: goto label_16490c;
        case 0x164910u: goto label_164910;
        case 0x164914u: goto label_164914;
        case 0x164918u: goto label_164918;
        case 0x16491cu: goto label_16491c;
        case 0x164920u: goto label_164920;
        case 0x164924u: goto label_164924;
        case 0x164928u: goto label_164928;
        case 0x16492cu: goto label_16492c;
        case 0x164930u: goto label_164930;
        case 0x164934u: goto label_164934;
        case 0x164938u: goto label_164938;
        case 0x16493cu: goto label_16493c;
        case 0x164940u: goto label_164940;
        case 0x164944u: goto label_164944;
        case 0x164948u: goto label_164948;
        case 0x16494cu: goto label_16494c;
        case 0x164950u: goto label_164950;
        case 0x164954u: goto label_164954;
        case 0x164958u: goto label_164958;
        case 0x16495cu: goto label_16495c;
        case 0x164960u: goto label_164960;
        case 0x164964u: goto label_164964;
        case 0x164968u: goto label_164968;
        case 0x16496cu: goto label_16496c;
        case 0x164970u: goto label_164970;
        case 0x164974u: goto label_164974;
        case 0x164978u: goto label_164978;
        case 0x16497cu: goto label_16497c;
        case 0x164980u: goto label_164980;
        case 0x164984u: goto label_164984;
        case 0x164988u: goto label_164988;
        case 0x16498cu: goto label_16498c;
        case 0x164990u: goto label_164990;
        case 0x164994u: goto label_164994;
        case 0x164998u: goto label_164998;
        case 0x16499cu: goto label_16499c;
        case 0x1649a0u: goto label_1649a0;
        case 0x1649a4u: goto label_1649a4;
        case 0x1649a8u: goto label_1649a8;
        case 0x1649acu: goto label_1649ac;
        case 0x1649b0u: goto label_1649b0;
        case 0x1649b4u: goto label_1649b4;
        case 0x1649b8u: goto label_1649b8;
        case 0x1649bcu: goto label_1649bc;
        case 0x1649c0u: goto label_1649c0;
        case 0x1649c4u: goto label_1649c4;
        case 0x1649c8u: goto label_1649c8;
        case 0x1649ccu: goto label_1649cc;
        case 0x1649d0u: goto label_1649d0;
        case 0x1649d4u: goto label_1649d4;
        case 0x1649d8u: goto label_1649d8;
        case 0x1649dcu: goto label_1649dc;
        case 0x1649e0u: goto label_1649e0;
        case 0x1649e4u: goto label_1649e4;
        case 0x1649e8u: goto label_1649e8;
        case 0x1649ecu: goto label_1649ec;
        case 0x1649f0u: goto label_1649f0;
        case 0x1649f4u: goto label_1649f4;
        case 0x1649f8u: goto label_1649f8;
        case 0x1649fcu: goto label_1649fc;
        case 0x164a00u: goto label_164a00;
        case 0x164a04u: goto label_164a04;
        case 0x164a08u: goto label_164a08;
        case 0x164a0cu: goto label_164a0c;
        case 0x164a10u: goto label_164a10;
        case 0x164a14u: goto label_164a14;
        case 0x164a18u: goto label_164a18;
        case 0x164a1cu: goto label_164a1c;
        case 0x164a20u: goto label_164a20;
        case 0x164a24u: goto label_164a24;
        case 0x164a28u: goto label_164a28;
        case 0x164a2cu: goto label_164a2c;
        case 0x164a30u: goto label_164a30;
        case 0x164a34u: goto label_164a34;
        case 0x164a38u: goto label_164a38;
        case 0x164a3cu: goto label_164a3c;
        case 0x164a40u: goto label_164a40;
        case 0x164a44u: goto label_164a44;
        case 0x164a48u: goto label_164a48;
        case 0x164a4cu: goto label_164a4c;
        case 0x164a50u: goto label_164a50;
        case 0x164a54u: goto label_164a54;
        case 0x164a58u: goto label_164a58;
        case 0x164a5cu: goto label_164a5c;
        case 0x164a60u: goto label_164a60;
        case 0x164a64u: goto label_164a64;
        case 0x164a68u: goto label_164a68;
        case 0x164a6cu: goto label_164a6c;
        case 0x164a70u: goto label_164a70;
        case 0x164a74u: goto label_164a74;
        case 0x164a78u: goto label_164a78;
        case 0x164a7cu: goto label_164a7c;
        case 0x164a80u: goto label_164a80;
        case 0x164a84u: goto label_164a84;
        case 0x164a88u: goto label_164a88;
        case 0x164a8cu: goto label_164a8c;
        case 0x164a90u: goto label_164a90;
        case 0x164a94u: goto label_164a94;
        case 0x164a98u: goto label_164a98;
        case 0x164a9cu: goto label_164a9c;
        case 0x164aa0u: goto label_164aa0;
        case 0x164aa4u: goto label_164aa4;
        case 0x164aa8u: goto label_164aa8;
        case 0x164aacu: goto label_164aac;
        case 0x164ab0u: goto label_164ab0;
        case 0x164ab4u: goto label_164ab4;
        case 0x164ab8u: goto label_164ab8;
        case 0x164abcu: goto label_164abc;
        case 0x164ac0u: goto label_164ac0;
        case 0x164ac4u: goto label_164ac4;
        case 0x164ac8u: goto label_164ac8;
        case 0x164accu: goto label_164acc;
        case 0x164ad0u: goto label_164ad0;
        case 0x164ad4u: goto label_164ad4;
        case 0x164ad8u: goto label_164ad8;
        case 0x164adcu: goto label_164adc;
        case 0x164ae0u: goto label_164ae0;
        case 0x164ae4u: goto label_164ae4;
        case 0x164ae8u: goto label_164ae8;
        case 0x164aecu: goto label_164aec;
        case 0x164af0u: goto label_164af0;
        case 0x164af4u: goto label_164af4;
        case 0x164af8u: goto label_164af8;
        case 0x164afcu: goto label_164afc;
        case 0x164b00u: goto label_164b00;
        case 0x164b04u: goto label_164b04;
        case 0x164b08u: goto label_164b08;
        case 0x164b0cu: goto label_164b0c;
        case 0x164b10u: goto label_164b10;
        case 0x164b14u: goto label_164b14;
        case 0x164b18u: goto label_164b18;
        case 0x164b1cu: goto label_164b1c;
        case 0x164b20u: goto label_164b20;
        case 0x164b24u: goto label_164b24;
        case 0x164b28u: goto label_164b28;
        case 0x164b2cu: goto label_164b2c;
        case 0x164b30u: goto label_164b30;
        case 0x164b34u: goto label_164b34;
        case 0x164b38u: goto label_164b38;
        case 0x164b3cu: goto label_164b3c;
        case 0x164b40u: goto label_164b40;
        case 0x164b44u: goto label_164b44;
        case 0x164b48u: goto label_164b48;
        case 0x164b4cu: goto label_164b4c;
        case 0x164b50u: goto label_164b50;
        case 0x164b54u: goto label_164b54;
        case 0x164b58u: goto label_164b58;
        case 0x164b5cu: goto label_164b5c;
        case 0x164b60u: goto label_164b60;
        case 0x164b64u: goto label_164b64;
        case 0x164b68u: goto label_164b68;
        case 0x164b6cu: goto label_164b6c;
        case 0x164b70u: goto label_164b70;
        case 0x164b74u: goto label_164b74;
        case 0x164b78u: goto label_164b78;
        case 0x164b7cu: goto label_164b7c;
        case 0x164b80u: goto label_164b80;
        case 0x164b84u: goto label_164b84;
        case 0x164b88u: goto label_164b88;
        case 0x164b8cu: goto label_164b8c;
        case 0x164b90u: goto label_164b90;
        case 0x164b94u: goto label_164b94;
        case 0x164b98u: goto label_164b98;
        case 0x164b9cu: goto label_164b9c;
        case 0x164ba0u: goto label_164ba0;
        case 0x164ba4u: goto label_164ba4;
        case 0x164ba8u: goto label_164ba8;
        case 0x164bacu: goto label_164bac;
        case 0x164bb0u: goto label_164bb0;
        case 0x164bb4u: goto label_164bb4;
        case 0x164bb8u: goto label_164bb8;
        case 0x164bbcu: goto label_164bbc;
        case 0x164bc0u: goto label_164bc0;
        case 0x164bc4u: goto label_164bc4;
        case 0x164bc8u: goto label_164bc8;
        case 0x164bccu: goto label_164bcc;
        case 0x164bd0u: goto label_164bd0;
        case 0x164bd4u: goto label_164bd4;
        default: break;
    }

    ctx->pc = 0x164898u;

label_164898:
    // 0x164898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16489c:
    // 0x16489c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1648a0:
    // 0x1648a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1648a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1648a4:
    // 0x1648a4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1648a8:
    if (ctx->pc == 0x1648A8u) {
        ctx->pc = 0x1648A8u;
            // 0x1648a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1648ACu;
        goto label_1648ac;
    }
    ctx->pc = 0x1648A4u;
    {
        const bool branch_taken_0x1648a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1648A4u;
            // 0x1648a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648a4) {
            ctx->pc = 0x1648CCu;
            goto label_1648cc;
        }
    }
    ctx->pc = 0x1648ACu;
label_1648ac:
    // 0x1648ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1648acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1648b0:
    // 0x1648b0: 0xc05df5e  jal         func_177D78
label_1648b4:
    if (ctx->pc == 0x1648B4u) {
        ctx->pc = 0x1648B4u;
            // 0x1648b4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1648B8u;
        goto label_1648b8;
    }
    ctx->pc = 0x1648B0u;
    SET_GPR_U32(ctx, 31, 0x1648B8u);
    ctx->pc = 0x1648B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1648B0u;
            // 0x1648b4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177D78u;
    if (runtime->hasFunction(0x177D78u)) {
        auto targetFn = runtime->lookupFunction(0x177D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648B8u; }
        if (ctx->pc != 0x1648B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177D78_0x177d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648B8u; }
        if (ctx->pc != 0x1648B8u) { return; }
    }
    ctx->pc = 0x1648B8u;
label_1648b8:
    // 0x1648b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1648b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1648bc:
    // 0x1648bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1648bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1648c0:
    // 0x1648c0: 0xc04a576  jal         func_1295D8
label_1648c4:
    if (ctx->pc == 0x1648C4u) {
        ctx->pc = 0x1648C4u;
            // 0x1648c4: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x1648C8u;
        goto label_1648c8;
    }
    ctx->pc = 0x1648C0u;
    SET_GPR_U32(ctx, 31, 0x1648C8u);
    ctx->pc = 0x1648C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1648C0u;
            // 0x1648c4: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648C8u; }
        if (ctx->pc != 0x1648C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648C8u; }
        if (ctx->pc != 0x1648C8u) { return; }
    }
    ctx->pc = 0x1648C8u;
label_1648c8:
    // 0x1648c8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x1648c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_1648cc:
    // 0x1648cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1648ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1648d0:
    // 0x1648d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1648d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1648d4:
    // 0x1648d4: 0x3e00008  jr          $ra
label_1648d8:
    if (ctx->pc == 0x1648D8u) {
        ctx->pc = 0x1648D8u;
            // 0x1648d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1648DCu;
        goto label_1648dc;
    }
    ctx->pc = 0x1648D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1648D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1648D4u;
            // 0x1648d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1648DCu;
label_1648dc:
    // 0x1648dc: 0x0  nop
    ctx->pc = 0x1648dcu;
    // NOP
label_1648e0:
    // 0x1648e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1648e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1648e4:
    // 0x1648e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1648e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1648e8:
    // 0x1648e8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1648e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1648ec:
    // 0x1648ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1648ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1648f0:
    // 0x1648f0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1648f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1648f4:
    // 0x1648f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1648f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1648f8:
    // 0x1648f8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1648f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1648fc:
    // 0x1648fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1648fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164900:
    // 0x164900: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x164900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_164904:
    // 0x164904: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x164904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_164908:
    // 0x164908: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x164908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_16490c:
    // 0x16490c: 0x26140018  addiu       $s4, $s0, 0x18
    ctx->pc = 0x16490cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_164910:
    // 0x164910: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x164910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_164914:
    // 0x164914: 0x2615000d  addiu       $s5, $s0, 0xD
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_164918:
    // 0x164918: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x164918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_16491c:
    // 0x16491c: 0x2616000e  addiu       $s6, $s0, 0xE
    ctx->pc = 0x16491cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_164920:
    // 0x164920: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x164920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_164924:
    // 0x164924: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x164924u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_164928:
    // 0x164928: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x164928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_16492c:
    // 0x16492c: 0x261e000f  addiu       $fp, $s0, 0xF
    ctx->pc = 0x16492cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_164930:
    // 0x164930: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x164930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_164934:
    // 0x164934: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x164934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_164938:
    // 0x164938: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x164938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_16493c:
    // 0x16493c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x16493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_164940:
    // 0x164940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164944:
    // 0x164944: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164948:
    // 0x164948: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x164948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16494c:
    // 0x16494c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x16494cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_164950:
    // 0x164950: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x164950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_164954:
    // 0x164954: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x164954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_164958:
    // 0x164958: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x164958u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16495c:
    // 0x16495c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x16495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_164960:
    // 0x164960: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x164960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_164964:
    // 0x164964: 0xc059a84  jal         func_166A10
label_164968:
    if (ctx->pc == 0x164968u) {
        ctx->pc = 0x164968u;
            // 0x164968: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->pc = 0x16496Cu;
        goto label_16496c;
    }
    ctx->pc = 0x164964u;
    SET_GPR_U32(ctx, 31, 0x16496Cu);
    ctx->pc = 0x164968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164964u;
            // 0x164968: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166A10u;
    if (runtime->hasFunction(0x166A10u)) {
        auto targetFn = runtime->lookupFunction(0x166A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16496Cu; }
        if (ctx->pc != 0x16496Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166A10_0x166a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16496Cu; }
        if (ctx->pc != 0x16496Cu) { return; }
    }
    ctx->pc = 0x16496Cu;
label_16496c:
    // 0x16496c: 0x440008b  bltz        $v0, . + 4 + (0x8B << 2)
label_164970:
    if (ctx->pc == 0x164970u) {
        ctx->pc = 0x164970u;
            // 0x164970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164974u;
        goto label_164974;
    }
    ctx->pc = 0x16496Cu;
    {
        const bool branch_taken_0x16496c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16496Cu;
            // 0x164970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16496c) {
            ctx->pc = 0x164B9Cu;
            goto label_164b9c;
        }
    }
    ctx->pc = 0x164974u;
label_164974:
    // 0x164974: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x164974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_164978:
    // 0x164978: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x164978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_16497c:
    // 0x16497c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_164980:
    if (ctx->pc == 0x164980u) {
        ctx->pc = 0x164980u;
            // 0x164980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164984u;
        goto label_164984;
    }
    ctx->pc = 0x16497Cu;
    {
        const bool branch_taken_0x16497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16497Cu;
            // 0x164980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16497c) {
            ctx->pc = 0x164A68u;
            goto label_164a68;
        }
    }
    ctx->pc = 0x164984u;
label_164984:
    // 0x164984: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x164984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_164988:
    // 0x164988: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_16498c:
    if (ctx->pc == 0x16498Cu) {
        ctx->pc = 0x16498Cu;
            // 0x16498c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x164990u;
        goto label_164990;
    }
    ctx->pc = 0x164988u;
    {
        const bool branch_taken_0x164988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164988) {
            ctx->pc = 0x16498Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164988u;
            // 0x16498c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1649B0u;
            goto label_1649b0;
        }
    }
    ctx->pc = 0x164990u;
label_164990:
    // 0x164990: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x164990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_164994:
    // 0x164994: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x164994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_164998:
    // 0x164998: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x164998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
label_16499c:
    // 0x16499c: 0xc059f6c  jal         func_167DB0
label_1649a0:
    if (ctx->pc == 0x1649A0u) {
        ctx->pc = 0x1649A0u;
            // 0x1649a0: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->pc = 0x1649A4u;
        goto label_1649a4;
    }
    ctx->pc = 0x16499Cu;
    SET_GPR_U32(ctx, 31, 0x1649A4u);
    ctx->pc = 0x1649A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16499Cu;
            // 0x1649a0: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649A4u; }
        if (ctx->pc != 0x1649A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649A4u; }
        if (ctx->pc != 0x1649A4u) { return; }
    }
    ctx->pc = 0x1649A4u;
label_1649a4:
    // 0x1649a4: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1649a8:
    if (ctx->pc == 0x1649A8u) {
        ctx->pc = 0x1649A8u;
            // 0x1649a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1649ACu;
        goto label_1649ac;
    }
    ctx->pc = 0x1649A4u;
    {
        const bool branch_taken_0x1649a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1649A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1649A4u;
            // 0x1649a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649a4) {
            ctx->pc = 0x164B9Cu;
            goto label_164b9c;
        }
    }
    ctx->pc = 0x1649ACu;
label_1649ac:
    // 0x1649ac: 0x0  nop
    ctx->pc = 0x1649acu;
    // NOP
label_1649b0:
    // 0x1649b0: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x1649b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1649b4:
    // 0x1649b4: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1649b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_1649b8:
    // 0x1649b8: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1649b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1649bc:
    // 0x1649bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1649bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1649c0:
    // 0x1649c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1649c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1649c4:
    // 0x1649c4: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x1649c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1649c8:
    // 0x1649c8: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x1649c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_1649cc:
    // 0x1649cc: 0x27a70043  addiu       $a3, $sp, 0x43
    ctx->pc = 0x1649ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
label_1649d0:
    // 0x1649d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1649d4:
    // 0x1649d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1649d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1649d8:
    // 0x1649d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1649d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1649dc:
    // 0x1649dc: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x1649dcu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_1649e0:
    // 0x1649e0: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x1649e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
label_1649e4:
    // 0x1649e4: 0xa6080098  sh          $t0, 0x98($s0)
    ctx->pc = 0x1649e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 8));
label_1649e8:
    // 0x1649e8: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x1649e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_1649ec:
    // 0x1649ec: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1649ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_1649f0:
    // 0x1649f0: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x1649f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_1649f4:
    // 0x1649f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1649f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1649f8:
    // 0x1649f8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1649f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1649fc:
    // 0x1649fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1649fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_164a00:
    // 0x164a00: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x164a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_164a04:
    // 0x164a04: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x164a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_164a08:
    // 0x164a08: 0xc059ae4  jal         func_166B90
label_164a0c:
    if (ctx->pc == 0x164A0Cu) {
        ctx->pc = 0x164A0Cu;
            // 0x164a0c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x164A10u;
        goto label_164a10;
    }
    ctx->pc = 0x164A08u;
    SET_GPR_U32(ctx, 31, 0x164A10u);
    ctx->pc = 0x164A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A08u;
            // 0x164a0c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B90u;
    if (runtime->hasFunction(0x166B90u)) {
        auto targetFn = runtime->lookupFunction(0x166B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A10u; }
        if (ctx->pc != 0x164A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B90_0x166b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A10u; }
        if (ctx->pc != 0x164A10u) { return; }
    }
    ctx->pc = 0x164A10u;
label_164a10:
    // 0x164a10: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
label_164a14:
    if (ctx->pc == 0x164A14u) {
        ctx->pc = 0x164A14u;
            // 0x164a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164A18u;
        goto label_164a18;
    }
    ctx->pc = 0x164A10u;
    {
        const bool branch_taken_0x164a10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A10u;
            // 0x164a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a10) {
            ctx->pc = 0x164AECu;
            goto label_164aec;
        }
    }
    ctx->pc = 0x164A18u;
label_164a18:
    // 0x164a18: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x164a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_164a1c:
    // 0x164a1c: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x164a1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_164a20:
    // 0x164a20: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x164a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
label_164a24:
    // 0x164a24: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x164a24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_164a28:
    // 0x164a28: 0x27a90034  addiu       $t1, $sp, 0x34
    ctx->pc = 0x164a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_164a2c:
    // 0x164a2c: 0x27aa0036  addiu       $t2, $sp, 0x36
    ctx->pc = 0x164a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
label_164a30:
    // 0x164a30: 0xc059432  jal         func_1650C8
label_164a34:
    if (ctx->pc == 0x164A34u) {
        ctx->pc = 0x164A34u;
            // 0x164a34: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x164A38u;
        goto label_164a38;
    }
    ctx->pc = 0x164A30u;
    SET_GPR_U32(ctx, 31, 0x164A38u);
    ctx->pc = 0x164A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A30u;
            // 0x164a34: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1650C8u;
    if (runtime->hasFunction(0x1650C8u)) {
        auto targetFn = runtime->lookupFunction(0x1650C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A38u; }
        if (ctx->pc != 0x164A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001650C8_0x1650c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A38u; }
        if (ctx->pc != 0x164A38u) { return; }
    }
    ctx->pc = 0x164A38u;
label_164a38:
    // 0x164a38: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
label_164a3c:
    if (ctx->pc == 0x164A3Cu) {
        ctx->pc = 0x164A3Cu;
            // 0x164a3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x164A40u;
        goto label_164a40;
    }
    ctx->pc = 0x164A38u;
    {
        const bool branch_taken_0x164a38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A38u;
            // 0x164a3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a38) {
            ctx->pc = 0x164B9Cu;
            goto label_164b9c;
        }
    }
    ctx->pc = 0x164A40u;
label_164a40:
    // 0x164a40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_164a44:
    // 0x164a44: 0x8c4261e8  lw          $v0, 0x61E8($v0)
    ctx->pc = 0x164a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25064)));
label_164a48:
    // 0x164a48: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_164a4c:
    if (ctx->pc == 0x164A4Cu) {
        ctx->pc = 0x164A4Cu;
            // 0x164a4c: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x164A50u;
        goto label_164a50;
    }
    ctx->pc = 0x164A48u;
    {
        const bool branch_taken_0x164a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a48) {
            ctx->pc = 0x164A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164A48u;
            // 0x164a4c: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164B68u;
            goto label_164b68;
        }
    }
    ctx->pc = 0x164A50u;
label_164a50:
    // 0x164a50: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x164a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_164a54:
    // 0x164a54: 0x40f809  jalr        $v0
label_164a58:
    if (ctx->pc == 0x164A58u) {
        ctx->pc = 0x164A58u;
            // 0x164a58: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x164A5Cu;
        goto label_164a5c;
    }
    ctx->pc = 0x164A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164A5Cu);
        ctx->pc = 0x164A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A54u;
            // 0x164a58: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x164A5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164A5Cu; }
            if (ctx->pc != 0x164A5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x164A5Cu;
label_164a5c:
    // 0x164a5c: 0x10000042  b           . + 4 + (0x42 << 2)
label_164a60:
    if (ctx->pc == 0x164A60u) {
        ctx->pc = 0x164A60u;
            // 0x164a60: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x164A64u;
        goto label_164a64;
    }
    ctx->pc = 0x164A5Cu;
    {
        const bool branch_taken_0x164a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A5Cu;
            // 0x164a60: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a5c) {
            ctx->pc = 0x164B68u;
            goto label_164b68;
        }
    }
    ctx->pc = 0x164A64u;
label_164a64:
    // 0x164a64: 0x0  nop
    ctx->pc = 0x164a64u;
    // NOP
label_164a68:
    // 0x164a68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164a6c:
    // 0x164a6c: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x164a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_164a70:
    // 0x164a70: 0xc059ae4  jal         func_166B90
label_164a74:
    if (ctx->pc == 0x164A74u) {
        ctx->pc = 0x164A74u;
            // 0x164a74: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
        ctx->pc = 0x164A78u;
        goto label_164a78;
    }
    ctx->pc = 0x164A70u;
    SET_GPR_U32(ctx, 31, 0x164A78u);
    ctx->pc = 0x164A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A70u;
            // 0x164a74: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B90u;
    if (runtime->hasFunction(0x166B90u)) {
        auto targetFn = runtime->lookupFunction(0x166B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A78u; }
        if (ctx->pc != 0x164A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B90_0x166b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A78u; }
        if (ctx->pc != 0x164A78u) { return; }
    }
    ctx->pc = 0x164A78u;
label_164a78:
    // 0x164a78: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
label_164a7c:
    if (ctx->pc == 0x164A7Cu) {
        ctx->pc = 0x164A7Cu;
            // 0x164a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164A80u;
        goto label_164a80;
    }
    ctx->pc = 0x164A78u;
    {
        const bool branch_taken_0x164a78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A78u;
            // 0x164a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a78) {
            ctx->pc = 0x164AECu;
            goto label_164aec;
        }
    }
    ctx->pc = 0x164A80u;
label_164a80:
    // 0x164a80: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x164a80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_164a84:
    // 0x164a84: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x164a84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_164a88:
    // 0x164a88: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x164a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_164a8c:
    // 0x164a8c: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x164a8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_164a90:
    // 0x164a90: 0x27a90046  addiu       $t1, $sp, 0x46
    ctx->pc = 0x164a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
label_164a94:
    // 0x164a94: 0xc059432  jal         func_1650C8
label_164a98:
    if (ctx->pc == 0x164A98u) {
        ctx->pc = 0x164A98u;
            // 0x164a98: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x164A9Cu;
        goto label_164a9c;
    }
    ctx->pc = 0x164A94u;
    SET_GPR_U32(ctx, 31, 0x164A9Cu);
    ctx->pc = 0x164A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164A94u;
            // 0x164a98: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1650C8u;
    if (runtime->hasFunction(0x1650C8u)) {
        auto targetFn = runtime->lookupFunction(0x1650C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A9Cu; }
        if (ctx->pc != 0x164A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001650C8_0x1650c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164A9Cu; }
        if (ctx->pc != 0x164A9Cu) { return; }
    }
    ctx->pc = 0x164A9Cu;
label_164a9c:
    // 0x164a9c: 0x440ffc1  bltz        $v0, . + 4 + (-0x3F << 2)
label_164aa0:
    if (ctx->pc == 0x164AA0u) {
        ctx->pc = 0x164AA0u;
            // 0x164aa0: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->pc = 0x164AA4u;
        goto label_164aa4;
    }
    ctx->pc = 0x164A9Cu;
    {
        const bool branch_taken_0x164a9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A9Cu;
            // 0x164aa0: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a9c) {
            ctx->pc = 0x1649A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1649a4;
        }
    }
    ctx->pc = 0x164AA4u;
label_164aa4:
    // 0x164aa4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x164aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_164aa8:
    // 0x164aa8: 0x87a50044  lh          $a1, 0x44($sp)
    ctx->pc = 0x164aa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
label_164aac:
    // 0x164aac: 0x87a60046  lh          $a2, 0x46($sp)
    ctx->pc = 0x164aacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
label_164ab0:
    // 0x164ab0: 0xc05df52  jal         func_177D48
label_164ab4:
    if (ctx->pc == 0x164AB4u) {
        ctx->pc = 0x164AB4u;
            // 0x164ab4: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x164AB8u;
        goto label_164ab8;
    }
    ctx->pc = 0x164AB0u;
    SET_GPR_U32(ctx, 31, 0x164AB8u);
    ctx->pc = 0x164AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164AB0u;
            // 0x164ab4: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177D48u;
    if (runtime->hasFunction(0x177D48u)) {
        auto targetFn = runtime->lookupFunction(0x177D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AB8u; }
        if (ctx->pc != 0x164AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177D48_0x177d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AB8u; }
        if (ctx->pc != 0x164AB8u) { return; }
    }
    ctx->pc = 0x164AB8u;
label_164ab8:
    // 0x164ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164abc:
    // 0x164abc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164ac0:
    // 0x164ac0: 0xc059ac4  jal         func_166B10
label_164ac4:
    if (ctx->pc == 0x164AC4u) {
        ctx->pc = 0x164AC4u;
            // 0x164ac4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164AC8u;
        goto label_164ac8;
    }
    ctx->pc = 0x164AC0u;
    SET_GPR_U32(ctx, 31, 0x164AC8u);
    ctx->pc = 0x164AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164AC0u;
            // 0x164ac4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B10u;
    if (runtime->hasFunction(0x166B10u)) {
        auto targetFn = runtime->lookupFunction(0x166B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AC8u; }
        if (ctx->pc != 0x164AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B10_0x166b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AC8u; }
        if (ctx->pc != 0x164AC8u) { return; }
    }
    ctx->pc = 0x164AC8u;
label_164ac8:
    // 0x164ac8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_164acc:
    if (ctx->pc == 0x164ACCu) {
        ctx->pc = 0x164ACCu;
            // 0x164acc: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x164AD0u;
        goto label_164ad0;
    }
    ctx->pc = 0x164AC8u;
    {
        const bool branch_taken_0x164ac8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164AC8u;
            // 0x164acc: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ac8) {
            ctx->pc = 0x164AECu;
            goto label_164aec;
        }
    }
    ctx->pc = 0x164AD0u;
label_164ad0:
    // 0x164ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164ad4:
    // 0x164ad4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164ad8:
    // 0x164ad8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_164adc:
    // 0x164adc: 0xc059b02  jal         func_166C08
label_164ae0:
    if (ctx->pc == 0x164AE0u) {
        ctx->pc = 0x164AE0u;
            // 0x164ae0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164AE4u;
        goto label_164ae4;
    }
    ctx->pc = 0x164ADCu;
    SET_GPR_U32(ctx, 31, 0x164AE4u);
    ctx->pc = 0x164AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164ADCu;
            // 0x164ae0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166C08u;
    if (runtime->hasFunction(0x166C08u)) {
        auto targetFn = runtime->lookupFunction(0x166C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AE4u; }
        if (ctx->pc != 0x164AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166C08_0x166c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AE4u; }
        if (ctx->pc != 0x164AE4u) { return; }
    }
    ctx->pc = 0x164AE4u;
label_164ae4:
    // 0x164ae4: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_164ae8:
    if (ctx->pc == 0x164AE8u) {
        ctx->pc = 0x164AE8u;
            // 0x164ae8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x164AECu;
        goto label_164aec;
    }
    ctx->pc = 0x164AE4u;
    {
        const bool branch_taken_0x164ae4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x164ae4) {
            ctx->pc = 0x164AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164AE4u;
            // 0x164ae8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164AF8u;
            goto label_164af8;
        }
    }
    ctx->pc = 0x164AECu;
label_164aec:
    // 0x164aec: 0x1000002b  b           . + 4 + (0x2B << 2)
label_164af0:
    if (ctx->pc == 0x164AF0u) {
        ctx->pc = 0x164AF0u;
            // 0x164af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164AF4u;
        goto label_164af4;
    }
    ctx->pc = 0x164AECu;
    {
        const bool branch_taken_0x164aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164AECu;
            // 0x164af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164aec) {
            ctx->pc = 0x164B9Cu;
            goto label_164b9c;
        }
    }
    ctx->pc = 0x164AF4u;
label_164af4:
    // 0x164af4: 0x0  nop
    ctx->pc = 0x164af4u;
    // NOP
label_164af8:
    // 0x164af8: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_164afc:
    // 0x164afc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x164afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_164b00:
    // 0x164b00: 0xc05df34  jal         func_177CD0
label_164b04:
    if (ctx->pc == 0x164B04u) {
        ctx->pc = 0x164B04u;
            // 0x164b04: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x164B08u;
        goto label_164b08;
    }
    ctx->pc = 0x164B00u;
    SET_GPR_U32(ctx, 31, 0x164B08u);
    ctx->pc = 0x164B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B00u;
            // 0x164b04: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177CD0u;
    if (runtime->hasFunction(0x177CD0u)) {
        auto targetFn = runtime->lookupFunction(0x177CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B08u; }
        if (ctx->pc != 0x164B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177CD0_0x177cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B08u; }
        if (ctx->pc != 0x164B08u) { return; }
    }
    ctx->pc = 0x164B08u;
label_164b08:
    // 0x164b08: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x164b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_164b0c:
    // 0x164b0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x164b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_164b10:
    // 0x164b10: 0xc05df3e  jal         func_177CF8
label_164b14:
    if (ctx->pc == 0x164B14u) {
        ctx->pc = 0x164B14u;
            // 0x164b14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164B18u;
        goto label_164b18;
    }
    ctx->pc = 0x164B10u;
    SET_GPR_U32(ctx, 31, 0x164B18u);
    ctx->pc = 0x164B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B10u;
            // 0x164b14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177CF8u;
    if (runtime->hasFunction(0x177CF8u)) {
        auto targetFn = runtime->lookupFunction(0x177CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B18u; }
        if (ctx->pc != 0x164B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177CF8_0x177cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B18u; }
        if (ctx->pc != 0x164B18u) { return; }
    }
    ctx->pc = 0x164B18u;
label_164b18:
    // 0x164b18: 0x26020034  addiu       $v0, $s0, 0x34
    ctx->pc = 0x164b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_164b1c:
    // 0x164b1c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_164b20:
    // 0x164b20: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_164b24:
    // 0x164b24: 0x26080026  addiu       $t0, $s0, 0x26
    ctx->pc = 0x164b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
label_164b28:
    // 0x164b28: 0x26090028  addiu       $t1, $s0, 0x28
    ctx->pc = 0x164b28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_164b2c:
    // 0x164b2c: 0x260a002c  addiu       $t2, $s0, 0x2C
    ctx->pc = 0x164b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_164b30:
    // 0x164b30: 0x260b0030  addiu       $t3, $s0, 0x30
    ctx->pc = 0x164b30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_164b34:
    // 0x164b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164b38:
    // 0x164b38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164b3c:
    // 0x164b3c: 0xc059b82  jal         func_166E08
label_164b40:
    if (ctx->pc == 0x164B40u) {
        ctx->pc = 0x164B40u;
            // 0x164b40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x164B44u;
        goto label_164b44;
    }
    ctx->pc = 0x164B3Cu;
    SET_GPR_U32(ctx, 31, 0x164B44u);
    ctx->pc = 0x164B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B3Cu;
            // 0x164b40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166E08u;
    if (runtime->hasFunction(0x166E08u)) {
        auto targetFn = runtime->lookupFunction(0x166E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B44u; }
        if (ctx->pc != 0x164B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166E08_0x166e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B44u; }
        if (ctx->pc != 0x164B44u) { return; }
    }
    ctx->pc = 0x164B44u;
label_164b44:
    // 0x164b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164b48:
    // 0x164b48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_164b4c:
    // 0x164b4c: 0x260600cc  addiu       $a2, $s0, 0xCC
    ctx->pc = 0x164b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
label_164b50:
    // 0x164b50: 0x260700d0  addiu       $a3, $s0, 0xD0
    ctx->pc = 0x164b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_164b54:
    // 0x164b54: 0x260800e0  addiu       $t0, $s0, 0xE0
    ctx->pc = 0x164b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_164b58:
    // 0x164b58: 0xc059c1a  jal         func_167068
label_164b5c:
    if (ctx->pc == 0x164B5Cu) {
        ctx->pc = 0x164B5Cu;
            // 0x164b5c: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
        ctx->pc = 0x164B60u;
        goto label_164b60;
    }
    ctx->pc = 0x164B58u;
    SET_GPR_U32(ctx, 31, 0x164B60u);
    ctx->pc = 0x164B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B58u;
            // 0x164b5c: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167068u;
    if (runtime->hasFunction(0x167068u)) {
        auto targetFn = runtime->lookupFunction(0x167068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B60u; }
        if (ctx->pc != 0x164B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167068_0x167068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B60u; }
        if (ctx->pc != 0x164B60u) { return; }
    }
    ctx->pc = 0x164B60u;
label_164b60:
    // 0x164b60: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x164b60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
label_164b64:
    // 0x164b64: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x164b64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_164b68:
    // 0x164b68: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x164b68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_164b6c:
    // 0x164b6c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_164b70:
    // 0x164b70: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_164b74:
    // 0x164b74: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x164b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_164b78:
    // 0x164b78: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x164b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_164b7c:
    // 0x164b7c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x164b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_164b80:
    // 0x164b80: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x164b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_164b84:
    // 0x164b84: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x164b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_164b88:
    // 0x164b88: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x164b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_164b8c:
    // 0x164b8c: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x164b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_164b90:
    // 0x164b90: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x164b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_164b94:
    // 0x164b94: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x164b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_164b98:
    // 0x164b98: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x164b98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_164b9c:
    // 0x164b9c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x164b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_164ba0:
    // 0x164ba0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x164ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_164ba4:
    // 0x164ba4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x164ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_164ba8:
    // 0x164ba8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x164ba8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_164bac:
    // 0x164bac: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x164bacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_164bb0:
    // 0x164bb0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x164bb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_164bb4:
    // 0x164bb4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x164bb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_164bb8:
    // 0x164bb8: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x164bb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_164bbc:
    // 0x164bbc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x164bbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_164bc0:
    // 0x164bc0: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x164bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_164bc4:
    // 0x164bc4: 0x3e00008  jr          $ra
label_164bc8:
    if (ctx->pc == 0x164BC8u) {
        ctx->pc = 0x164BC8u;
            // 0x164bc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x164BCCu;
        goto label_164bcc;
    }
    ctx->pc = 0x164BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164BC4u;
            // 0x164bc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164BCCu;
label_164bcc:
    // 0x164bcc: 0x0  nop
    ctx->pc = 0x164bccu;
    // NOP
label_164bd0:
    // 0x164bd0: 0x3e00008  jr          $ra
label_164bd4:
    if (ctx->pc == 0x164BD4u) {
        ctx->pc = 0x164BD4u;
            // 0x164bd4: 0xa480009a  sh          $zero, 0x9A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 154), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x164BD8u;
        goto label_fallthrough_0x164bd0;
    }
    ctx->pc = 0x164BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164BD0u;
            // 0x164bd4: 0xa480009a  sh          $zero, 0x9A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x164bd0:
    ctx->pc = 0x164BD8u;
}
