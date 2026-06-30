#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022FC80
// Address: 0x22fc80 - 0x22ffc0
void sub_0022FC80_0x22fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FC80_0x22fc80");
#endif

    switch (ctx->pc) {
        case 0x22fc80u: goto label_22fc80;
        case 0x22fc84u: goto label_22fc84;
        case 0x22fc88u: goto label_22fc88;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fc90u: goto label_22fc90;
        case 0x22fc94u: goto label_22fc94;
        case 0x22fc98u: goto label_22fc98;
        case 0x22fc9cu: goto label_22fc9c;
        case 0x22fca0u: goto label_22fca0;
        case 0x22fca4u: goto label_22fca4;
        case 0x22fca8u: goto label_22fca8;
        case 0x22fcacu: goto label_22fcac;
        case 0x22fcb0u: goto label_22fcb0;
        case 0x22fcb4u: goto label_22fcb4;
        case 0x22fcb8u: goto label_22fcb8;
        case 0x22fcbcu: goto label_22fcbc;
        case 0x22fcc0u: goto label_22fcc0;
        case 0x22fcc4u: goto label_22fcc4;
        case 0x22fcc8u: goto label_22fcc8;
        case 0x22fcccu: goto label_22fccc;
        case 0x22fcd0u: goto label_22fcd0;
        case 0x22fcd4u: goto label_22fcd4;
        case 0x22fcd8u: goto label_22fcd8;
        case 0x22fcdcu: goto label_22fcdc;
        case 0x22fce0u: goto label_22fce0;
        case 0x22fce4u: goto label_22fce4;
        case 0x22fce8u: goto label_22fce8;
        case 0x22fcecu: goto label_22fcec;
        case 0x22fcf0u: goto label_22fcf0;
        case 0x22fcf4u: goto label_22fcf4;
        case 0x22fcf8u: goto label_22fcf8;
        case 0x22fcfcu: goto label_22fcfc;
        case 0x22fd00u: goto label_22fd00;
        case 0x22fd04u: goto label_22fd04;
        case 0x22fd08u: goto label_22fd08;
        case 0x22fd0cu: goto label_22fd0c;
        case 0x22fd10u: goto label_22fd10;
        case 0x22fd14u: goto label_22fd14;
        case 0x22fd18u: goto label_22fd18;
        case 0x22fd1cu: goto label_22fd1c;
        case 0x22fd20u: goto label_22fd20;
        case 0x22fd24u: goto label_22fd24;
        case 0x22fd28u: goto label_22fd28;
        case 0x22fd2cu: goto label_22fd2c;
        case 0x22fd30u: goto label_22fd30;
        case 0x22fd34u: goto label_22fd34;
        case 0x22fd38u: goto label_22fd38;
        case 0x22fd3cu: goto label_22fd3c;
        case 0x22fd40u: goto label_22fd40;
        case 0x22fd44u: goto label_22fd44;
        case 0x22fd48u: goto label_22fd48;
        case 0x22fd4cu: goto label_22fd4c;
        case 0x22fd50u: goto label_22fd50;
        case 0x22fd54u: goto label_22fd54;
        case 0x22fd58u: goto label_22fd58;
        case 0x22fd5cu: goto label_22fd5c;
        case 0x22fd60u: goto label_22fd60;
        case 0x22fd64u: goto label_22fd64;
        case 0x22fd68u: goto label_22fd68;
        case 0x22fd6cu: goto label_22fd6c;
        case 0x22fd70u: goto label_22fd70;
        case 0x22fd74u: goto label_22fd74;
        case 0x22fd78u: goto label_22fd78;
        case 0x22fd7cu: goto label_22fd7c;
        case 0x22fd80u: goto label_22fd80;
        case 0x22fd84u: goto label_22fd84;
        case 0x22fd88u: goto label_22fd88;
        case 0x22fd8cu: goto label_22fd8c;
        case 0x22fd90u: goto label_22fd90;
        case 0x22fd94u: goto label_22fd94;
        case 0x22fd98u: goto label_22fd98;
        case 0x22fd9cu: goto label_22fd9c;
        case 0x22fda0u: goto label_22fda0;
        case 0x22fda4u: goto label_22fda4;
        case 0x22fda8u: goto label_22fda8;
        case 0x22fdacu: goto label_22fdac;
        case 0x22fdb0u: goto label_22fdb0;
        case 0x22fdb4u: goto label_22fdb4;
        case 0x22fdb8u: goto label_22fdb8;
        case 0x22fdbcu: goto label_22fdbc;
        case 0x22fdc0u: goto label_22fdc0;
        case 0x22fdc4u: goto label_22fdc4;
        case 0x22fdc8u: goto label_22fdc8;
        case 0x22fdccu: goto label_22fdcc;
        case 0x22fdd0u: goto label_22fdd0;
        case 0x22fdd4u: goto label_22fdd4;
        case 0x22fdd8u: goto label_22fdd8;
        case 0x22fddcu: goto label_22fddc;
        case 0x22fde0u: goto label_22fde0;
        case 0x22fde4u: goto label_22fde4;
        case 0x22fde8u: goto label_22fde8;
        case 0x22fdecu: goto label_22fdec;
        case 0x22fdf0u: goto label_22fdf0;
        case 0x22fdf4u: goto label_22fdf4;
        case 0x22fdf8u: goto label_22fdf8;
        case 0x22fdfcu: goto label_22fdfc;
        case 0x22fe00u: goto label_22fe00;
        case 0x22fe04u: goto label_22fe04;
        case 0x22fe08u: goto label_22fe08;
        case 0x22fe0cu: goto label_22fe0c;
        case 0x22fe10u: goto label_22fe10;
        case 0x22fe14u: goto label_22fe14;
        case 0x22fe18u: goto label_22fe18;
        case 0x22fe1cu: goto label_22fe1c;
        case 0x22fe20u: goto label_22fe20;
        case 0x22fe24u: goto label_22fe24;
        case 0x22fe28u: goto label_22fe28;
        case 0x22fe2cu: goto label_22fe2c;
        case 0x22fe30u: goto label_22fe30;
        case 0x22fe34u: goto label_22fe34;
        case 0x22fe38u: goto label_22fe38;
        case 0x22fe3cu: goto label_22fe3c;
        case 0x22fe40u: goto label_22fe40;
        case 0x22fe44u: goto label_22fe44;
        case 0x22fe48u: goto label_22fe48;
        case 0x22fe4cu: goto label_22fe4c;
        case 0x22fe50u: goto label_22fe50;
        case 0x22fe54u: goto label_22fe54;
        case 0x22fe58u: goto label_22fe58;
        case 0x22fe5cu: goto label_22fe5c;
        case 0x22fe60u: goto label_22fe60;
        case 0x22fe64u: goto label_22fe64;
        case 0x22fe68u: goto label_22fe68;
        case 0x22fe6cu: goto label_22fe6c;
        case 0x22fe70u: goto label_22fe70;
        case 0x22fe74u: goto label_22fe74;
        case 0x22fe78u: goto label_22fe78;
        case 0x22fe7cu: goto label_22fe7c;
        case 0x22fe80u: goto label_22fe80;
        case 0x22fe84u: goto label_22fe84;
        case 0x22fe88u: goto label_22fe88;
        case 0x22fe8cu: goto label_22fe8c;
        case 0x22fe90u: goto label_22fe90;
        case 0x22fe94u: goto label_22fe94;
        case 0x22fe98u: goto label_22fe98;
        case 0x22fe9cu: goto label_22fe9c;
        case 0x22fea0u: goto label_22fea0;
        case 0x22fea4u: goto label_22fea4;
        case 0x22fea8u: goto label_22fea8;
        case 0x22feacu: goto label_22feac;
        case 0x22feb0u: goto label_22feb0;
        case 0x22feb4u: goto label_22feb4;
        case 0x22feb8u: goto label_22feb8;
        case 0x22febcu: goto label_22febc;
        case 0x22fec0u: goto label_22fec0;
        case 0x22fec4u: goto label_22fec4;
        case 0x22fec8u: goto label_22fec8;
        case 0x22feccu: goto label_22fecc;
        case 0x22fed0u: goto label_22fed0;
        case 0x22fed4u: goto label_22fed4;
        case 0x22fed8u: goto label_22fed8;
        case 0x22fedcu: goto label_22fedc;
        case 0x22fee0u: goto label_22fee0;
        case 0x22fee4u: goto label_22fee4;
        case 0x22fee8u: goto label_22fee8;
        case 0x22feecu: goto label_22feec;
        case 0x22fef0u: goto label_22fef0;
        case 0x22fef4u: goto label_22fef4;
        case 0x22fef8u: goto label_22fef8;
        case 0x22fefcu: goto label_22fefc;
        case 0x22ff00u: goto label_22ff00;
        case 0x22ff04u: goto label_22ff04;
        case 0x22ff08u: goto label_22ff08;
        case 0x22ff0cu: goto label_22ff0c;
        case 0x22ff10u: goto label_22ff10;
        case 0x22ff14u: goto label_22ff14;
        case 0x22ff18u: goto label_22ff18;
        case 0x22ff1cu: goto label_22ff1c;
        case 0x22ff20u: goto label_22ff20;
        case 0x22ff24u: goto label_22ff24;
        case 0x22ff28u: goto label_22ff28;
        case 0x22ff2cu: goto label_22ff2c;
        case 0x22ff30u: goto label_22ff30;
        case 0x22ff34u: goto label_22ff34;
        case 0x22ff38u: goto label_22ff38;
        case 0x22ff3cu: goto label_22ff3c;
        case 0x22ff40u: goto label_22ff40;
        case 0x22ff44u: goto label_22ff44;
        case 0x22ff48u: goto label_22ff48;
        case 0x22ff4cu: goto label_22ff4c;
        case 0x22ff50u: goto label_22ff50;
        case 0x22ff54u: goto label_22ff54;
        case 0x22ff58u: goto label_22ff58;
        case 0x22ff5cu: goto label_22ff5c;
        case 0x22ff60u: goto label_22ff60;
        case 0x22ff64u: goto label_22ff64;
        case 0x22ff68u: goto label_22ff68;
        case 0x22ff6cu: goto label_22ff6c;
        case 0x22ff70u: goto label_22ff70;
        case 0x22ff74u: goto label_22ff74;
        case 0x22ff78u: goto label_22ff78;
        case 0x22ff7cu: goto label_22ff7c;
        case 0x22ff80u: goto label_22ff80;
        case 0x22ff84u: goto label_22ff84;
        case 0x22ff88u: goto label_22ff88;
        case 0x22ff8cu: goto label_22ff8c;
        case 0x22ff90u: goto label_22ff90;
        case 0x22ff94u: goto label_22ff94;
        case 0x22ff98u: goto label_22ff98;
        case 0x22ff9cu: goto label_22ff9c;
        case 0x22ffa0u: goto label_22ffa0;
        case 0x22ffa4u: goto label_22ffa4;
        case 0x22ffa8u: goto label_22ffa8;
        case 0x22ffacu: goto label_22ffac;
        case 0x22ffb0u: goto label_22ffb0;
        case 0x22ffb4u: goto label_22ffb4;
        case 0x22ffb8u: goto label_22ffb8;
        case 0x22ffbcu: goto label_22ffbc;
        default: break;
    }

    ctx->pc = 0x22fc80u;

label_22fc80:
    // 0x22fc80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22fc84:
    // 0x22fc84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22fc88:
    // 0x22fc88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22fc8c:
    // 0x22fc8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22fc90:
    // 0x22fc90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22fc94:
    // 0x22fc94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22fc94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22fc98:
    // 0x22fc98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22fc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22fc9c:
    // 0x22fc9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22fc9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22fca0:
    // 0x22fca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22fca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22fca4:
    // 0x22fca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22fca8:
    // 0x22fca8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x22fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_22fcac:
    // 0x22fcac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22fcb0:
    if (ctx->pc == 0x22FCB0u) {
        ctx->pc = 0x22FCB0u;
            // 0x22fcb0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FCB4u;
        goto label_22fcb4;
    }
    ctx->pc = 0x22FCACu;
    {
        const bool branch_taken_0x22fcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCACu;
            // 0x22fcb0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcac) {
            ctx->pc = 0x22FCD4u;
            goto label_22fcd4;
        }
    }
    ctx->pc = 0x22FCB4u;
label_22fcb4:
    // 0x22fcb4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x22fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_22fcb8:
    // 0x22fcb8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22fcbc:
    // 0x22fcbc: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x22fcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
label_22fcc0:
    // 0x22fcc0: 0xafb30084  sw          $s3, 0x84($sp)
    ctx->pc = 0x22fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 19));
label_22fcc4:
    // 0x22fcc4: 0xc08d1cc  jal         func_234730
label_22fcc8:
    if (ctx->pc == 0x22FCC8u) {
        ctx->pc = 0x22FCC8u;
            // 0x22fcc8: 0xa3b20088  sb          $s2, 0x88($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 18));
        ctx->pc = 0x22FCCCu;
        goto label_22fccc;
    }
    ctx->pc = 0x22FCC4u;
    SET_GPR_U32(ctx, 31, 0x22FCCCu);
    ctx->pc = 0x22FCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCC4u;
            // 0x22fcc8: 0xa3b20088  sb          $s2, 0x88($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCCCu; }
        if (ctx->pc != 0x22FCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCCCu; }
        if (ctx->pc != 0x22FCCCu) { return; }
    }
    ctx->pc = 0x22FCCCu;
label_22fccc:
    // 0x22fccc: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_22fcd0:
    if (ctx->pc == 0x22FCD0u) {
        ctx->pc = 0x22FCD0u;
            // 0x22fcd0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x22FCD4u;
        goto label_22fcd4;
    }
    ctx->pc = 0x22FCCCu;
    {
        const bool branch_taken_0x22fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCCCu;
            // 0x22fcd0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fccc) {
            ctx->pc = 0x22FFA0u;
            goto label_22ffa0;
        }
    }
    ctx->pc = 0x22FCD4u;
label_22fcd4:
    // 0x22fcd4: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x22fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_22fcd8:
    // 0x22fcd8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x22fcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_22fcdc:
    // 0x22fcdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22fce0:
    // 0x22fce0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22fce4:
    // 0x22fce4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22fce8:
    // 0x22fce8: 0xae840084  sw          $a0, 0x84($s4)
    ctx->pc = 0x22fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 4));
label_22fcec:
    // 0x22fcec: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x22fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_22fcf0:
    // 0x22fcf0: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x22fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_22fcf4:
    // 0x22fcf4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x22fcf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22fcf8:
    // 0x22fcf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22fcfc:
    if (ctx->pc == 0x22FCFCu) {
        ctx->pc = 0x22FCFCu;
            // 0x22fcfc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x22FD00u;
        goto label_22fd00;
    }
    ctx->pc = 0x22FCF8u;
    {
        const bool branch_taken_0x22fcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FCF8u;
            // 0x22fcfc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcf8) {
            ctx->pc = 0x22FD34u;
            goto label_22fd34;
        }
    }
    ctx->pc = 0x22FD00u;
label_22fd00:
    // 0x22fd00: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x22fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22fd04:
    // 0x22fd04: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x22fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_22fd08:
    // 0x22fd08: 0x2463c840  addiu       $v1, $v1, -0x37C0
    ctx->pc = 0x22fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953024));
label_22fd0c:
    // 0x22fd0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x22fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_22fd10:
    // 0x22fd10: 0x2442c858  addiu       $v0, $v0, -0x37A8
    ctx->pc = 0x22fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953048));
label_22fd14:
    // 0x22fd14: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22fd18:
    // 0x22fd18: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x22fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_22fd1c:
    // 0x22fd1c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_22fd20:
    // 0x22fd20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22fd24:
    // 0x22fd24: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_22fd28:
    // 0x22fd28: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x22fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_22fd2c:
    // 0x22fd2c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_22fd30:
    // 0x22fd30: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x22fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_22fd34:
    // 0x22fd34: 0x8e900318  lw          $s0, 0x318($s4)
    ctx->pc = 0x22fd34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
label_22fd38:
    // 0x22fd38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_22fd3c:
    // 0x22fd3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22fd40:
    // 0x22fd40: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x22fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_22fd44:
    // 0x22fd44: 0x26750010  addiu       $s5, $s3, 0x10
    ctx->pc = 0x22fd44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_22fd48:
    // 0x22fd48: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x22fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_22fd4c:
    // 0x22fd4c: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x22fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_22fd50:
    // 0x22fd50: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22fd54:
    // 0x22fd54: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x22fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_22fd58:
    // 0x22fd58: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x22fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_22fd5c:
    // 0x22fd5c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x22fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_22fd60:
    // 0x22fd60: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x22fd60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22fd64:
    // 0x22fd64: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_22fd68:
    // 0x22fd68: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x22fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_22fd6c:
    // 0x22fd6c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x22fd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_22fd70:
    // 0x22fd70: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x22fd70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_22fd74:
    // 0x22fd74: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_22fd78:
    if (ctx->pc == 0x22FD78u) {
        ctx->pc = 0x22FD78u;
            // 0x22fd78: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22FD7Cu;
        goto label_22fd7c;
    }
    ctx->pc = 0x22FD74u;
    {
        const bool branch_taken_0x22fd74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD74u;
            // 0x22fd78: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd74) {
            ctx->pc = 0x22FD84u;
            goto label_22fd84;
        }
    }
    ctx->pc = 0x22FD7Cu;
label_22fd7c:
    // 0x22fd7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_22fd80:
    if (ctx->pc == 0x22FD80u) {
        ctx->pc = 0x22FD80u;
            // 0x22fd80: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x22FD84u;
        goto label_22fd84;
    }
    ctx->pc = 0x22FD7Cu;
    {
        const bool branch_taken_0x22fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FD7Cu;
            // 0x22fd80: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fd7c) {
            ctx->pc = 0x22FD94u;
            goto label_22fd94;
        }
    }
    ctx->pc = 0x22FD84u;
label_22fd84:
    // 0x22fd84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22fd84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22fd88:
    // 0x22fd88: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x22fd88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_22fd8c:
    // 0x22fd8c: 0x320f809  jalr        $t9
label_22fd90:
    if (ctx->pc == 0x22FD90u) {
        ctx->pc = 0x22FD94u;
        goto label_22fd94;
    }
    ctx->pc = 0x22FD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FD94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FD94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FD94u; }
            if (ctx->pc != 0x22FD94u) { return; }
        }
        }
    }
    ctx->pc = 0x22FD94u;
label_22fd94:
    // 0x22fd94: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22fd98:
    // 0x22fd98: 0x26a50014  addiu       $a1, $s5, 0x14
    ctx->pc = 0x22fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_22fd9c:
    // 0x22fd9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22fda0:
    // 0x22fda0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x22fda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_22fda4:
    // 0x22fda4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_22fda8:
    // 0x22fda8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22fdac:
    // 0x22fdac: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x22fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_22fdb0:
    // 0x22fdb0: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x22fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_22fdb4:
    // 0x22fdb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22fdb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22fdb8:
    // 0x22fdb8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x22fdb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_22fdbc:
    // 0x22fdbc: 0x320f809  jalr        $t9
label_22fdc0:
    if (ctx->pc == 0x22FDC0u) {
        ctx->pc = 0x22FDC0u;
            // 0x22fdc0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22FDC4u;
        goto label_22fdc4;
    }
    ctx->pc = 0x22FDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FDC4u);
        ctx->pc = 0x22FDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FDBCu;
            // 0x22fdc0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FDC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FDC4u; }
            if (ctx->pc != 0x22FDC4u) { return; }
        }
        }
    }
    ctx->pc = 0x22FDC4u;
label_22fdc4:
    // 0x22fdc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22fdc8:
    // 0x22fdc8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x22fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_22fdcc:
    // 0x22fdcc: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x22fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_22fdd0:
    // 0x22fdd0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22fdd4:
    // 0x22fdd4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x22fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_22fdd8:
    // 0x22fdd8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x22fdd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22fddc:
    // 0x22fddc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_22fde0:
    if (ctx->pc == 0x22FDE0u) {
        ctx->pc = 0x22FDE0u;
            // 0x22fde0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x22FDE4u;
        goto label_22fde4;
    }
    ctx->pc = 0x22FDDCu;
    {
        const bool branch_taken_0x22fddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FDDCu;
            // 0x22fde0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fddc) {
            ctx->pc = 0x22FE0Cu;
            goto label_22fe0c;
        }
    }
    ctx->pc = 0x22FDE4u;
label_22fde4:
    // 0x22fde4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x22fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22fde8:
    // 0x22fde8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x22fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_22fdec:
    // 0x22fdec: 0x2463c870  addiu       $v1, $v1, -0x3790
    ctx->pc = 0x22fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953072));
label_22fdf0:
    // 0x22fdf0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22fdf4:
    // 0x22fdf4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_22fdf8:
    // 0x22fdf8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_22fdfc:
    // 0x22fdfc: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22fdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_22fe00:
    // 0x22fe00: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x22fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_22fe04:
    // 0x22fe04: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x22fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_22fe08:
    // 0x22fe08: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x22fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_22fe0c:
    // 0x22fe0c: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x22fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_22fe10:
    // 0x22fe10: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
label_22fe14:
    if (ctx->pc == 0x22FE14u) {
        ctx->pc = 0x22FE14u;
            // 0x22fe14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FE18u;
        goto label_22fe18;
    }
    ctx->pc = 0x22FE10u;
    {
        const bool branch_taken_0x22fe10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22FE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE10u;
            // 0x22fe14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe10) {
            ctx->pc = 0x22FE60u;
            goto label_22fe60;
        }
    }
    ctx->pc = 0x22FE18u;
label_22fe18:
    // 0x22fe18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22fe18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fe1c:
    // 0x22fe1c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x22fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_22fe20:
    // 0x22fe20: 0x26a30014  addiu       $v1, $s5, 0x14
    ctx->pc = 0x22fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_22fe24:
    // 0x22fe24: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x22fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_22fe28:
    // 0x22fe28: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x22fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22fe2c:
    // 0x22fe2c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_22fe30:
    if (ctx->pc == 0x22FE30u) {
        ctx->pc = 0x22FE34u;
        goto label_22fe34;
    }
    ctx->pc = 0x22FE2Cu;
    {
        const bool branch_taken_0x22fe2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22fe2c) {
            ctx->pc = 0x22FE48u;
            goto label_22fe48;
        }
    }
    ctx->pc = 0x22FE34u;
label_22fe34:
    // 0x22fe34: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x22fe34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_22fe38:
    // 0x22fe38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22fe3c:
    // 0x22fe3c: 0x8e860070  lw          $a2, 0x70($s4)
    ctx->pc = 0x22fe3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_22fe40:
    // 0x22fe40: 0xc08bec4  jal         func_22FB10
label_22fe44:
    if (ctx->pc == 0x22FE44u) {
        ctx->pc = 0x22FE44u;
            // 0x22fe44: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x22FE48u;
        goto label_22fe48;
    }
    ctx->pc = 0x22FE40u;
    SET_GPR_U32(ctx, 31, 0x22FE48u);
    ctx->pc = 0x22FE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE40u;
            // 0x22fe44: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB10u;
    if (runtime->hasFunction(0x22FB10u)) {
        auto targetFn = runtime->lookupFunction(0x22FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE48u; }
        if (ctx->pc != 0x22FE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FB10_0x22fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE48u; }
        if (ctx->pc != 0x22FE48u) { return; }
    }
    ctx->pc = 0x22FE48u;
label_22fe48:
    // 0x22fe48: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_22fe4c:
    // 0x22fe4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22fe4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22fe50:
    // 0x22fe50: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x22fe50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22fe54:
    // 0x22fe54: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_22fe58:
    if (ctx->pc == 0x22FE58u) {
        ctx->pc = 0x22FE58u;
            // 0x22fe58: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x22FE5Cu;
        goto label_22fe5c;
    }
    ctx->pc = 0x22FE54u;
    {
        const bool branch_taken_0x22fe54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE54u;
            // 0x22fe58: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe54) {
            ctx->pc = 0x22FE1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22fe1c;
        }
    }
    ctx->pc = 0x22FE5Cu;
label_22fe5c:
    // 0x22fe5c: 0x0  nop
    ctx->pc = 0x22fe5cu;
    // NOP
label_22fe60:
    // 0x22fe60: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
label_22fe64:
    if (ctx->pc == 0x22FE64u) {
        ctx->pc = 0x22FE64u;
            // 0x22fe64: 0x8e830084  lw          $v1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->pc = 0x22FE68u;
        goto label_22fe68;
    }
    ctx->pc = 0x22FE60u;
    {
        const bool branch_taken_0x22fe60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fe60) {
            ctx->pc = 0x22FE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE60u;
            // 0x22fe64: 0x8e830084  lw          $v1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FEC4u;
            goto label_22fec4;
        }
    }
    ctx->pc = 0x22FE68u;
label_22fe68:
    // 0x22fe68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22fe6c:
    // 0x22fe6c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x22fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_22fe70:
    // 0x22fe70: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_22fe74:
    // 0x22fe74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22fe78:
    // 0x22fe78: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x22fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_22fe7c:
    // 0x22fe7c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x22fe7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22fe80:
    // 0x22fe80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_22fe84:
    if (ctx->pc == 0x22FE84u) {
        ctx->pc = 0x22FE84u;
            // 0x22fe84: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x22FE88u;
        goto label_22fe88;
    }
    ctx->pc = 0x22FE80u;
    {
        const bool branch_taken_0x22fe80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE80u;
            // 0x22fe84: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe80) {
            ctx->pc = 0x22FEB0u;
            goto label_22feb0;
        }
    }
    ctx->pc = 0x22FE88u;
label_22fe88:
    // 0x22fe88: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22fe8c:
    // 0x22fe8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x22fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_22fe90:
    // 0x22fe90: 0x2442c890  addiu       $v0, $v0, -0x3770
    ctx->pc = 0x22fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953104));
label_22fe94:
    // 0x22fe94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22fe98:
    // 0x22fe98: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_22fe9c:
    // 0x22fe9c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_22fea0:
    // 0x22fea0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_22fea4:
    // 0x22fea4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x22fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_22fea8:
    // 0x22fea8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x22fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_22feac:
    // 0x22feac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22feacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22feb0:
    // 0x22feb0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x22feb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22feb4:
    // 0x22feb4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x22feb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_22feb8:
    // 0x22feb8: 0x320f809  jalr        $t9
label_22febc:
    if (ctx->pc == 0x22FEBCu) {
        ctx->pc = 0x22FEBCu;
            // 0x22febc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FEC0u;
        goto label_22fec0;
    }
    ctx->pc = 0x22FEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FEC0u);
        ctx->pc = 0x22FEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEB8u;
            // 0x22febc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FEC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FEC0u; }
            if (ctx->pc != 0x22FEC0u) { return; }
        }
        }
    }
    ctx->pc = 0x22FEC0u;
label_22fec0:
    // 0x22fec0: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x22fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_22fec4:
    // 0x22fec4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22fec8:
    // 0x22fec8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_22fecc:
    if (ctx->pc == 0x22FECCu) {
        ctx->pc = 0x22FECCu;
            // 0x22fecc: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x22FED0u;
        goto label_22fed0;
    }
    ctx->pc = 0x22FEC8u;
    {
        const bool branch_taken_0x22fec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEC8u;
            // 0x22fecc: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fec8) {
            ctx->pc = 0x22FEF0u;
            goto label_22fef0;
        }
    }
    ctx->pc = 0x22FED0u;
label_22fed0:
    // 0x22fed0: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x22fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_22fed4:
    // 0x22fed4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_22fed8:
    if (ctx->pc == 0x22FED8u) {
        ctx->pc = 0x22FEDCu;
        goto label_22fedc;
    }
    ctx->pc = 0x22FED4u;
    {
        const bool branch_taken_0x22fed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fed4) {
            ctx->pc = 0x22FEF0u;
            goto label_22fef0;
        }
    }
    ctx->pc = 0x22FEDCu;
label_22fedc:
    // 0x22fedc: 0x8283008c  lb          $v1, 0x8C($s4)
    ctx->pc = 0x22fedcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_22fee0:
    // 0x22fee0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22fee4:
    if (ctx->pc == 0x22FEE4u) {
        ctx->pc = 0x22FEE8u;
        goto label_22fee8;
    }
    ctx->pc = 0x22FEE0u;
    {
        const bool branch_taken_0x22fee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fee0) {
            ctx->pc = 0x22FEF0u;
            goto label_22fef0;
        }
    }
    ctx->pc = 0x22FEE8u;
label_22fee8:
    // 0x22fee8: 0xc08d1c4  jal         func_234710
label_22feec:
    if (ctx->pc == 0x22FEECu) {
        ctx->pc = 0x22FEECu;
            // 0x22feec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FEF0u;
        goto label_22fef0;
    }
    ctx->pc = 0x22FEE8u;
    SET_GPR_U32(ctx, 31, 0x22FEF0u);
    ctx->pc = 0x22FEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEE8u;
            // 0x22feec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FEF0u; }
        if (ctx->pc != 0x22FEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FEF0u; }
        if (ctx->pc != 0x22FEF0u) { return; }
    }
    ctx->pc = 0x22FEF0u;
label_22fef0:
    // 0x22fef0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22fef4:
    // 0x22fef4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x22fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_22fef8:
    // 0x22fef8: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x22fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_22fefc:
    // 0x22fefc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22ff00:
    // 0x22ff00: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x22ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_22ff04:
    // 0x22ff04: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x22ff04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22ff08:
    // 0x22ff08: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_22ff0c:
    if (ctx->pc == 0x22FF0Cu) {
        ctx->pc = 0x22FF0Cu;
            // 0x22ff0c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x22FF10u;
        goto label_22ff10;
    }
    ctx->pc = 0x22FF08u;
    {
        const bool branch_taken_0x22ff08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF08u;
            // 0x22ff0c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff08) {
            ctx->pc = 0x22FF38u;
            goto label_22ff38;
        }
    }
    ctx->pc = 0x22FF10u;
label_22ff10:
    // 0x22ff10: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x22ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22ff14:
    // 0x22ff14: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x22ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_22ff18:
    // 0x22ff18: 0x2463c8a8  addiu       $v1, $v1, -0x3758
    ctx->pc = 0x22ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953128));
label_22ff1c:
    // 0x22ff1c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22ff20:
    // 0x22ff20: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_22ff24:
    // 0x22ff24: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_22ff28:
    // 0x22ff28: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22ff28u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_22ff2c:
    // 0x22ff2c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x22ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_22ff30:
    // 0x22ff30: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x22ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_22ff34:
    // 0x22ff34: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x22ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_22ff38:
    // 0x22ff38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22ff3c:
    // 0x22ff3c: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x22ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_22ff40:
    // 0x22ff40: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x22ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_22ff44:
    // 0x22ff44: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x22ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_22ff48:
    // 0x22ff48: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x22ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_22ff4c:
    // 0x22ff4c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_22ff50:
    if (ctx->pc == 0x22FF50u) {
        ctx->pc = 0x22FF50u;
            // 0x22ff50: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x22FF54u;
        goto label_22ff54;
    }
    ctx->pc = 0x22FF4Cu;
    {
        const bool branch_taken_0x22ff4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x22ff4c) {
            ctx->pc = 0x22FF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF4Cu;
            // 0x22ff50: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FF68u;
            goto label_22ff68;
        }
    }
    ctx->pc = 0x22FF54u;
label_22ff54:
    // 0x22ff54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ff54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ff58:
    // 0x22ff58: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22ff58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22ff5c:
    // 0x22ff5c: 0x320f809  jalr        $t9
label_22ff60:
    if (ctx->pc == 0x22FF60u) {
        ctx->pc = 0x22FF64u;
        goto label_22ff64;
    }
    ctx->pc = 0x22FF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22FF64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FF64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FF64u; }
            if (ctx->pc != 0x22FF64u) { return; }
        }
        }
    }
    ctx->pc = 0x22FF64u;
label_22ff64:
    // 0x22ff64: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22ff68:
    // 0x22ff68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22ff6c:
    // 0x22ff6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22ff6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22ff70:
    // 0x22ff70: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_22ff74:
    if (ctx->pc == 0x22FF74u) {
        ctx->pc = 0x22FF78u;
        goto label_22ff78;
    }
    ctx->pc = 0x22FF70u;
    {
        const bool branch_taken_0x22ff70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ff70) {
            ctx->pc = 0x22FF9Cu;
            goto label_22ff9c;
        }
    }
    ctx->pc = 0x22FF78u;
label_22ff78:
    // 0x22ff78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ff7c:
    // 0x22ff7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22ff80:
    // 0x22ff80: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ff84:
    // 0x22ff84: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ff84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ff88:
    // 0x22ff88: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_22ff8c:
    // 0x22ff8c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ff90:
    // 0x22ff90: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ff94:
    // 0x22ff94: 0xc0a7ab4  jal         func_29EAD0
label_22ff98:
    if (ctx->pc == 0x22FF98u) {
        ctx->pc = 0x22FF98u;
            // 0x22ff98: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x22FF9Cu;
        goto label_22ff9c;
    }
    ctx->pc = 0x22FF94u;
    SET_GPR_U32(ctx, 31, 0x22FF9Cu);
    ctx->pc = 0x22FF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF94u;
            // 0x22ff98: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF9Cu; }
        if (ctx->pc != 0x22FF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF9Cu; }
        if (ctx->pc != 0x22FF9Cu) { return; }
    }
    ctx->pc = 0x22FF9Cu;
label_22ff9c:
    // 0x22ff9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22ff9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22ffa0:
    // 0x22ffa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22ffa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22ffa4:
    // 0x22ffa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ffa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22ffa8:
    // 0x22ffa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ffa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22ffac:
    // 0x22ffac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ffacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ffb0:
    // 0x22ffb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ffb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ffb4:
    // 0x22ffb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ffb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ffb8:
    // 0x22ffb8: 0x3e00008  jr          $ra
label_22ffbc:
    if (ctx->pc == 0x22FFBCu) {
        ctx->pc = 0x22FFBCu;
            // 0x22ffbc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x22FFC0u;
        goto label_fallthrough_0x22ffb8;
    }
    ctx->pc = 0x22FFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFB8u;
            // 0x22ffbc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22ffb8:
    ctx->pc = 0x22FFC0u;
}
