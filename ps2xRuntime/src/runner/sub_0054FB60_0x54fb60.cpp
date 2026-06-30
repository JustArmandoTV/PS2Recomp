#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054FB60
// Address: 0x54fb60 - 0x54ffd0
void sub_0054FB60_0x54fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054FB60_0x54fb60");
#endif

    switch (ctx->pc) {
        case 0x54fb60u: goto label_54fb60;
        case 0x54fb64u: goto label_54fb64;
        case 0x54fb68u: goto label_54fb68;
        case 0x54fb6cu: goto label_54fb6c;
        case 0x54fb70u: goto label_54fb70;
        case 0x54fb74u: goto label_54fb74;
        case 0x54fb78u: goto label_54fb78;
        case 0x54fb7cu: goto label_54fb7c;
        case 0x54fb80u: goto label_54fb80;
        case 0x54fb84u: goto label_54fb84;
        case 0x54fb88u: goto label_54fb88;
        case 0x54fb8cu: goto label_54fb8c;
        case 0x54fb90u: goto label_54fb90;
        case 0x54fb94u: goto label_54fb94;
        case 0x54fb98u: goto label_54fb98;
        case 0x54fb9cu: goto label_54fb9c;
        case 0x54fba0u: goto label_54fba0;
        case 0x54fba4u: goto label_54fba4;
        case 0x54fba8u: goto label_54fba8;
        case 0x54fbacu: goto label_54fbac;
        case 0x54fbb0u: goto label_54fbb0;
        case 0x54fbb4u: goto label_54fbb4;
        case 0x54fbb8u: goto label_54fbb8;
        case 0x54fbbcu: goto label_54fbbc;
        case 0x54fbc0u: goto label_54fbc0;
        case 0x54fbc4u: goto label_54fbc4;
        case 0x54fbc8u: goto label_54fbc8;
        case 0x54fbccu: goto label_54fbcc;
        case 0x54fbd0u: goto label_54fbd0;
        case 0x54fbd4u: goto label_54fbd4;
        case 0x54fbd8u: goto label_54fbd8;
        case 0x54fbdcu: goto label_54fbdc;
        case 0x54fbe0u: goto label_54fbe0;
        case 0x54fbe4u: goto label_54fbe4;
        case 0x54fbe8u: goto label_54fbe8;
        case 0x54fbecu: goto label_54fbec;
        case 0x54fbf0u: goto label_54fbf0;
        case 0x54fbf4u: goto label_54fbf4;
        case 0x54fbf8u: goto label_54fbf8;
        case 0x54fbfcu: goto label_54fbfc;
        case 0x54fc00u: goto label_54fc00;
        case 0x54fc04u: goto label_54fc04;
        case 0x54fc08u: goto label_54fc08;
        case 0x54fc0cu: goto label_54fc0c;
        case 0x54fc10u: goto label_54fc10;
        case 0x54fc14u: goto label_54fc14;
        case 0x54fc18u: goto label_54fc18;
        case 0x54fc1cu: goto label_54fc1c;
        case 0x54fc20u: goto label_54fc20;
        case 0x54fc24u: goto label_54fc24;
        case 0x54fc28u: goto label_54fc28;
        case 0x54fc2cu: goto label_54fc2c;
        case 0x54fc30u: goto label_54fc30;
        case 0x54fc34u: goto label_54fc34;
        case 0x54fc38u: goto label_54fc38;
        case 0x54fc3cu: goto label_54fc3c;
        case 0x54fc40u: goto label_54fc40;
        case 0x54fc44u: goto label_54fc44;
        case 0x54fc48u: goto label_54fc48;
        case 0x54fc4cu: goto label_54fc4c;
        case 0x54fc50u: goto label_54fc50;
        case 0x54fc54u: goto label_54fc54;
        case 0x54fc58u: goto label_54fc58;
        case 0x54fc5cu: goto label_54fc5c;
        case 0x54fc60u: goto label_54fc60;
        case 0x54fc64u: goto label_54fc64;
        case 0x54fc68u: goto label_54fc68;
        case 0x54fc6cu: goto label_54fc6c;
        case 0x54fc70u: goto label_54fc70;
        case 0x54fc74u: goto label_54fc74;
        case 0x54fc78u: goto label_54fc78;
        case 0x54fc7cu: goto label_54fc7c;
        case 0x54fc80u: goto label_54fc80;
        case 0x54fc84u: goto label_54fc84;
        case 0x54fc88u: goto label_54fc88;
        case 0x54fc8cu: goto label_54fc8c;
        case 0x54fc90u: goto label_54fc90;
        case 0x54fc94u: goto label_54fc94;
        case 0x54fc98u: goto label_54fc98;
        case 0x54fc9cu: goto label_54fc9c;
        case 0x54fca0u: goto label_54fca0;
        case 0x54fca4u: goto label_54fca4;
        case 0x54fca8u: goto label_54fca8;
        case 0x54fcacu: goto label_54fcac;
        case 0x54fcb0u: goto label_54fcb0;
        case 0x54fcb4u: goto label_54fcb4;
        case 0x54fcb8u: goto label_54fcb8;
        case 0x54fcbcu: goto label_54fcbc;
        case 0x54fcc0u: goto label_54fcc0;
        case 0x54fcc4u: goto label_54fcc4;
        case 0x54fcc8u: goto label_54fcc8;
        case 0x54fcccu: goto label_54fccc;
        case 0x54fcd0u: goto label_54fcd0;
        case 0x54fcd4u: goto label_54fcd4;
        case 0x54fcd8u: goto label_54fcd8;
        case 0x54fcdcu: goto label_54fcdc;
        case 0x54fce0u: goto label_54fce0;
        case 0x54fce4u: goto label_54fce4;
        case 0x54fce8u: goto label_54fce8;
        case 0x54fcecu: goto label_54fcec;
        case 0x54fcf0u: goto label_54fcf0;
        case 0x54fcf4u: goto label_54fcf4;
        case 0x54fcf8u: goto label_54fcf8;
        case 0x54fcfcu: goto label_54fcfc;
        case 0x54fd00u: goto label_54fd00;
        case 0x54fd04u: goto label_54fd04;
        case 0x54fd08u: goto label_54fd08;
        case 0x54fd0cu: goto label_54fd0c;
        case 0x54fd10u: goto label_54fd10;
        case 0x54fd14u: goto label_54fd14;
        case 0x54fd18u: goto label_54fd18;
        case 0x54fd1cu: goto label_54fd1c;
        case 0x54fd20u: goto label_54fd20;
        case 0x54fd24u: goto label_54fd24;
        case 0x54fd28u: goto label_54fd28;
        case 0x54fd2cu: goto label_54fd2c;
        case 0x54fd30u: goto label_54fd30;
        case 0x54fd34u: goto label_54fd34;
        case 0x54fd38u: goto label_54fd38;
        case 0x54fd3cu: goto label_54fd3c;
        case 0x54fd40u: goto label_54fd40;
        case 0x54fd44u: goto label_54fd44;
        case 0x54fd48u: goto label_54fd48;
        case 0x54fd4cu: goto label_54fd4c;
        case 0x54fd50u: goto label_54fd50;
        case 0x54fd54u: goto label_54fd54;
        case 0x54fd58u: goto label_54fd58;
        case 0x54fd5cu: goto label_54fd5c;
        case 0x54fd60u: goto label_54fd60;
        case 0x54fd64u: goto label_54fd64;
        case 0x54fd68u: goto label_54fd68;
        case 0x54fd6cu: goto label_54fd6c;
        case 0x54fd70u: goto label_54fd70;
        case 0x54fd74u: goto label_54fd74;
        case 0x54fd78u: goto label_54fd78;
        case 0x54fd7cu: goto label_54fd7c;
        case 0x54fd80u: goto label_54fd80;
        case 0x54fd84u: goto label_54fd84;
        case 0x54fd88u: goto label_54fd88;
        case 0x54fd8cu: goto label_54fd8c;
        case 0x54fd90u: goto label_54fd90;
        case 0x54fd94u: goto label_54fd94;
        case 0x54fd98u: goto label_54fd98;
        case 0x54fd9cu: goto label_54fd9c;
        case 0x54fda0u: goto label_54fda0;
        case 0x54fda4u: goto label_54fda4;
        case 0x54fda8u: goto label_54fda8;
        case 0x54fdacu: goto label_54fdac;
        case 0x54fdb0u: goto label_54fdb0;
        case 0x54fdb4u: goto label_54fdb4;
        case 0x54fdb8u: goto label_54fdb8;
        case 0x54fdbcu: goto label_54fdbc;
        case 0x54fdc0u: goto label_54fdc0;
        case 0x54fdc4u: goto label_54fdc4;
        case 0x54fdc8u: goto label_54fdc8;
        case 0x54fdccu: goto label_54fdcc;
        case 0x54fdd0u: goto label_54fdd0;
        case 0x54fdd4u: goto label_54fdd4;
        case 0x54fdd8u: goto label_54fdd8;
        case 0x54fddcu: goto label_54fddc;
        case 0x54fde0u: goto label_54fde0;
        case 0x54fde4u: goto label_54fde4;
        case 0x54fde8u: goto label_54fde8;
        case 0x54fdecu: goto label_54fdec;
        case 0x54fdf0u: goto label_54fdf0;
        case 0x54fdf4u: goto label_54fdf4;
        case 0x54fdf8u: goto label_54fdf8;
        case 0x54fdfcu: goto label_54fdfc;
        case 0x54fe00u: goto label_54fe00;
        case 0x54fe04u: goto label_54fe04;
        case 0x54fe08u: goto label_54fe08;
        case 0x54fe0cu: goto label_54fe0c;
        case 0x54fe10u: goto label_54fe10;
        case 0x54fe14u: goto label_54fe14;
        case 0x54fe18u: goto label_54fe18;
        case 0x54fe1cu: goto label_54fe1c;
        case 0x54fe20u: goto label_54fe20;
        case 0x54fe24u: goto label_54fe24;
        case 0x54fe28u: goto label_54fe28;
        case 0x54fe2cu: goto label_54fe2c;
        case 0x54fe30u: goto label_54fe30;
        case 0x54fe34u: goto label_54fe34;
        case 0x54fe38u: goto label_54fe38;
        case 0x54fe3cu: goto label_54fe3c;
        case 0x54fe40u: goto label_54fe40;
        case 0x54fe44u: goto label_54fe44;
        case 0x54fe48u: goto label_54fe48;
        case 0x54fe4cu: goto label_54fe4c;
        case 0x54fe50u: goto label_54fe50;
        case 0x54fe54u: goto label_54fe54;
        case 0x54fe58u: goto label_54fe58;
        case 0x54fe5cu: goto label_54fe5c;
        case 0x54fe60u: goto label_54fe60;
        case 0x54fe64u: goto label_54fe64;
        case 0x54fe68u: goto label_54fe68;
        case 0x54fe6cu: goto label_54fe6c;
        case 0x54fe70u: goto label_54fe70;
        case 0x54fe74u: goto label_54fe74;
        case 0x54fe78u: goto label_54fe78;
        case 0x54fe7cu: goto label_54fe7c;
        case 0x54fe80u: goto label_54fe80;
        case 0x54fe84u: goto label_54fe84;
        case 0x54fe88u: goto label_54fe88;
        case 0x54fe8cu: goto label_54fe8c;
        case 0x54fe90u: goto label_54fe90;
        case 0x54fe94u: goto label_54fe94;
        case 0x54fe98u: goto label_54fe98;
        case 0x54fe9cu: goto label_54fe9c;
        case 0x54fea0u: goto label_54fea0;
        case 0x54fea4u: goto label_54fea4;
        case 0x54fea8u: goto label_54fea8;
        case 0x54feacu: goto label_54feac;
        case 0x54feb0u: goto label_54feb0;
        case 0x54feb4u: goto label_54feb4;
        case 0x54feb8u: goto label_54feb8;
        case 0x54febcu: goto label_54febc;
        case 0x54fec0u: goto label_54fec0;
        case 0x54fec4u: goto label_54fec4;
        case 0x54fec8u: goto label_54fec8;
        case 0x54feccu: goto label_54fecc;
        case 0x54fed0u: goto label_54fed0;
        case 0x54fed4u: goto label_54fed4;
        case 0x54fed8u: goto label_54fed8;
        case 0x54fedcu: goto label_54fedc;
        case 0x54fee0u: goto label_54fee0;
        case 0x54fee4u: goto label_54fee4;
        case 0x54fee8u: goto label_54fee8;
        case 0x54feecu: goto label_54feec;
        case 0x54fef0u: goto label_54fef0;
        case 0x54fef4u: goto label_54fef4;
        case 0x54fef8u: goto label_54fef8;
        case 0x54fefcu: goto label_54fefc;
        case 0x54ff00u: goto label_54ff00;
        case 0x54ff04u: goto label_54ff04;
        case 0x54ff08u: goto label_54ff08;
        case 0x54ff0cu: goto label_54ff0c;
        case 0x54ff10u: goto label_54ff10;
        case 0x54ff14u: goto label_54ff14;
        case 0x54ff18u: goto label_54ff18;
        case 0x54ff1cu: goto label_54ff1c;
        case 0x54ff20u: goto label_54ff20;
        case 0x54ff24u: goto label_54ff24;
        case 0x54ff28u: goto label_54ff28;
        case 0x54ff2cu: goto label_54ff2c;
        case 0x54ff30u: goto label_54ff30;
        case 0x54ff34u: goto label_54ff34;
        case 0x54ff38u: goto label_54ff38;
        case 0x54ff3cu: goto label_54ff3c;
        case 0x54ff40u: goto label_54ff40;
        case 0x54ff44u: goto label_54ff44;
        case 0x54ff48u: goto label_54ff48;
        case 0x54ff4cu: goto label_54ff4c;
        case 0x54ff50u: goto label_54ff50;
        case 0x54ff54u: goto label_54ff54;
        case 0x54ff58u: goto label_54ff58;
        case 0x54ff5cu: goto label_54ff5c;
        case 0x54ff60u: goto label_54ff60;
        case 0x54ff64u: goto label_54ff64;
        case 0x54ff68u: goto label_54ff68;
        case 0x54ff6cu: goto label_54ff6c;
        case 0x54ff70u: goto label_54ff70;
        case 0x54ff74u: goto label_54ff74;
        case 0x54ff78u: goto label_54ff78;
        case 0x54ff7cu: goto label_54ff7c;
        case 0x54ff80u: goto label_54ff80;
        case 0x54ff84u: goto label_54ff84;
        case 0x54ff88u: goto label_54ff88;
        case 0x54ff8cu: goto label_54ff8c;
        case 0x54ff90u: goto label_54ff90;
        case 0x54ff94u: goto label_54ff94;
        case 0x54ff98u: goto label_54ff98;
        case 0x54ff9cu: goto label_54ff9c;
        case 0x54ffa0u: goto label_54ffa0;
        case 0x54ffa4u: goto label_54ffa4;
        case 0x54ffa8u: goto label_54ffa8;
        case 0x54ffacu: goto label_54ffac;
        case 0x54ffb0u: goto label_54ffb0;
        case 0x54ffb4u: goto label_54ffb4;
        case 0x54ffb8u: goto label_54ffb8;
        case 0x54ffbcu: goto label_54ffbc;
        case 0x54ffc0u: goto label_54ffc0;
        case 0x54ffc4u: goto label_54ffc4;
        case 0x54ffc8u: goto label_54ffc8;
        case 0x54ffccu: goto label_54ffcc;
        default: break;
    }

    ctx->pc = 0x54fb60u;

label_54fb60:
    // 0x54fb60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x54fb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_54fb64:
    // 0x54fb64: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54fb68:
    // 0x54fb68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x54fb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_54fb6c:
    // 0x54fb6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x54fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54fb70:
    // 0x54fb70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x54fb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_54fb74:
    // 0x54fb74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x54fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_54fb78:
    // 0x54fb78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x54fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_54fb7c:
    // 0x54fb7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x54fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_54fb80:
    // 0x54fb80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x54fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_54fb84:
    // 0x54fb84: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x54fb84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_54fb88:
    // 0x54fb88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x54fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_54fb8c:
    // 0x54fb8c: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x54fb8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_54fb90:
    // 0x54fb90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_54fb94:
    // 0x54fb94: 0x2694ead0  addiu       $s4, $s4, -0x1530
    ctx->pc = 0x54fb94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961872));
label_54fb98:
    // 0x54fb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_54fb9c:
    // 0x54fb9c: 0x2673ec20  addiu       $s3, $s3, -0x13E0
    ctx->pc = 0x54fb9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962208));
label_54fba0:
    // 0x54fba0: 0x9452dac8  lhu         $s2, -0x2538($v0)
    ctx->pc = 0x54fba0u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957768)));
label_54fba4:
    // 0x54fba4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x54fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_54fba8:
    // 0x54fba8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54fbac:
    // 0x54fbac: 0x9451daca  lhu         $s1, -0x2536($v0)
    ctx->pc = 0x54fbacu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957770)));
label_54fbb0:
    // 0x54fbb0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x54fbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_54fbb4:
    // 0x54fbb4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54fbb8:
    // 0x54fbb8: 0x8457eb00  lh          $s7, -0x1500($v0)
    ctx->pc = 0x54fbb8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961920)));
label_54fbbc:
    // 0x54fbbc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54fbc0:
    // 0x54fbc0: 0x8455eb02  lh          $s5, -0x14FE($v0)
    ctx->pc = 0x54fbc0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961922)));
label_54fbc4:
    // 0x54fbc4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54fbc8:
    // 0x54fbc8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54fbcc:
    // 0x54fbcc: 0xc0506ac  jal         func_141AB0
label_54fbd0:
    if (ctx->pc == 0x54FBD0u) {
        ctx->pc = 0x54FBD0u;
            // 0x54fbd0: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x54FBD4u;
        goto label_54fbd4;
    }
    ctx->pc = 0x54FBCCu;
    SET_GPR_U32(ctx, 31, 0x54FBD4u);
    ctx->pc = 0x54FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54FBCCu;
            // 0x54fbd0: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FBD4u; }
        if (ctx->pc != 0x54FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FBD4u; }
        if (ctx->pc != 0x54FBD4u) { return; }
    }
    ctx->pc = 0x54FBD4u;
label_54fbd4:
    // 0x54fbd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54fbd8:
    // 0x54fbd8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54fbdc:
    // 0x54fbdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54fbdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54fbe0:
    // 0x54fbe0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54fbe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54fbe4:
    // 0x54fbe4: 0x320f809  jalr        $t9
label_54fbe8:
    if (ctx->pc == 0x54FBE8u) {
        ctx->pc = 0x54FBE8u;
            // 0x54fbe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54FBECu;
        goto label_54fbec;
    }
    ctx->pc = 0x54FBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54FBECu);
        ctx->pc = 0x54FBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FBE4u;
            // 0x54fbe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54FBECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54FBECu; }
            if (ctx->pc != 0x54FBECu) { return; }
        }
        }
    }
    ctx->pc = 0x54FBECu;
label_54fbec:
    // 0x54fbec: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_54fbf0:
    if (ctx->pc == 0x54FBF0u) {
        ctx->pc = 0x54FBF0u;
            // 0x54fbf0: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->pc = 0x54FBF4u;
        goto label_54fbf4;
    }
    ctx->pc = 0x54FBECu;
    {
        const bool branch_taken_0x54fbec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x54fbec) {
            ctx->pc = 0x54FBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FBECu;
            // 0x54fbf0: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FC04u;
            goto label_54fc04;
        }
    }
    ctx->pc = 0x54FBF4u;
label_54fbf4:
    // 0x54fbf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x54fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_54fbf8:
    // 0x54fbf8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x54fbf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54fbfc:
    // 0x54fbfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_54fc00:
    if (ctx->pc == 0x54FC00u) {
        ctx->pc = 0x54FC00u;
            // 0x54fc00: 0x344600ff  ori         $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->pc = 0x54FC04u;
        goto label_54fc04;
    }
    ctx->pc = 0x54FBFCu;
    {
        const bool branch_taken_0x54fbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FBFCu;
            // 0x54fc00: 0x344600ff  ori         $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fbfc) {
            ctx->pc = 0x54FC0Cu;
            goto label_54fc0c;
        }
    }
    ctx->pc = 0x54FC04u;
label_54fc04:
    // 0x54fc04: 0x34467fff  ori         $a2, $v0, 0x7FFF
    ctx->pc = 0x54fc04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_54fc08:
    // 0x54fc08: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x54fc08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_54fc0c:
    // 0x54fc0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54fc10:
    // 0x54fc10: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x54fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_54fc14:
    // 0x54fc14: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x54fc14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_54fc18:
    // 0x54fc18: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_54fc1c:
    if (ctx->pc == 0x54FC1Cu) {
        ctx->pc = 0x54FC1Cu;
            // 0x54fc1c: 0xc66400d8  lwc1        $f4, 0xD8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x54FC20u;
        goto label_54fc20;
    }
    ctx->pc = 0x54FC18u;
    {
        const bool branch_taken_0x54fc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54fc18) {
            ctx->pc = 0x54FC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FC18u;
            // 0x54fc1c: 0xc66400d8  lwc1        $f4, 0xD8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FC28u;
            goto label_54fc28;
        }
    }
    ctx->pc = 0x54FC20u;
label_54fc20:
    // 0x54fc20: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x54fc20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_54fc24:
    // 0x54fc24: 0xc66400d8  lwc1        $f4, 0xD8($s3)
    ctx->pc = 0x54fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_54fc28:
    // 0x54fc28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54fc2c:
    // 0x54fc2c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54fc2cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fc30:
    // 0x54fc30: 0x266500d0  addiu       $a1, $s3, 0xD0
    ctx->pc = 0x54fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_54fc34:
    // 0x54fc34: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x54fc34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_54fc38:
    // 0x54fc38: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x54fc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_54fc3c:
    // 0x54fc3c: 0x0  nop
    ctx->pc = 0x54fc3cu;
    // NOP
label_54fc40:
    // 0x54fc40: 0x46043142  mul.s       $f5, $f6, $f4
    ctx->pc = 0x54fc40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_54fc44:
    // 0x54fc44: 0xc66300dc  lwc1        $f3, 0xDC($s3)
    ctx->pc = 0x54fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_54fc48:
    // 0x54fc48: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54fc48u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fc4c:
    // 0x54fc4c: 0x0  nop
    ctx->pc = 0x54fc4cu;
    // NOP
label_54fc50:
    // 0x54fc50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54fc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54fc54:
    // 0x54fc54: 0x46033102  mul.s       $f4, $f6, $f3
    ctx->pc = 0x54fc54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_54fc58:
    // 0x54fc58: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x54fc58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_54fc5c:
    // 0x54fc5c: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54fc5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_54fc60:
    // 0x54fc60: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x54fc60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_54fc64:
    // 0x54fc64: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54fc64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_54fc68:
    // 0x54fc68: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x54fc68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54fc6c:
    // 0x54fc6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54fc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fc70:
    // 0x54fc70: 0x0  nop
    ctx->pc = 0x54fc70u;
    // NOP
label_54fc74:
    // 0x54fc74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x54fc74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54fc78:
    // 0x54fc78: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x54fc78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54fc7c:
    // 0x54fc7c: 0x46050b01  sub.s       $f12, $f1, $f5
    ctx->pc = 0x54fc7cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_54fc80:
    // 0x54fc80: 0x46012b80  add.s       $f14, $f5, $f1
    ctx->pc = 0x54fc80u;
    ctx->f[14] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_54fc84:
    // 0x54fc84: 0x46040341  sub.s       $f13, $f0, $f4
    ctx->pc = 0x54fc84u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_54fc88:
    // 0x54fc88: 0x44151800  mfc1        $s5, $f3
    ctx->pc = 0x54fc88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_54fc8c:
    // 0x54fc8c: 0x44171000  mfc1        $s7, $f2
    ctx->pc = 0x54fc8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_54fc90:
    // 0x54fc90: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54fc94:
    if (ctx->pc == 0x54FC94u) {
        ctx->pc = 0x54FC94u;
            // 0x54fc94: 0x460403c0  add.s       $f15, $f0, $f4 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->pc = 0x54FC98u;
        goto label_54fc98;
    }
    ctx->pc = 0x54FC90u;
    {
        const bool branch_taken_0x54fc90 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54FC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FC90u;
            // 0x54fc94: 0x460403c0  add.s       $f15, $f0, $f4 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fc90) {
            ctx->pc = 0x54FCA4u;
            goto label_54fca4;
        }
    }
    ctx->pc = 0x54FC98u;
label_54fc98:
    // 0x54fc98: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54fc98u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fc9c:
    // 0x54fc9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54fca0:
    if (ctx->pc == 0x54FCA0u) {
        ctx->pc = 0x54FCA0u;
            // 0x54fca0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FCA4u;
        goto label_54fca4;
    }
    ctx->pc = 0x54FC9Cu;
    {
        const bool branch_taken_0x54fc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FC9Cu;
            // 0x54fca0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fc9c) {
            ctx->pc = 0x54FCC0u;
            goto label_54fcc0;
        }
    }
    ctx->pc = 0x54FCA4u;
label_54fca4:
    // 0x54fca4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54fca8:
    // 0x54fca8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54fcac:
    // 0x54fcac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54fcb0:
    // 0x54fcb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fcb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fcb4:
    // 0x54fcb4: 0x0  nop
    ctx->pc = 0x54fcb4u;
    // NOP
label_54fcb8:
    // 0x54fcb8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54fcb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54fcbc:
    // 0x54fcbc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54fcbcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54fcc0:
    // 0x54fcc0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54fcc4:
    if (ctx->pc == 0x54FCC4u) {
        ctx->pc = 0x54FCC4u;
            // 0x54fcc4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54FCC8u;
        goto label_54fcc8;
    }
    ctx->pc = 0x54FCC0u;
    {
        const bool branch_taken_0x54fcc0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54fcc0) {
            ctx->pc = 0x54FCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FCC0u;
            // 0x54fcc4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FCD4u;
            goto label_54fcd4;
        }
    }
    ctx->pc = 0x54FCC8u;
label_54fcc8:
    // 0x54fcc8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54fcc8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fccc:
    // 0x54fccc: 0x10000007  b           . + 4 + (0x7 << 2)
label_54fcd0:
    if (ctx->pc == 0x54FCD0u) {
        ctx->pc = 0x54FCD0u;
            // 0x54fcd0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FCD4u;
        goto label_54fcd4;
    }
    ctx->pc = 0x54FCCCu;
    {
        const bool branch_taken_0x54fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FCCCu;
            // 0x54fcd0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fccc) {
            ctx->pc = 0x54FCECu;
            goto label_54fcec;
        }
    }
    ctx->pc = 0x54FCD4u;
label_54fcd4:
    // 0x54fcd4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54fcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54fcd8:
    // 0x54fcd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54fcdc:
    // 0x54fcdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fcdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fce0:
    // 0x54fce0: 0x0  nop
    ctx->pc = 0x54fce0u;
    // NOP
label_54fce4:
    // 0x54fce4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54fce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54fce8:
    // 0x54fce8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54fce8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54fcec:
    // 0x54fcec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54fcf0:
    // 0x54fcf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54fcf4:
    // 0x54fcf4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54fcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54fcf8:
    // 0x54fcf8: 0xc0bc284  jal         func_2F0A10
label_54fcfc:
    if (ctx->pc == 0x54FCFCu) {
        ctx->pc = 0x54FCFCu;
            // 0x54fcfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54FD00u;
        goto label_54fd00;
    }
    ctx->pc = 0x54FCF8u;
    SET_GPR_U32(ctx, 31, 0x54FD00u);
    ctx->pc = 0x54FCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54FCF8u;
            // 0x54fcfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FD00u; }
        if (ctx->pc != 0x54FD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FD00u; }
        if (ctx->pc != 0x54FD00u) { return; }
    }
    ctx->pc = 0x54FD00u;
label_54fd00:
    // 0x54fd00: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54fd00u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fd04:
    // 0x54fd04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54fd08:
    // 0x54fd08: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x54fd08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_54fd0c:
    // 0x54fd0c: 0x266500e0  addiu       $a1, $s3, 0xE0
    ctx->pc = 0x54fd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_54fd10:
    // 0x54fd10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x54fd10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54fd14:
    // 0x54fd14: 0x0  nop
    ctx->pc = 0x54fd14u;
    // NOP
label_54fd18:
    // 0x54fd18: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x54fd18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_54fd1c:
    // 0x54fd1c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54fd1cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fd20:
    // 0x54fd20: 0xc66400e8  lwc1        $f4, 0xE8($s3)
    ctx->pc = 0x54fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_54fd24:
    // 0x54fd24: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x54fd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_54fd28:
    // 0x54fd28: 0xc66300ec  lwc1        $f3, 0xEC($s3)
    ctx->pc = 0x54fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_54fd2c:
    // 0x54fd2c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x54fd2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_54fd30:
    // 0x54fd30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54fd30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54fd34:
    // 0x54fd34: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x54fd34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_54fd38:
    // 0x54fd38: 0x46040b01  sub.s       $f12, $f1, $f4
    ctx->pc = 0x54fd38u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_54fd3c:
    // 0x54fd3c: 0x46012380  add.s       $f14, $f4, $f1
    ctx->pc = 0x54fd3cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_54fd40:
    // 0x54fd40: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x54fd40u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_54fd44:
    // 0x54fd44: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54fd48:
    if (ctx->pc == 0x54FD48u) {
        ctx->pc = 0x54FD48u;
            // 0x54fd48: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x54FD4Cu;
        goto label_54fd4c;
    }
    ctx->pc = 0x54FD44u;
    {
        const bool branch_taken_0x54fd44 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54FD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FD44u;
            // 0x54fd48: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fd44) {
            ctx->pc = 0x54FD58u;
            goto label_54fd58;
        }
    }
    ctx->pc = 0x54FD4Cu;
label_54fd4c:
    // 0x54fd4c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54fd4cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fd50:
    // 0x54fd50: 0x10000008  b           . + 4 + (0x8 << 2)
label_54fd54:
    if (ctx->pc == 0x54FD54u) {
        ctx->pc = 0x54FD54u;
            // 0x54fd54: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FD58u;
        goto label_54fd58;
    }
    ctx->pc = 0x54FD50u;
    {
        const bool branch_taken_0x54fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FD50u;
            // 0x54fd54: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fd50) {
            ctx->pc = 0x54FD74u;
            goto label_54fd74;
        }
    }
    ctx->pc = 0x54FD58u;
label_54fd58:
    // 0x54fd58: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54fd5c:
    // 0x54fd5c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54fd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54fd60:
    // 0x54fd60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54fd64:
    // 0x54fd64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fd68:
    // 0x54fd68: 0x0  nop
    ctx->pc = 0x54fd68u;
    // NOP
label_54fd6c:
    // 0x54fd6c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54fd6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54fd70:
    // 0x54fd70: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54fd70u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54fd74:
    // 0x54fd74: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54fd78:
    if (ctx->pc == 0x54FD78u) {
        ctx->pc = 0x54FD78u;
            // 0x54fd78: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54FD7Cu;
        goto label_54fd7c;
    }
    ctx->pc = 0x54FD74u;
    {
        const bool branch_taken_0x54fd74 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54fd74) {
            ctx->pc = 0x54FD78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FD74u;
            // 0x54fd78: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FD88u;
            goto label_54fd88;
        }
    }
    ctx->pc = 0x54FD7Cu;
label_54fd7c:
    // 0x54fd7c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54fd7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fd80:
    // 0x54fd80: 0x10000007  b           . + 4 + (0x7 << 2)
label_54fd84:
    if (ctx->pc == 0x54FD84u) {
        ctx->pc = 0x54FD84u;
            // 0x54fd84: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FD88u;
        goto label_54fd88;
    }
    ctx->pc = 0x54FD80u;
    {
        const bool branch_taken_0x54fd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FD80u;
            // 0x54fd84: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fd80) {
            ctx->pc = 0x54FDA0u;
            goto label_54fda0;
        }
    }
    ctx->pc = 0x54FD88u;
label_54fd88:
    // 0x54fd88: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54fd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54fd8c:
    // 0x54fd8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54fd90:
    // 0x54fd90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fd90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fd94:
    // 0x54fd94: 0x0  nop
    ctx->pc = 0x54fd94u;
    // NOP
label_54fd98:
    // 0x54fd98: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54fd98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54fd9c:
    // 0x54fd9c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54fd9cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54fda0:
    // 0x54fda0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54fda4:
    // 0x54fda4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x54fda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_54fda8:
    // 0x54fda8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54fda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54fdac:
    // 0x54fdac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54fdb0:
    // 0x54fdb0: 0xc0bc284  jal         func_2F0A10
label_54fdb4:
    if (ctx->pc == 0x54FDB4u) {
        ctx->pc = 0x54FDB4u;
            // 0x54fdb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54FDB8u;
        goto label_54fdb8;
    }
    ctx->pc = 0x54FDB0u;
    SET_GPR_U32(ctx, 31, 0x54FDB8u);
    ctx->pc = 0x54FDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54FDB0u;
            // 0x54fdb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FDB8u; }
        if (ctx->pc != 0x54FDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FDB8u; }
        if (ctx->pc != 0x54FDB8u) { return; }
    }
    ctx->pc = 0x54FDB8u;
label_54fdb8:
    // 0x54fdb8: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_54fdbc:
    if (ctx->pc == 0x54FDBCu) {
        ctx->pc = 0x54FDBCu;
            // 0x54fdbc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->pc = 0x54FDC0u;
        goto label_54fdc0;
    }
    ctx->pc = 0x54FDB8u;
    {
        const bool branch_taken_0x54fdb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x54fdb8) {
            ctx->pc = 0x54FDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FDB8u;
            // 0x54fdbc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FDD0u;
            goto label_54fdd0;
        }
    }
    ctx->pc = 0x54FDC0u;
label_54fdc0:
    // 0x54fdc0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x54fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_54fdc4:
    // 0x54fdc4: 0x34467fff  ori         $a2, $v0, 0x7FFF
    ctx->pc = 0x54fdc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_54fdc8:
    // 0x54fdc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_54fdcc:
    if (ctx->pc == 0x54FDCCu) {
        ctx->pc = 0x54FDCCu;
            // 0x54fdcc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54FDD0u;
        goto label_54fdd0;
    }
    ctx->pc = 0x54FDC8u;
    {
        const bool branch_taken_0x54fdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FDC8u;
            // 0x54fdcc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fdc8) {
            ctx->pc = 0x54FDD8u;
            goto label_54fdd8;
        }
    }
    ctx->pc = 0x54FDD0u;
label_54fdd0:
    // 0x54fdd0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x54fdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54fdd4:
    // 0x54fdd4: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x54fdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_54fdd8:
    // 0x54fdd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54fddc:
    // 0x54fddc: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x54fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_54fde0:
    // 0x54fde0: 0x86840036  lh          $a0, 0x36($s4)
    ctx->pc = 0x54fde0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 54)));
label_54fde4:
    // 0x54fde4: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x54fde4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_54fde8:
    // 0x54fde8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_54fdec:
    if (ctx->pc == 0x54FDECu) {
        ctx->pc = 0x54FDECu;
            // 0x54fdec: 0x86830034  lh          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->pc = 0x54FDF0u;
        goto label_54fdf0;
    }
    ctx->pc = 0x54FDE8u;
    {
        const bool branch_taken_0x54fde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FDE8u;
            // 0x54fdec: 0x86830034  lh          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fde8) {
            ctx->pc = 0x54FDF4u;
            goto label_54fdf4;
        }
    }
    ctx->pc = 0x54FDF0u;
label_54fdf0:
    // 0x54fdf0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x54fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_54fdf4:
    // 0x54fdf4: 0xc66400d8  lwc1        $f4, 0xD8($s3)
    ctx->pc = 0x54fdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_54fdf8:
    // 0x54fdf8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54fdfc:
    // 0x54fdfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fdfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fe00:
    // 0x54fe00: 0x266500d0  addiu       $a1, $s3, 0xD0
    ctx->pc = 0x54fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_54fe04:
    // 0x54fe04: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x54fe04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_54fe08:
    // 0x54fe08: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x54fe08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_54fe0c:
    // 0x54fe0c: 0x0  nop
    ctx->pc = 0x54fe0cu;
    // NOP
label_54fe10:
    // 0x54fe10: 0x46043142  mul.s       $f5, $f6, $f4
    ctx->pc = 0x54fe10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_54fe14:
    // 0x54fe14: 0xc66300dc  lwc1        $f3, 0xDC($s3)
    ctx->pc = 0x54fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_54fe18:
    // 0x54fe18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54fe18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fe1c:
    // 0x54fe1c: 0x0  nop
    ctx->pc = 0x54fe1cu;
    // NOP
label_54fe20:
    // 0x54fe20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54fe20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54fe24:
    // 0x54fe24: 0x46033102  mul.s       $f4, $f6, $f3
    ctx->pc = 0x54fe24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_54fe28:
    // 0x54fe28: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x54fe28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_54fe2c:
    // 0x54fe2c: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54fe2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_54fe30:
    // 0x54fe30: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x54fe30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_54fe34:
    // 0x54fe34: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54fe34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_54fe38:
    // 0x54fe38: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x54fe38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54fe3c:
    // 0x54fe3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54fe3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fe40:
    // 0x54fe40: 0x0  nop
    ctx->pc = 0x54fe40u;
    // NOP
label_54fe44:
    // 0x54fe44: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x54fe44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54fe48:
    // 0x54fe48: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x54fe48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54fe4c:
    // 0x54fe4c: 0x46050b01  sub.s       $f12, $f1, $f5
    ctx->pc = 0x54fe4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_54fe50:
    // 0x54fe50: 0x46012b80  add.s       $f14, $f5, $f1
    ctx->pc = 0x54fe50u;
    ctx->f[14] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_54fe54:
    // 0x54fe54: 0x46040341  sub.s       $f13, $f0, $f4
    ctx->pc = 0x54fe54u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_54fe58:
    // 0x54fe58: 0x44151800  mfc1        $s5, $f3
    ctx->pc = 0x54fe58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_54fe5c:
    // 0x54fe5c: 0x44141000  mfc1        $s4, $f2
    ctx->pc = 0x54fe5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_54fe60:
    // 0x54fe60: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54fe64:
    if (ctx->pc == 0x54FE64u) {
        ctx->pc = 0x54FE64u;
            // 0x54fe64: 0x460403c0  add.s       $f15, $f0, $f4 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->pc = 0x54FE68u;
        goto label_54fe68;
    }
    ctx->pc = 0x54FE60u;
    {
        const bool branch_taken_0x54fe60 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54FE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FE60u;
            // 0x54fe64: 0x460403c0  add.s       $f15, $f0, $f4 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fe60) {
            ctx->pc = 0x54FE74u;
            goto label_54fe74;
        }
    }
    ctx->pc = 0x54FE68u;
label_54fe68:
    // 0x54fe68: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54fe68u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fe6c:
    // 0x54fe6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54fe70:
    if (ctx->pc == 0x54FE70u) {
        ctx->pc = 0x54FE70u;
            // 0x54fe70: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FE74u;
        goto label_54fe74;
    }
    ctx->pc = 0x54FE6Cu;
    {
        const bool branch_taken_0x54fe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FE6Cu;
            // 0x54fe70: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fe6c) {
            ctx->pc = 0x54FE90u;
            goto label_54fe90;
        }
    }
    ctx->pc = 0x54FE74u;
label_54fe74:
    // 0x54fe74: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54fe78:
    // 0x54fe78: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54fe7c:
    // 0x54fe7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54fe80:
    // 0x54fe80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fe80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fe84:
    // 0x54fe84: 0x0  nop
    ctx->pc = 0x54fe84u;
    // NOP
label_54fe88:
    // 0x54fe88: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54fe88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54fe8c:
    // 0x54fe8c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54fe8cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54fe90:
    // 0x54fe90: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54fe94:
    if (ctx->pc == 0x54FE94u) {
        ctx->pc = 0x54FE94u;
            // 0x54fe94: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54FE98u;
        goto label_54fe98;
    }
    ctx->pc = 0x54FE90u;
    {
        const bool branch_taken_0x54fe90 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54fe90) {
            ctx->pc = 0x54FE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FE90u;
            // 0x54fe94: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FEA4u;
            goto label_54fea4;
        }
    }
    ctx->pc = 0x54FE98u;
label_54fe98:
    // 0x54fe98: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54fe98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fe9c:
    // 0x54fe9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54fea0:
    if (ctx->pc == 0x54FEA0u) {
        ctx->pc = 0x54FEA0u;
            // 0x54fea0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FEA4u;
        goto label_54fea4;
    }
    ctx->pc = 0x54FE9Cu;
    {
        const bool branch_taken_0x54fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FE9Cu;
            // 0x54fea0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fe9c) {
            ctx->pc = 0x54FEBCu;
            goto label_54febc;
        }
    }
    ctx->pc = 0x54FEA4u;
label_54fea4:
    // 0x54fea4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54fea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54fea8:
    // 0x54fea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54feac:
    // 0x54feac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54feacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54feb0:
    // 0x54feb0: 0x0  nop
    ctx->pc = 0x54feb0u;
    // NOP
label_54feb4:
    // 0x54feb4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54feb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54feb8:
    // 0x54feb8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54feb8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54febc:
    // 0x54febc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54febcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54fec0:
    // 0x54fec0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54fec4:
    // 0x54fec4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54fec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54fec8:
    // 0x54fec8: 0xc0bc284  jal         func_2F0A10
label_54fecc:
    if (ctx->pc == 0x54FECCu) {
        ctx->pc = 0x54FECCu;
            // 0x54fecc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54FED0u;
        goto label_54fed0;
    }
    ctx->pc = 0x54FEC8u;
    SET_GPR_U32(ctx, 31, 0x54FED0u);
    ctx->pc = 0x54FECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54FEC8u;
            // 0x54fecc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FED0u; }
        if (ctx->pc != 0x54FED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FED0u; }
        if (ctx->pc != 0x54FED0u) { return; }
    }
    ctx->pc = 0x54FED0u;
label_54fed0:
    // 0x54fed0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54fed0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fed4:
    // 0x54fed4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54fed8:
    // 0x54fed8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x54fed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_54fedc:
    // 0x54fedc: 0x266500f0  addiu       $a1, $s3, 0xF0
    ctx->pc = 0x54fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
label_54fee0:
    // 0x54fee0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x54fee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54fee4:
    // 0x54fee4: 0x0  nop
    ctx->pc = 0x54fee4u;
    // NOP
label_54fee8:
    // 0x54fee8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x54fee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_54feec:
    // 0x54feec: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54feecu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fef0:
    // 0x54fef0: 0xc66400f8  lwc1        $f4, 0xF8($s3)
    ctx->pc = 0x54fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_54fef4:
    // 0x54fef4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x54fef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_54fef8:
    // 0x54fef8: 0xc66300fc  lwc1        $f3, 0xFC($s3)
    ctx->pc = 0x54fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_54fefc:
    // 0x54fefc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x54fefcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_54ff00:
    // 0x54ff00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54ff00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54ff04:
    // 0x54ff04: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x54ff04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_54ff08:
    // 0x54ff08: 0x46040b01  sub.s       $f12, $f1, $f4
    ctx->pc = 0x54ff08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_54ff0c:
    // 0x54ff0c: 0x46012380  add.s       $f14, $f4, $f1
    ctx->pc = 0x54ff0cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_54ff10:
    // 0x54ff10: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x54ff10u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_54ff14:
    // 0x54ff14: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54ff18:
    if (ctx->pc == 0x54FF18u) {
        ctx->pc = 0x54FF18u;
            // 0x54ff18: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x54FF1Cu;
        goto label_54ff1c;
    }
    ctx->pc = 0x54FF14u;
    {
        const bool branch_taken_0x54ff14 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54FF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FF14u;
            // 0x54ff18: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ff14) {
            ctx->pc = 0x54FF28u;
            goto label_54ff28;
        }
    }
    ctx->pc = 0x54FF1Cu;
label_54ff1c:
    // 0x54ff1c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54ff1cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ff20:
    // 0x54ff20: 0x10000008  b           . + 4 + (0x8 << 2)
label_54ff24:
    if (ctx->pc == 0x54FF24u) {
        ctx->pc = 0x54FF24u;
            // 0x54ff24: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FF28u;
        goto label_54ff28;
    }
    ctx->pc = 0x54FF20u;
    {
        const bool branch_taken_0x54ff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FF20u;
            // 0x54ff24: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ff20) {
            ctx->pc = 0x54FF44u;
            goto label_54ff44;
        }
    }
    ctx->pc = 0x54FF28u;
label_54ff28:
    // 0x54ff28: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54ff2c:
    // 0x54ff2c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54ff2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54ff30:
    // 0x54ff30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ff30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ff34:
    // 0x54ff34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ff34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ff38:
    // 0x54ff38: 0x0  nop
    ctx->pc = 0x54ff38u;
    // NOP
label_54ff3c:
    // 0x54ff3c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54ff3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54ff40:
    // 0x54ff40: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54ff40u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54ff44:
    // 0x54ff44: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54ff48:
    if (ctx->pc == 0x54FF48u) {
        ctx->pc = 0x54FF48u;
            // 0x54ff48: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54FF4Cu;
        goto label_54ff4c;
    }
    ctx->pc = 0x54FF44u;
    {
        const bool branch_taken_0x54ff44 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54ff44) {
            ctx->pc = 0x54FF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FF44u;
            // 0x54ff48: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FF58u;
            goto label_54ff58;
        }
    }
    ctx->pc = 0x54FF4Cu;
label_54ff4c:
    // 0x54ff4c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54ff4cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ff50:
    // 0x54ff50: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ff54:
    if (ctx->pc == 0x54FF54u) {
        ctx->pc = 0x54FF54u;
            // 0x54ff54: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FF58u;
        goto label_54ff58;
    }
    ctx->pc = 0x54FF50u;
    {
        const bool branch_taken_0x54ff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FF50u;
            // 0x54ff54: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ff50) {
            ctx->pc = 0x54FF70u;
            goto label_54ff70;
        }
    }
    ctx->pc = 0x54FF58u;
label_54ff58:
    // 0x54ff58: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54ff5c:
    // 0x54ff5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ff5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ff60:
    // 0x54ff60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ff60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ff64:
    // 0x54ff64: 0x0  nop
    ctx->pc = 0x54ff64u;
    // NOP
label_54ff68:
    // 0x54ff68: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ff68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54ff6c:
    // 0x54ff6c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54ff6cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54ff70:
    // 0x54ff70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54ff74:
    // 0x54ff74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x54ff74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54ff78:
    // 0x54ff78: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54ff78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54ff7c:
    // 0x54ff7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54ff80:
    // 0x54ff80: 0xc0bc284  jal         func_2F0A10
label_54ff84:
    if (ctx->pc == 0x54FF84u) {
        ctx->pc = 0x54FF84u;
            // 0x54ff84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54FF88u;
        goto label_54ff88;
    }
    ctx->pc = 0x54FF80u;
    SET_GPR_U32(ctx, 31, 0x54FF88u);
    ctx->pc = 0x54FF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54FF80u;
            // 0x54ff84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FF88u; }
        if (ctx->pc != 0x54FF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FF88u; }
        if (ctx->pc != 0x54FF88u) { return; }
    }
    ctx->pc = 0x54FF88u;
label_54ff88:
    // 0x54ff88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54ff8c:
    // 0x54ff8c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54ff90:
    // 0x54ff90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ff90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54ff94:
    // 0x54ff94: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54ff94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54ff98:
    // 0x54ff98: 0x320f809  jalr        $t9
label_54ff9c:
    if (ctx->pc == 0x54FF9Cu) {
        ctx->pc = 0x54FFA0u;
        goto label_54ffa0;
    }
    ctx->pc = 0x54FF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54FFA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54FFA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54FFA0u; }
            if (ctx->pc != 0x54FFA0u) { return; }
        }
        }
    }
    ctx->pc = 0x54FFA0u;
label_54ffa0:
    // 0x54ffa0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x54ffa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_54ffa4:
    // 0x54ffa4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x54ffa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54ffa8:
    // 0x54ffa8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x54ffa8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54ffac:
    // 0x54ffac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x54ffacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54ffb0:
    // 0x54ffb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x54ffb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54ffb4:
    // 0x54ffb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x54ffb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54ffb8:
    // 0x54ffb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x54ffb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54ffbc:
    // 0x54ffbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x54ffbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54ffc0:
    // 0x54ffc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x54ffc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_54ffc4:
    // 0x54ffc4: 0x3e00008  jr          $ra
label_54ffc8:
    if (ctx->pc == 0x54FFC8u) {
        ctx->pc = 0x54FFC8u;
            // 0x54ffc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x54FFCCu;
        goto label_54ffcc;
    }
    ctx->pc = 0x54FFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54FFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FFC4u;
            // 0x54ffc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54FFCCu;
label_54ffcc:
    // 0x54ffcc: 0x0  nop
    ctx->pc = 0x54ffccu;
    // NOP
}
