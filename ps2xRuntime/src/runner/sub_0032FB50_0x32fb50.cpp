#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032FB50
// Address: 0x32fb50 - 0x32ff70
void sub_0032FB50_0x32fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FB50_0x32fb50");
#endif

    switch (ctx->pc) {
        case 0x32fb50u: goto label_32fb50;
        case 0x32fb54u: goto label_32fb54;
        case 0x32fb58u: goto label_32fb58;
        case 0x32fb5cu: goto label_32fb5c;
        case 0x32fb60u: goto label_32fb60;
        case 0x32fb64u: goto label_32fb64;
        case 0x32fb68u: goto label_32fb68;
        case 0x32fb6cu: goto label_32fb6c;
        case 0x32fb70u: goto label_32fb70;
        case 0x32fb74u: goto label_32fb74;
        case 0x32fb78u: goto label_32fb78;
        case 0x32fb7cu: goto label_32fb7c;
        case 0x32fb80u: goto label_32fb80;
        case 0x32fb84u: goto label_32fb84;
        case 0x32fb88u: goto label_32fb88;
        case 0x32fb8cu: goto label_32fb8c;
        case 0x32fb90u: goto label_32fb90;
        case 0x32fb94u: goto label_32fb94;
        case 0x32fb98u: goto label_32fb98;
        case 0x32fb9cu: goto label_32fb9c;
        case 0x32fba0u: goto label_32fba0;
        case 0x32fba4u: goto label_32fba4;
        case 0x32fba8u: goto label_32fba8;
        case 0x32fbacu: goto label_32fbac;
        case 0x32fbb0u: goto label_32fbb0;
        case 0x32fbb4u: goto label_32fbb4;
        case 0x32fbb8u: goto label_32fbb8;
        case 0x32fbbcu: goto label_32fbbc;
        case 0x32fbc0u: goto label_32fbc0;
        case 0x32fbc4u: goto label_32fbc4;
        case 0x32fbc8u: goto label_32fbc8;
        case 0x32fbccu: goto label_32fbcc;
        case 0x32fbd0u: goto label_32fbd0;
        case 0x32fbd4u: goto label_32fbd4;
        case 0x32fbd8u: goto label_32fbd8;
        case 0x32fbdcu: goto label_32fbdc;
        case 0x32fbe0u: goto label_32fbe0;
        case 0x32fbe4u: goto label_32fbe4;
        case 0x32fbe8u: goto label_32fbe8;
        case 0x32fbecu: goto label_32fbec;
        case 0x32fbf0u: goto label_32fbf0;
        case 0x32fbf4u: goto label_32fbf4;
        case 0x32fbf8u: goto label_32fbf8;
        case 0x32fbfcu: goto label_32fbfc;
        case 0x32fc00u: goto label_32fc00;
        case 0x32fc04u: goto label_32fc04;
        case 0x32fc08u: goto label_32fc08;
        case 0x32fc0cu: goto label_32fc0c;
        case 0x32fc10u: goto label_32fc10;
        case 0x32fc14u: goto label_32fc14;
        case 0x32fc18u: goto label_32fc18;
        case 0x32fc1cu: goto label_32fc1c;
        case 0x32fc20u: goto label_32fc20;
        case 0x32fc24u: goto label_32fc24;
        case 0x32fc28u: goto label_32fc28;
        case 0x32fc2cu: goto label_32fc2c;
        case 0x32fc30u: goto label_32fc30;
        case 0x32fc34u: goto label_32fc34;
        case 0x32fc38u: goto label_32fc38;
        case 0x32fc3cu: goto label_32fc3c;
        case 0x32fc40u: goto label_32fc40;
        case 0x32fc44u: goto label_32fc44;
        case 0x32fc48u: goto label_32fc48;
        case 0x32fc4cu: goto label_32fc4c;
        case 0x32fc50u: goto label_32fc50;
        case 0x32fc54u: goto label_32fc54;
        case 0x32fc58u: goto label_32fc58;
        case 0x32fc5cu: goto label_32fc5c;
        case 0x32fc60u: goto label_32fc60;
        case 0x32fc64u: goto label_32fc64;
        case 0x32fc68u: goto label_32fc68;
        case 0x32fc6cu: goto label_32fc6c;
        case 0x32fc70u: goto label_32fc70;
        case 0x32fc74u: goto label_32fc74;
        case 0x32fc78u: goto label_32fc78;
        case 0x32fc7cu: goto label_32fc7c;
        case 0x32fc80u: goto label_32fc80;
        case 0x32fc84u: goto label_32fc84;
        case 0x32fc88u: goto label_32fc88;
        case 0x32fc8cu: goto label_32fc8c;
        case 0x32fc90u: goto label_32fc90;
        case 0x32fc94u: goto label_32fc94;
        case 0x32fc98u: goto label_32fc98;
        case 0x32fc9cu: goto label_32fc9c;
        case 0x32fca0u: goto label_32fca0;
        case 0x32fca4u: goto label_32fca4;
        case 0x32fca8u: goto label_32fca8;
        case 0x32fcacu: goto label_32fcac;
        case 0x32fcb0u: goto label_32fcb0;
        case 0x32fcb4u: goto label_32fcb4;
        case 0x32fcb8u: goto label_32fcb8;
        case 0x32fcbcu: goto label_32fcbc;
        case 0x32fcc0u: goto label_32fcc0;
        case 0x32fcc4u: goto label_32fcc4;
        case 0x32fcc8u: goto label_32fcc8;
        case 0x32fcccu: goto label_32fccc;
        case 0x32fcd0u: goto label_32fcd0;
        case 0x32fcd4u: goto label_32fcd4;
        case 0x32fcd8u: goto label_32fcd8;
        case 0x32fcdcu: goto label_32fcdc;
        case 0x32fce0u: goto label_32fce0;
        case 0x32fce4u: goto label_32fce4;
        case 0x32fce8u: goto label_32fce8;
        case 0x32fcecu: goto label_32fcec;
        case 0x32fcf0u: goto label_32fcf0;
        case 0x32fcf4u: goto label_32fcf4;
        case 0x32fcf8u: goto label_32fcf8;
        case 0x32fcfcu: goto label_32fcfc;
        case 0x32fd00u: goto label_32fd00;
        case 0x32fd04u: goto label_32fd04;
        case 0x32fd08u: goto label_32fd08;
        case 0x32fd0cu: goto label_32fd0c;
        case 0x32fd10u: goto label_32fd10;
        case 0x32fd14u: goto label_32fd14;
        case 0x32fd18u: goto label_32fd18;
        case 0x32fd1cu: goto label_32fd1c;
        case 0x32fd20u: goto label_32fd20;
        case 0x32fd24u: goto label_32fd24;
        case 0x32fd28u: goto label_32fd28;
        case 0x32fd2cu: goto label_32fd2c;
        case 0x32fd30u: goto label_32fd30;
        case 0x32fd34u: goto label_32fd34;
        case 0x32fd38u: goto label_32fd38;
        case 0x32fd3cu: goto label_32fd3c;
        case 0x32fd40u: goto label_32fd40;
        case 0x32fd44u: goto label_32fd44;
        case 0x32fd48u: goto label_32fd48;
        case 0x32fd4cu: goto label_32fd4c;
        case 0x32fd50u: goto label_32fd50;
        case 0x32fd54u: goto label_32fd54;
        case 0x32fd58u: goto label_32fd58;
        case 0x32fd5cu: goto label_32fd5c;
        case 0x32fd60u: goto label_32fd60;
        case 0x32fd64u: goto label_32fd64;
        case 0x32fd68u: goto label_32fd68;
        case 0x32fd6cu: goto label_32fd6c;
        case 0x32fd70u: goto label_32fd70;
        case 0x32fd74u: goto label_32fd74;
        case 0x32fd78u: goto label_32fd78;
        case 0x32fd7cu: goto label_32fd7c;
        case 0x32fd80u: goto label_32fd80;
        case 0x32fd84u: goto label_32fd84;
        case 0x32fd88u: goto label_32fd88;
        case 0x32fd8cu: goto label_32fd8c;
        case 0x32fd90u: goto label_32fd90;
        case 0x32fd94u: goto label_32fd94;
        case 0x32fd98u: goto label_32fd98;
        case 0x32fd9cu: goto label_32fd9c;
        case 0x32fda0u: goto label_32fda0;
        case 0x32fda4u: goto label_32fda4;
        case 0x32fda8u: goto label_32fda8;
        case 0x32fdacu: goto label_32fdac;
        case 0x32fdb0u: goto label_32fdb0;
        case 0x32fdb4u: goto label_32fdb4;
        case 0x32fdb8u: goto label_32fdb8;
        case 0x32fdbcu: goto label_32fdbc;
        case 0x32fdc0u: goto label_32fdc0;
        case 0x32fdc4u: goto label_32fdc4;
        case 0x32fdc8u: goto label_32fdc8;
        case 0x32fdccu: goto label_32fdcc;
        case 0x32fdd0u: goto label_32fdd0;
        case 0x32fdd4u: goto label_32fdd4;
        case 0x32fdd8u: goto label_32fdd8;
        case 0x32fddcu: goto label_32fddc;
        case 0x32fde0u: goto label_32fde0;
        case 0x32fde4u: goto label_32fde4;
        case 0x32fde8u: goto label_32fde8;
        case 0x32fdecu: goto label_32fdec;
        case 0x32fdf0u: goto label_32fdf0;
        case 0x32fdf4u: goto label_32fdf4;
        case 0x32fdf8u: goto label_32fdf8;
        case 0x32fdfcu: goto label_32fdfc;
        case 0x32fe00u: goto label_32fe00;
        case 0x32fe04u: goto label_32fe04;
        case 0x32fe08u: goto label_32fe08;
        case 0x32fe0cu: goto label_32fe0c;
        case 0x32fe10u: goto label_32fe10;
        case 0x32fe14u: goto label_32fe14;
        case 0x32fe18u: goto label_32fe18;
        case 0x32fe1cu: goto label_32fe1c;
        case 0x32fe20u: goto label_32fe20;
        case 0x32fe24u: goto label_32fe24;
        case 0x32fe28u: goto label_32fe28;
        case 0x32fe2cu: goto label_32fe2c;
        case 0x32fe30u: goto label_32fe30;
        case 0x32fe34u: goto label_32fe34;
        case 0x32fe38u: goto label_32fe38;
        case 0x32fe3cu: goto label_32fe3c;
        case 0x32fe40u: goto label_32fe40;
        case 0x32fe44u: goto label_32fe44;
        case 0x32fe48u: goto label_32fe48;
        case 0x32fe4cu: goto label_32fe4c;
        case 0x32fe50u: goto label_32fe50;
        case 0x32fe54u: goto label_32fe54;
        case 0x32fe58u: goto label_32fe58;
        case 0x32fe5cu: goto label_32fe5c;
        case 0x32fe60u: goto label_32fe60;
        case 0x32fe64u: goto label_32fe64;
        case 0x32fe68u: goto label_32fe68;
        case 0x32fe6cu: goto label_32fe6c;
        case 0x32fe70u: goto label_32fe70;
        case 0x32fe74u: goto label_32fe74;
        case 0x32fe78u: goto label_32fe78;
        case 0x32fe7cu: goto label_32fe7c;
        case 0x32fe80u: goto label_32fe80;
        case 0x32fe84u: goto label_32fe84;
        case 0x32fe88u: goto label_32fe88;
        case 0x32fe8cu: goto label_32fe8c;
        case 0x32fe90u: goto label_32fe90;
        case 0x32fe94u: goto label_32fe94;
        case 0x32fe98u: goto label_32fe98;
        case 0x32fe9cu: goto label_32fe9c;
        case 0x32fea0u: goto label_32fea0;
        case 0x32fea4u: goto label_32fea4;
        case 0x32fea8u: goto label_32fea8;
        case 0x32feacu: goto label_32feac;
        case 0x32feb0u: goto label_32feb0;
        case 0x32feb4u: goto label_32feb4;
        case 0x32feb8u: goto label_32feb8;
        case 0x32febcu: goto label_32febc;
        case 0x32fec0u: goto label_32fec0;
        case 0x32fec4u: goto label_32fec4;
        case 0x32fec8u: goto label_32fec8;
        case 0x32feccu: goto label_32fecc;
        case 0x32fed0u: goto label_32fed0;
        case 0x32fed4u: goto label_32fed4;
        case 0x32fed8u: goto label_32fed8;
        case 0x32fedcu: goto label_32fedc;
        case 0x32fee0u: goto label_32fee0;
        case 0x32fee4u: goto label_32fee4;
        case 0x32fee8u: goto label_32fee8;
        case 0x32feecu: goto label_32feec;
        case 0x32fef0u: goto label_32fef0;
        case 0x32fef4u: goto label_32fef4;
        case 0x32fef8u: goto label_32fef8;
        case 0x32fefcu: goto label_32fefc;
        case 0x32ff00u: goto label_32ff00;
        case 0x32ff04u: goto label_32ff04;
        case 0x32ff08u: goto label_32ff08;
        case 0x32ff0cu: goto label_32ff0c;
        case 0x32ff10u: goto label_32ff10;
        case 0x32ff14u: goto label_32ff14;
        case 0x32ff18u: goto label_32ff18;
        case 0x32ff1cu: goto label_32ff1c;
        case 0x32ff20u: goto label_32ff20;
        case 0x32ff24u: goto label_32ff24;
        case 0x32ff28u: goto label_32ff28;
        case 0x32ff2cu: goto label_32ff2c;
        case 0x32ff30u: goto label_32ff30;
        case 0x32ff34u: goto label_32ff34;
        case 0x32ff38u: goto label_32ff38;
        case 0x32ff3cu: goto label_32ff3c;
        case 0x32ff40u: goto label_32ff40;
        case 0x32ff44u: goto label_32ff44;
        case 0x32ff48u: goto label_32ff48;
        case 0x32ff4cu: goto label_32ff4c;
        case 0x32ff50u: goto label_32ff50;
        case 0x32ff54u: goto label_32ff54;
        case 0x32ff58u: goto label_32ff58;
        case 0x32ff5cu: goto label_32ff5c;
        case 0x32ff60u: goto label_32ff60;
        case 0x32ff64u: goto label_32ff64;
        case 0x32ff68u: goto label_32ff68;
        case 0x32ff6cu: goto label_32ff6c;
        default: break;
    }

    ctx->pc = 0x32fb50u;

label_32fb50:
    // 0x32fb50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x32fb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_32fb54:
    // 0x32fb54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32fb58:
    // 0x32fb58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32fb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32fb5c:
    // 0x32fb5c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x32fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_32fb60:
    // 0x32fb60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32fb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32fb64:
    // 0x32fb64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32fb68:
    // 0x32fb68: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32fb68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32fb6c:
    // 0x32fb6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32fb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32fb70:
    // 0x32fb70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32fb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32fb74:
    // 0x32fb74: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x32fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_32fb78:
    // 0x32fb78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32fb7c:
    // 0x32fb7c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x32fb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32fb80:
    // 0x32fb80: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x32fb80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fb84:
    // 0x32fb84: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x32fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_32fb88:
    // 0x32fb88: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x32fb88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_32fb8c:
    // 0x32fb8c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x32fb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_32fb90:
    // 0x32fb90: 0x320f809  jalr        $t9
label_32fb94:
    if (ctx->pc == 0x32FB94u) {
        ctx->pc = 0x32FB98u;
        goto label_32fb98;
    }
    ctx->pc = 0x32FB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FB98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FB98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FB98u; }
            if (ctx->pc != 0x32FB98u) { return; }
        }
        }
    }
    ctx->pc = 0x32FB98u;
label_32fb98:
    // 0x32fb98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32fb98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32fb9c:
    // 0x32fb9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x32fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_32fba0:
    // 0x32fba0: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x32fba0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_32fba4:
    // 0x32fba4: 0xc04cbd8  jal         func_132F60
label_32fba8:
    if (ctx->pc == 0x32FBA8u) {
        ctx->pc = 0x32FBA8u;
            // 0x32fba8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x32FBACu;
        goto label_32fbac;
    }
    ctx->pc = 0x32FBA4u;
    SET_GPR_U32(ctx, 31, 0x32FBACu);
    ctx->pc = 0x32FBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FBA4u;
            // 0x32fba8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FBACu; }
        if (ctx->pc != 0x32FBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FBACu; }
        if (ctx->pc != 0x32FBACu) { return; }
    }
    ctx->pc = 0x32FBACu;
label_32fbac:
    // 0x32fbac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x32fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_32fbb0:
    // 0x32fbb0: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x32fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_32fbb4:
    // 0x32fbb4: 0xc04cca0  jal         func_133280
label_32fbb8:
    if (ctx->pc == 0x32FBB8u) {
        ctx->pc = 0x32FBB8u;
            // 0x32fbb8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FBBCu;
        goto label_32fbbc;
    }
    ctx->pc = 0x32FBB4u;
    SET_GPR_U32(ctx, 31, 0x32FBBCu);
    ctx->pc = 0x32FBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FBB4u;
            // 0x32fbb8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FBBCu; }
        if (ctx->pc != 0x32FBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FBBCu; }
        if (ctx->pc != 0x32FBBCu) { return; }
    }
    ctx->pc = 0x32FBBCu;
label_32fbbc:
    // 0x32fbbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x32fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_32fbc0:
    // 0x32fbc0: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x32fbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_32fbc4:
    // 0x32fbc4: 0xc04cbe0  jal         func_132F80
label_32fbc8:
    if (ctx->pc == 0x32FBC8u) {
        ctx->pc = 0x32FBC8u;
            // 0x32fbc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FBCCu;
        goto label_32fbcc;
    }
    ctx->pc = 0x32FBC4u;
    SET_GPR_U32(ctx, 31, 0x32FBCCu);
    ctx->pc = 0x32FBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FBC4u;
            // 0x32fbc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FBCCu; }
        if (ctx->pc != 0x32FBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FBCCu; }
        if (ctx->pc != 0x32FBCCu) { return; }
    }
    ctx->pc = 0x32FBCCu;
label_32fbcc:
    // 0x32fbcc: 0x8e650998  lw          $a1, 0x998($s3)
    ctx->pc = 0x32fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2456)));
label_32fbd0:
    // 0x32fbd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32fbd4:
    // 0x32fbd4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x32fbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_32fbd8:
    // 0x32fbd8: 0xc0cc050  jal         func_330140
label_32fbdc:
    if (ctx->pc == 0x32FBDCu) {
        ctx->pc = 0x32FBDCu;
            // 0x32fbdc: 0x260708e0  addiu       $a3, $s0, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2272));
        ctx->pc = 0x32FBE0u;
        goto label_32fbe0;
    }
    ctx->pc = 0x32FBD8u;
    SET_GPR_U32(ctx, 31, 0x32FBE0u);
    ctx->pc = 0x32FBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FBD8u;
            // 0x32fbdc: 0x260708e0  addiu       $a3, $s0, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330140u;
    if (runtime->hasFunction(0x330140u)) {
        auto targetFn = runtime->lookupFunction(0x330140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FBE0u; }
        if (ctx->pc != 0x32FBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330140_0x330140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FBE0u; }
        if (ctx->pc != 0x32FBE0u) { return; }
    }
    ctx->pc = 0x32FBE0u;
label_32fbe0:
    // 0x32fbe0: 0x92620c77  lbu         $v0, 0xC77($s3)
    ctx->pc = 0x32fbe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3191)));
label_32fbe4:
    // 0x32fbe4: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_32fbe8:
    if (ctx->pc == 0x32FBE8u) {
        ctx->pc = 0x32FBE8u;
            // 0x32fbe8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x32FBECu;
        goto label_32fbec;
    }
    ctx->pc = 0x32FBE4u;
    {
        const bool branch_taken_0x32fbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fbe4) {
            ctx->pc = 0x32FBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32FBE4u;
            // 0x32fbe8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32FC80u;
            goto label_32fc80;
        }
    }
    ctx->pc = 0x32FBECu;
label_32fbec:
    // 0x32fbec: 0x16400023  bnez        $s2, . + 4 + (0x23 << 2)
label_32fbf0:
    if (ctx->pc == 0x32FBF0u) {
        ctx->pc = 0x32FBF4u;
        goto label_32fbf4;
    }
    ctx->pc = 0x32FBECu;
    {
        const bool branch_taken_0x32fbec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fbec) {
            ctx->pc = 0x32FC7Cu;
            goto label_32fc7c;
        }
    }
    ctx->pc = 0x32FBF4u;
label_32fbf4:
    // 0x32fbf4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32fbf8:
    // 0x32fbf8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32fbfc:
    // 0x32fbfc: 0xc4600720  lwc1        $f0, 0x720($v1)
    ctx->pc = 0x32fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fc00:
    // 0x32fc00: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x32fc00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fc04:
    // 0x32fc04: 0xc4420724  lwc1        $f2, 0x724($v0)
    ctx->pc = 0x32fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32fc08:
    // 0x32fc08: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32fc0c:
    // 0x32fc0c: 0x264402d0  addiu       $a0, $s2, 0x2D0
    ctx->pc = 0x32fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
label_32fc10:
    // 0x32fc10: 0xc4610728  lwc1        $f1, 0x728($v1)
    ctx->pc = 0x32fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32fc14:
    // 0x32fc14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32fc18:
    // 0x32fc18: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x32fc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_32fc1c:
    // 0x32fc1c: 0x264502c0  addiu       $a1, $s2, 0x2C0
    ctx->pc = 0x32fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_32fc20:
    // 0x32fc20: 0xc440072c  lwc1        $f0, 0x72C($v0)
    ctx->pc = 0x32fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fc24:
    // 0x32fc24: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x32fc24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_32fc28:
    // 0x32fc28: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x32fc28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_32fc2c:
    // 0x32fc2c: 0xc04cc04  jal         func_133010
label_32fc30:
    if (ctx->pc == 0x32FC30u) {
        ctx->pc = 0x32FC30u;
            // 0x32fc30: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x32FC34u;
        goto label_32fc34;
    }
    ctx->pc = 0x32FC2Cu;
    SET_GPR_U32(ctx, 31, 0x32FC34u);
    ctx->pc = 0x32FC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FC2Cu;
            // 0x32fc30: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FC34u; }
        if (ctx->pc != 0x32FC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FC34u; }
        if (ctx->pc != 0x32FC34u) { return; }
    }
    ctx->pc = 0x32FC34u;
label_32fc34:
    // 0x32fc34: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x32fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_32fc38:
    // 0x32fc38: 0xc04cc04  jal         func_133010
label_32fc3c:
    if (ctx->pc == 0x32FC3Cu) {
        ctx->pc = 0x32FC3Cu;
            // 0x32fc3c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x32FC40u;
        goto label_32fc40;
    }
    ctx->pc = 0x32FC38u;
    SET_GPR_U32(ctx, 31, 0x32FC40u);
    ctx->pc = 0x32FC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FC38u;
            // 0x32fc3c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FC40u; }
        if (ctx->pc != 0x32FC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FC40u; }
        if (ctx->pc != 0x32FC40u) { return; }
    }
    ctx->pc = 0x32FC40u;
label_32fc40:
    // 0x32fc40: 0x8e520d74  lw          $s2, 0xD74($s2)
    ctx->pc = 0x32fc40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_32fc44:
    // 0x32fc44: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x32fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fc48:
    // 0x32fc48: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x32fc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32fc4c:
    // 0x32fc4c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32fc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_32fc50:
    // 0x32fc50: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x32fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_32fc54:
    // 0x32fc54: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x32fc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fc58:
    // 0x32fc58: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x32fc58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_32fc5c:
    // 0x32fc5c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x32fc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_32fc60:
    // 0x32fc60: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32fc64:
    // 0x32fc64: 0xc0a5444  jal         func_295110
label_32fc68:
    if (ctx->pc == 0x32FC68u) {
        ctx->pc = 0x32FC68u;
            // 0x32fc68: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32FC6Cu;
        goto label_32fc6c;
    }
    ctx->pc = 0x32FC64u;
    SET_GPR_U32(ctx, 31, 0x32FC6Cu);
    ctx->pc = 0x32FC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FC64u;
            // 0x32fc68: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FC6Cu; }
        if (ctx->pc != 0x32FC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FC6Cu; }
        if (ctx->pc != 0x32FC6Cu) { return; }
    }
    ctx->pc = 0x32FC6Cu;
label_32fc6c:
    // 0x32fc6c: 0xae4002d0  sw          $zero, 0x2D0($s2)
    ctx->pc = 0x32fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 720), GPR_U32(ctx, 0));
label_32fc70:
    // 0x32fc70: 0xae4002d4  sw          $zero, 0x2D4($s2)
    ctx->pc = 0x32fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 724), GPR_U32(ctx, 0));
label_32fc74:
    // 0x32fc74: 0xae4002d8  sw          $zero, 0x2D8($s2)
    ctx->pc = 0x32fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 0));
label_32fc78:
    // 0x32fc78: 0xae4002dc  sw          $zero, 0x2DC($s2)
    ctx->pc = 0x32fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 732), GPR_U32(ctx, 0));
label_32fc7c:
    // 0x32fc7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fc80:
    // 0x32fc80: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x32fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_32fc84:
    // 0x32fc84: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x32fc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_32fc88:
    // 0x32fc88: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32fc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32fc8c:
    // 0x32fc8c: 0x320f809  jalr        $t9
label_32fc90:
    if (ctx->pc == 0x32FC90u) {
        ctx->pc = 0x32FC94u;
        goto label_32fc94;
    }
    ctx->pc = 0x32FC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FC94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FC94u; }
            if (ctx->pc != 0x32FC94u) { return; }
        }
        }
    }
    ctx->pc = 0x32FC94u;
label_32fc94:
    // 0x32fc94: 0xc07619c  jal         func_1D8670
label_32fc98:
    if (ctx->pc == 0x32FC98u) {
        ctx->pc = 0x32FC98u;
            // 0x32fc98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x32FC9Cu;
        goto label_32fc9c;
    }
    ctx->pc = 0x32FC94u;
    SET_GPR_U32(ctx, 31, 0x32FC9Cu);
    ctx->pc = 0x32FC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FC94u;
            // 0x32fc98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8670u;
    if (runtime->hasFunction(0x1D8670u)) {
        auto targetFn = runtime->lookupFunction(0x1D8670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FC9Cu; }
        if (ctx->pc != 0x32FC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8670_0x1d8670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FC9Cu; }
        if (ctx->pc != 0x32FC9Cu) { return; }
    }
    ctx->pc = 0x32FC9Cu;
label_32fc9c:
    // 0x32fc9c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x32fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_32fca0:
    // 0x32fca0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x32fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_32fca4:
    // 0x32fca4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x32fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_32fca8:
    // 0x32fca8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_32fcac:
    if (ctx->pc == 0x32FCACu) {
        ctx->pc = 0x32FCACu;
            // 0x32fcac: 0x8e040d6c  lw          $a0, 0xD6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
        ctx->pc = 0x32FCB0u;
        goto label_32fcb0;
    }
    ctx->pc = 0x32FCA8u;
    {
        const bool branch_taken_0x32fca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fca8) {
            ctx->pc = 0x32FCACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32FCA8u;
            // 0x32fcac: 0x8e040d6c  lw          $a0, 0xD6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32FCD4u;
            goto label_32fcd4;
        }
    }
    ctx->pc = 0x32FCB0u;
label_32fcb0:
    // 0x32fcb0: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x32fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_32fcb4:
    // 0x32fcb4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x32fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_32fcb8:
    // 0x32fcb8: 0x2463b500  addiu       $v1, $v1, -0x4B00
    ctx->pc = 0x32fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948096));
label_32fcbc:
    // 0x32fcbc: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x32fcbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_32fcc0:
    // 0x32fcc0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_32fcc4:
    // 0x32fcc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32fcc8:
    // 0x32fcc8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x32fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fccc:
    // 0x32fccc: 0x10000008  b           . + 4 + (0x8 << 2)
label_32fcd0:
    if (ctx->pc == 0x32FCD0u) {
        ctx->pc = 0x32FCD0u;
            // 0x32fcd0: 0xe660099c  swc1        $f0, 0x99C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2460), bits); }
        ctx->pc = 0x32FCD4u;
        goto label_32fcd4;
    }
    ctx->pc = 0x32FCCCu;
    {
        const bool branch_taken_0x32fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FCCCu;
            // 0x32fcd0: 0xe660099c  swc1        $f0, 0x99C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fccc) {
            ctx->pc = 0x32FCF0u;
            goto label_32fcf0;
        }
    }
    ctx->pc = 0x32FCD4u;
label_32fcd4:
    // 0x32fcd4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x32fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_32fcd8:
    // 0x32fcd8: 0x2463b54c  addiu       $v1, $v1, -0x4AB4
    ctx->pc = 0x32fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948172));
label_32fcdc:
    // 0x32fcdc: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x32fcdcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_32fce0:
    // 0x32fce0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_32fce4:
    // 0x32fce4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32fce8:
    // 0x32fce8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x32fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fcec:
    // 0x32fcec: 0xe660099c  swc1        $f0, 0x99C($s3)
    ctx->pc = 0x32fcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2460), bits); }
label_32fcf0:
    // 0x32fcf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32fcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32fcf4:
    // 0x32fcf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32fcf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32fcf8:
    // 0x32fcf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32fcf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32fcfc:
    // 0x32fcfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fcfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32fd00:
    // 0x32fd00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32fd04:
    // 0x32fd04: 0x3e00008  jr          $ra
label_32fd08:
    if (ctx->pc == 0x32FD08u) {
        ctx->pc = 0x32FD08u;
            // 0x32fd08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x32FD0Cu;
        goto label_32fd0c;
    }
    ctx->pc = 0x32FD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FD04u;
            // 0x32fd08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32FD0Cu;
label_32fd0c:
    // 0x32fd0c: 0x0  nop
    ctx->pc = 0x32fd0cu;
    // NOP
label_32fd10:
    // 0x32fd10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32fd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32fd14:
    // 0x32fd14: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x32fd14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_32fd18:
    // 0x32fd18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32fd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_32fd1c:
    // 0x32fd1c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x32fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_32fd20:
    // 0x32fd20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32fd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_32fd24:
    // 0x32fd24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32fd28:
    // 0x32fd28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32fd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32fd2c:
    // 0x32fd2c: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x32fd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
label_32fd30:
    // 0x32fd30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32fd34:
    // 0x32fd34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32fd34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32fd38:
    // 0x32fd38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32fd3c:
    // 0x32fd3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32fd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fd40:
    // 0x32fd40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32fd44:
    // 0x32fd44: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x32fd44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_32fd48:
    // 0x32fd48: 0x8c4689f0  lw          $a2, -0x7610($v0)
    ctx->pc = 0x32fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_32fd4c:
    // 0x32fd4c: 0x8208007b  lb          $t0, 0x7B($s0)
    ctx->pc = 0x32fd4cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 123)));
label_32fd50:
    // 0x32fd50: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32fd54:
    // 0x32fd54: 0x90c60029  lbu         $a2, 0x29($a2)
    ctx->pc = 0x32fd54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
label_32fd58:
    // 0x32fd58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32fd5c:
    // 0x32fd5c: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x32fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_32fd60:
    // 0x32fd60: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x32fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_32fd64:
    // 0x32fd64: 0x250affff  addiu       $t2, $t0, -0x1
    ctx->pc = 0x32fd64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_32fd68:
    // 0x32fd68: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x32fd68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_32fd6c:
    // 0x32fd6c: 0xa3080  sll         $a2, $t2, 2
    ctx->pc = 0x32fd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_32fd70:
    // 0x32fd70: 0x1484821  addu        $t1, $t2, $t0
    ctx->pc = 0x32fd70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_32fd74:
    // 0x32fd74: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x32fd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_32fd78:
    // 0x32fd78: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x32fd78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_32fd7c:
    // 0x32fd7c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x32fd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_32fd80:
    // 0x32fd80: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x32fd80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_32fd84:
    // 0x32fd84: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x32fd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_32fd88:
    // 0x32fd88: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x32fd88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_32fd8c:
    // 0x32fd8c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x32fd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_32fd90:
    // 0x32fd90: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x32fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
label_32fd94:
    // 0x32fd94: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x32fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_32fd98:
    // 0x32fd98: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x32fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_32fd9c:
    // 0x32fd9c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x32fd9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_32fda0:
    // 0x32fda0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32fda4:
    // 0x32fda4: 0x1423021  addu        $a2, $t2, $v0
    ctx->pc = 0x32fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_32fda8:
    // 0x32fda8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x32fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_32fdac:
    // 0x32fdac: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x32fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_32fdb0:
    // 0x32fdb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_32fdb4:
    // 0x32fdb4: 0xc0575cc  jal         func_15D730
label_32fdb8:
    if (ctx->pc == 0x32FDB8u) {
        ctx->pc = 0x32FDB8u;
            // 0x32fdb8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x32FDBCu;
        goto label_32fdbc;
    }
    ctx->pc = 0x32FDB4u;
    SET_GPR_U32(ctx, 31, 0x32FDBCu);
    ctx->pc = 0x32FDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FDB4u;
            // 0x32fdb8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FDBCu; }
        if (ctx->pc != 0x32FDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FDBCu; }
        if (ctx->pc != 0x32FDBCu) { return; }
    }
    ctx->pc = 0x32FDBCu;
label_32fdbc:
    // 0x32fdbc: 0x8204007b  lb          $a0, 0x7B($s0)
    ctx->pc = 0x32fdbcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 123)));
label_32fdc0:
    // 0x32fdc0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x32fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_32fdc4:
    // 0x32fdc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32fdc8:
    // 0x32fdc8: 0xa204007a  sb          $a0, 0x7A($s0)
    ctx->pc = 0x32fdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 4));
label_32fdcc:
    // 0x32fdcc: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x32fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_32fdd0:
    // 0x32fdd0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x32fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32fdd4:
    // 0x32fdd4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x32fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_32fdd8:
    // 0x32fdd8: 0x8c54003c  lw          $s4, 0x3C($v0)
    ctx->pc = 0x32fdd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_32fddc:
    // 0x32fddc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x32fddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32fde0:
    // 0x32fde0: 0xc0a9598  jal         func_2A5660
label_32fde4:
    if (ctx->pc == 0x32FDE4u) {
        ctx->pc = 0x32FDE4u;
            // 0x32fde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FDE8u;
        goto label_32fde8;
    }
    ctx->pc = 0x32FDE0u;
    SET_GPR_U32(ctx, 31, 0x32FDE8u);
    ctx->pc = 0x32FDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FDE0u;
            // 0x32fde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5660u;
    if (runtime->hasFunction(0x2A5660u)) {
        auto targetFn = runtime->lookupFunction(0x2A5660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FDE8u; }
        if (ctx->pc != 0x32FDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5660_0x2a5660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FDE8u; }
        if (ctx->pc != 0x32FDE8u) { return; }
    }
    ctx->pc = 0x32FDE8u;
label_32fde8:
    // 0x32fde8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x32fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32fdec:
    // 0x32fdec: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x32fdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fdf0:
    // 0x32fdf0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32fdf0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_32fdf4:
    // 0x32fdf4: 0xe6200198  swc1        $f0, 0x198($s1)
    ctx->pc = 0x32fdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
label_32fdf8:
    // 0x32fdf8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x32fdf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32fdfc:
    // 0x32fdfc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x32fdfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_32fe00:
    // 0x32fe00: 0x320f809  jalr        $t9
label_32fe04:
    if (ctx->pc == 0x32FE04u) {
        ctx->pc = 0x32FE04u;
            // 0x32fe04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FE08u;
        goto label_32fe08;
    }
    ctx->pc = 0x32FE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FE08u);
        ctx->pc = 0x32FE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FE00u;
            // 0x32fe04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FE08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FE08u; }
            if (ctx->pc != 0x32FE08u) { return; }
        }
        }
    }
    ctx->pc = 0x32FE08u;
label_32fe08:
    // 0x32fe08: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x32fe08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_32fe0c:
    // 0x32fe0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32fe10:
    // 0x32fe10: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x32fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_32fe14:
    // 0x32fe14: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x32fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_32fe18:
    // 0x32fe18: 0xa0400566  sb          $zero, 0x566($v0)
    ctx->pc = 0x32fe18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1382), (uint8_t)GPR_U32(ctx, 0));
label_32fe1c:
    // 0x32fe1c: 0x8205007b  lb          $a1, 0x7B($s0)
    ctx->pc = 0x32fe1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 123)));
label_32fe20:
    // 0x32fe20: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_32fe24:
    if (ctx->pc == 0x32FE24u) {
        ctx->pc = 0x32FE24u;
            // 0x32fe24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FE28u;
        goto label_32fe28;
    }
    ctx->pc = 0x32FE20u;
    {
        const bool branch_taken_0x32fe20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x32FE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FE20u;
            // 0x32fe24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe20) {
            ctx->pc = 0x32FE54u;
            goto label_32fe54;
        }
    }
    ctx->pc = 0x32FE28u;
label_32fe28:
    // 0x32fe28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32fe2c:
    // 0x32fe2c: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
label_32fe30:
    if (ctx->pc == 0x32FE30u) {
        ctx->pc = 0x32FE30u;
            // 0x32fe30: 0x24120058  addiu       $s2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x32FE34u;
        goto label_32fe34;
    }
    ctx->pc = 0x32FE2Cu;
    {
        const bool branch_taken_0x32fe2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fe2c) {
            ctx->pc = 0x32FE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32FE2Cu;
            // 0x32fe30: 0x24120058  addiu       $s2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32FE58u;
            goto label_32fe58;
        }
    }
    ctx->pc = 0x32FE34u;
label_32fe34:
    // 0x32fe34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32fe38:
    // 0x32fe38: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
label_32fe3c:
    if (ctx->pc == 0x32FE3Cu) {
        ctx->pc = 0x32FE3Cu;
            // 0x32fe3c: 0x24120056  addiu       $s2, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->pc = 0x32FE40u;
        goto label_32fe40;
    }
    ctx->pc = 0x32FE38u;
    {
        const bool branch_taken_0x32fe38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fe38) {
            ctx->pc = 0x32FE3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32FE38u;
            // 0x32fe3c: 0x24120056  addiu       $s2, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32FE58u;
            goto label_32fe58;
        }
    }
    ctx->pc = 0x32FE40u;
label_32fe40:
    // 0x32fe40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fe44:
    // 0x32fe44: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_32fe48:
    if (ctx->pc == 0x32FE48u) {
        ctx->pc = 0x32FE48u;
            // 0x32fe48: 0x24120024  addiu       $s2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x32FE4Cu;
        goto label_32fe4c;
    }
    ctx->pc = 0x32FE44u;
    {
        const bool branch_taken_0x32fe44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fe44) {
            ctx->pc = 0x32FE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32FE44u;
            // 0x32fe48: 0x24120024  addiu       $s2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32FE58u;
            goto label_32fe58;
        }
    }
    ctx->pc = 0x32FE4Cu;
label_32fe4c:
    // 0x32fe4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_32fe50:
    if (ctx->pc == 0x32FE50u) {
        ctx->pc = 0x32FE50u;
            // 0x32fe50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x32FE54u;
        goto label_32fe54;
    }
    ctx->pc = 0x32FE4Cu;
    {
        const bool branch_taken_0x32fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FE4Cu;
            // 0x32fe50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe4c) {
            ctx->pc = 0x32FE5Cu;
            goto label_32fe5c;
        }
    }
    ctx->pc = 0x32FE54u;
label_32fe54:
    // 0x32fe54: 0x24120058  addiu       $s2, $zero, 0x58
    ctx->pc = 0x32fe54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_32fe58:
    // 0x32fe58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32fe58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32fe5c:
    // 0x32fe5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32fe5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32fe60:
    // 0x32fe60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x32fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32fe64:
    // 0x32fe64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x32fe64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_32fe68:
    // 0x32fe68: 0x320f809  jalr        $t9
label_32fe6c:
    if (ctx->pc == 0x32FE6Cu) {
        ctx->pc = 0x32FE6Cu;
            // 0x32fe6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FE70u;
        goto label_32fe70;
    }
    ctx->pc = 0x32FE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FE70u);
        ctx->pc = 0x32FE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FE68u;
            // 0x32fe6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FE70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FE70u; }
            if (ctx->pc != 0x32FE70u) { return; }
        }
        }
    }
    ctx->pc = 0x32FE70u;
label_32fe70:
    // 0x32fe70: 0xc0a950c  jal         func_2A5430
label_32fe74:
    if (ctx->pc == 0x32FE74u) {
        ctx->pc = 0x32FE74u;
            // 0x32fe74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FE78u;
        goto label_32fe78;
    }
    ctx->pc = 0x32FE70u;
    SET_GPR_U32(ctx, 31, 0x32FE78u);
    ctx->pc = 0x32FE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FE70u;
            // 0x32fe74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5430u;
    if (runtime->hasFunction(0x2A5430u)) {
        auto targetFn = runtime->lookupFunction(0x2A5430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FE78u; }
        if (ctx->pc != 0x32FE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5430_0x2a5430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FE78u; }
        if (ctx->pc != 0x32FE78u) { return; }
    }
    ctx->pc = 0x32FE78u;
label_32fe78:
    // 0x32fe78: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x32fe78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_32fe7c:
    // 0x32fe7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32fe7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fe80:
    // 0x32fe80: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x32fe80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_32fe84:
    // 0x32fe84: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32fe88:
    // 0x32fe88: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x32fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_32fe8c:
    // 0x32fe8c: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x32fe8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_32fe90:
    // 0x32fe90: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32fe90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32fe94:
    // 0x32fe94: 0x320f809  jalr        $t9
label_32fe98:
    if (ctx->pc == 0x32FE98u) {
        ctx->pc = 0x32FE9Cu;
        goto label_32fe9c;
    }
    ctx->pc = 0x32FE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FE9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FE9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FE9Cu; }
            if (ctx->pc != 0x32FE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32FE9Cu;
label_32fe9c:
    // 0x32fe9c: 0x8e620780  lw          $v0, 0x780($s3)
    ctx->pc = 0x32fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1920)));
label_32fea0:
    // 0x32fea0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32fea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32fea4:
    // 0x32fea4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x32fea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32fea8:
    // 0x32fea8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_32feac:
    if (ctx->pc == 0x32FEACu) {
        ctx->pc = 0x32FEACu;
            // 0x32feac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x32FEB0u;
        goto label_32feb0;
    }
    ctx->pc = 0x32FEA8u;
    {
        const bool branch_taken_0x32fea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FEA8u;
            // 0x32feac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fea8) {
            ctx->pc = 0x32FE84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32fe84;
        }
    }
    ctx->pc = 0x32FEB0u;
label_32feb0:
    // 0x32feb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32feb4:
    // 0x32feb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32feb8:
    // 0x32feb8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x32feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_32febc:
    // 0x32febc: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x32febcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
label_32fec0:
    // 0x32fec0: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x32fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
label_32fec4:
    // 0x32fec4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32fec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32fec8:
    // 0x32fec8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x32fec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_32fecc:
    // 0x32fecc: 0x320f809  jalr        $t9
label_32fed0:
    if (ctx->pc == 0x32FED0u) {
        ctx->pc = 0x32FED4u;
        goto label_32fed4;
    }
    ctx->pc = 0x32FECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FED4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FED4u; }
            if (ctx->pc != 0x32FED4u) { return; }
        }
        }
    }
    ctx->pc = 0x32FED4u;
label_32fed4:
    // 0x32fed4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_32fed8:
    if (ctx->pc == 0x32FED8u) {
        ctx->pc = 0x32FED8u;
            // 0x32fed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32FEDCu;
        goto label_32fedc;
    }
    ctx->pc = 0x32FED4u;
    {
        const bool branch_taken_0x32fed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fed4) {
            ctx->pc = 0x32FED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32FED4u;
            // 0x32fed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32FEF4u;
            goto label_32fef4;
        }
    }
    ctx->pc = 0x32FEDCu;
label_32fedc:
    // 0x32fedc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32fee0:
    // 0x32fee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fee4:
    // 0x32fee4: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x32fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_32fee8:
    // 0x32fee8: 0xac400474  sw          $zero, 0x474($v0)
    ctx->pc = 0x32fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1140), GPR_U32(ctx, 0));
label_32feec:
    // 0x32feec: 0xac430484  sw          $v1, 0x484($v0)
    ctx->pc = 0x32feecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1156), GPR_U32(ctx, 3));
label_32fef0:
    // 0x32fef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fef4:
    // 0x32fef4: 0xa2650c75  sb          $a1, 0xC75($s3)
    ctx->pc = 0x32fef4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3189), (uint8_t)GPR_U32(ctx, 5));
label_32fef8:
    // 0x32fef8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x32fef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_32fefc:
    // 0x32fefc: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x32fefcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_32ff00:
    // 0x32ff00: 0x320f809  jalr        $t9
label_32ff04:
    if (ctx->pc == 0x32FF04u) {
        ctx->pc = 0x32FF04u;
            // 0x32ff04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FF08u;
        goto label_32ff08;
    }
    ctx->pc = 0x32FF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FF08u);
        ctx->pc = 0x32FF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FF00u;
            // 0x32ff04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FF08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FF08u; }
            if (ctx->pc != 0x32FF08u) { return; }
        }
        }
    }
    ctx->pc = 0x32FF08u;
label_32ff08:
    // 0x32ff08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32ff0c:
    // 0x32ff0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32ff0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32ff10:
    // 0x32ff10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32ff10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32ff14:
    // 0x32ff14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32ff14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ff18:
    // 0x32ff18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ff18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ff1c:
    // 0x32ff1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ff1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32ff20:
    // 0x32ff20: 0x3e00008  jr          $ra
label_32ff24:
    if (ctx->pc == 0x32FF24u) {
        ctx->pc = 0x32FF24u;
            // 0x32ff24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x32FF28u;
        goto label_32ff28;
    }
    ctx->pc = 0x32FF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FF20u;
            // 0x32ff24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32FF28u;
label_32ff28:
    // 0x32ff28: 0x0  nop
    ctx->pc = 0x32ff28u;
    // NOP
label_32ff2c:
    // 0x32ff2c: 0x0  nop
    ctx->pc = 0x32ff2cu;
    // NOP
label_32ff30:
    // 0x32ff30: 0x8c84077c  lw          $a0, 0x77C($a0)
    ctx->pc = 0x32ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_32ff34:
    // 0x32ff34: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32ff38:
    // 0x32ff38: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x32ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_32ff3c:
    // 0x32ff3c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x32ff3cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_32ff40:
    // 0x32ff40: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x32ff40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_32ff44:
    // 0x32ff44: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x32ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_32ff48:
    // 0x32ff48: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x32ff48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32ff4c:
    // 0x32ff4c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x32ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_32ff50:
    // 0x32ff50: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x32ff50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32ff54:
    // 0x32ff54: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x32ff54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_32ff58:
    // 0x32ff58: 0xa08511a1  sb          $a1, 0x11A1($a0)
    ctx->pc = 0x32ff58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4513), (uint8_t)GPR_U32(ctx, 5));
label_32ff5c:
    // 0x32ff5c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x32ff5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_32ff60:
    // 0x32ff60: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_32ff64:
    if (ctx->pc == 0x32FF64u) {
        ctx->pc = 0x32FF68u;
        goto label_32ff68;
    }
    ctx->pc = 0x32FF60u;
    {
        const bool branch_taken_0x32ff60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ff60) {
            ctx->pc = 0x32FF4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32ff4c;
        }
    }
    ctx->pc = 0x32FF68u;
label_32ff68:
    // 0x32ff68: 0x3e00008  jr          $ra
label_32ff6c:
    if (ctx->pc == 0x32FF6Cu) {
        ctx->pc = 0x32FF70u;
        goto label_fallthrough_0x32ff68;
    }
    ctx->pc = 0x32FF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x32ff68:
    ctx->pc = 0x32FF70u;
}
