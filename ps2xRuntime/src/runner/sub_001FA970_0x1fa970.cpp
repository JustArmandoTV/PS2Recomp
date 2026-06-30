#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA970
// Address: 0x1fa970 - 0x1fac50
void sub_001FA970_0x1fa970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA970_0x1fa970");
#endif

    switch (ctx->pc) {
        case 0x1fa970u: goto label_1fa970;
        case 0x1fa974u: goto label_1fa974;
        case 0x1fa978u: goto label_1fa978;
        case 0x1fa97cu: goto label_1fa97c;
        case 0x1fa980u: goto label_1fa980;
        case 0x1fa984u: goto label_1fa984;
        case 0x1fa988u: goto label_1fa988;
        case 0x1fa98cu: goto label_1fa98c;
        case 0x1fa990u: goto label_1fa990;
        case 0x1fa994u: goto label_1fa994;
        case 0x1fa998u: goto label_1fa998;
        case 0x1fa99cu: goto label_1fa99c;
        case 0x1fa9a0u: goto label_1fa9a0;
        case 0x1fa9a4u: goto label_1fa9a4;
        case 0x1fa9a8u: goto label_1fa9a8;
        case 0x1fa9acu: goto label_1fa9ac;
        case 0x1fa9b0u: goto label_1fa9b0;
        case 0x1fa9b4u: goto label_1fa9b4;
        case 0x1fa9b8u: goto label_1fa9b8;
        case 0x1fa9bcu: goto label_1fa9bc;
        case 0x1fa9c0u: goto label_1fa9c0;
        case 0x1fa9c4u: goto label_1fa9c4;
        case 0x1fa9c8u: goto label_1fa9c8;
        case 0x1fa9ccu: goto label_1fa9cc;
        case 0x1fa9d0u: goto label_1fa9d0;
        case 0x1fa9d4u: goto label_1fa9d4;
        case 0x1fa9d8u: goto label_1fa9d8;
        case 0x1fa9dcu: goto label_1fa9dc;
        case 0x1fa9e0u: goto label_1fa9e0;
        case 0x1fa9e4u: goto label_1fa9e4;
        case 0x1fa9e8u: goto label_1fa9e8;
        case 0x1fa9ecu: goto label_1fa9ec;
        case 0x1fa9f0u: goto label_1fa9f0;
        case 0x1fa9f4u: goto label_1fa9f4;
        case 0x1fa9f8u: goto label_1fa9f8;
        case 0x1fa9fcu: goto label_1fa9fc;
        case 0x1faa00u: goto label_1faa00;
        case 0x1faa04u: goto label_1faa04;
        case 0x1faa08u: goto label_1faa08;
        case 0x1faa0cu: goto label_1faa0c;
        case 0x1faa10u: goto label_1faa10;
        case 0x1faa14u: goto label_1faa14;
        case 0x1faa18u: goto label_1faa18;
        case 0x1faa1cu: goto label_1faa1c;
        case 0x1faa20u: goto label_1faa20;
        case 0x1faa24u: goto label_1faa24;
        case 0x1faa28u: goto label_1faa28;
        case 0x1faa2cu: goto label_1faa2c;
        case 0x1faa30u: goto label_1faa30;
        case 0x1faa34u: goto label_1faa34;
        case 0x1faa38u: goto label_1faa38;
        case 0x1faa3cu: goto label_1faa3c;
        case 0x1faa40u: goto label_1faa40;
        case 0x1faa44u: goto label_1faa44;
        case 0x1faa48u: goto label_1faa48;
        case 0x1faa4cu: goto label_1faa4c;
        case 0x1faa50u: goto label_1faa50;
        case 0x1faa54u: goto label_1faa54;
        case 0x1faa58u: goto label_1faa58;
        case 0x1faa5cu: goto label_1faa5c;
        case 0x1faa60u: goto label_1faa60;
        case 0x1faa64u: goto label_1faa64;
        case 0x1faa68u: goto label_1faa68;
        case 0x1faa6cu: goto label_1faa6c;
        case 0x1faa70u: goto label_1faa70;
        case 0x1faa74u: goto label_1faa74;
        case 0x1faa78u: goto label_1faa78;
        case 0x1faa7cu: goto label_1faa7c;
        case 0x1faa80u: goto label_1faa80;
        case 0x1faa84u: goto label_1faa84;
        case 0x1faa88u: goto label_1faa88;
        case 0x1faa8cu: goto label_1faa8c;
        case 0x1faa90u: goto label_1faa90;
        case 0x1faa94u: goto label_1faa94;
        case 0x1faa98u: goto label_1faa98;
        case 0x1faa9cu: goto label_1faa9c;
        case 0x1faaa0u: goto label_1faaa0;
        case 0x1faaa4u: goto label_1faaa4;
        case 0x1faaa8u: goto label_1faaa8;
        case 0x1faaacu: goto label_1faaac;
        case 0x1faab0u: goto label_1faab0;
        case 0x1faab4u: goto label_1faab4;
        case 0x1faab8u: goto label_1faab8;
        case 0x1faabcu: goto label_1faabc;
        case 0x1faac0u: goto label_1faac0;
        case 0x1faac4u: goto label_1faac4;
        case 0x1faac8u: goto label_1faac8;
        case 0x1faaccu: goto label_1faacc;
        case 0x1faad0u: goto label_1faad0;
        case 0x1faad4u: goto label_1faad4;
        case 0x1faad8u: goto label_1faad8;
        case 0x1faadcu: goto label_1faadc;
        case 0x1faae0u: goto label_1faae0;
        case 0x1faae4u: goto label_1faae4;
        case 0x1faae8u: goto label_1faae8;
        case 0x1faaecu: goto label_1faaec;
        case 0x1faaf0u: goto label_1faaf0;
        case 0x1faaf4u: goto label_1faaf4;
        case 0x1faaf8u: goto label_1faaf8;
        case 0x1faafcu: goto label_1faafc;
        case 0x1fab00u: goto label_1fab00;
        case 0x1fab04u: goto label_1fab04;
        case 0x1fab08u: goto label_1fab08;
        case 0x1fab0cu: goto label_1fab0c;
        case 0x1fab10u: goto label_1fab10;
        case 0x1fab14u: goto label_1fab14;
        case 0x1fab18u: goto label_1fab18;
        case 0x1fab1cu: goto label_1fab1c;
        case 0x1fab20u: goto label_1fab20;
        case 0x1fab24u: goto label_1fab24;
        case 0x1fab28u: goto label_1fab28;
        case 0x1fab2cu: goto label_1fab2c;
        case 0x1fab30u: goto label_1fab30;
        case 0x1fab34u: goto label_1fab34;
        case 0x1fab38u: goto label_1fab38;
        case 0x1fab3cu: goto label_1fab3c;
        case 0x1fab40u: goto label_1fab40;
        case 0x1fab44u: goto label_1fab44;
        case 0x1fab48u: goto label_1fab48;
        case 0x1fab4cu: goto label_1fab4c;
        case 0x1fab50u: goto label_1fab50;
        case 0x1fab54u: goto label_1fab54;
        case 0x1fab58u: goto label_1fab58;
        case 0x1fab5cu: goto label_1fab5c;
        case 0x1fab60u: goto label_1fab60;
        case 0x1fab64u: goto label_1fab64;
        case 0x1fab68u: goto label_1fab68;
        case 0x1fab6cu: goto label_1fab6c;
        case 0x1fab70u: goto label_1fab70;
        case 0x1fab74u: goto label_1fab74;
        case 0x1fab78u: goto label_1fab78;
        case 0x1fab7cu: goto label_1fab7c;
        case 0x1fab80u: goto label_1fab80;
        case 0x1fab84u: goto label_1fab84;
        case 0x1fab88u: goto label_1fab88;
        case 0x1fab8cu: goto label_1fab8c;
        case 0x1fab90u: goto label_1fab90;
        case 0x1fab94u: goto label_1fab94;
        case 0x1fab98u: goto label_1fab98;
        case 0x1fab9cu: goto label_1fab9c;
        case 0x1faba0u: goto label_1faba0;
        case 0x1faba4u: goto label_1faba4;
        case 0x1faba8u: goto label_1faba8;
        case 0x1fabacu: goto label_1fabac;
        case 0x1fabb0u: goto label_1fabb0;
        case 0x1fabb4u: goto label_1fabb4;
        case 0x1fabb8u: goto label_1fabb8;
        case 0x1fabbcu: goto label_1fabbc;
        case 0x1fabc0u: goto label_1fabc0;
        case 0x1fabc4u: goto label_1fabc4;
        case 0x1fabc8u: goto label_1fabc8;
        case 0x1fabccu: goto label_1fabcc;
        case 0x1fabd0u: goto label_1fabd0;
        case 0x1fabd4u: goto label_1fabd4;
        case 0x1fabd8u: goto label_1fabd8;
        case 0x1fabdcu: goto label_1fabdc;
        case 0x1fabe0u: goto label_1fabe0;
        case 0x1fabe4u: goto label_1fabe4;
        case 0x1fabe8u: goto label_1fabe8;
        case 0x1fabecu: goto label_1fabec;
        case 0x1fabf0u: goto label_1fabf0;
        case 0x1fabf4u: goto label_1fabf4;
        case 0x1fabf8u: goto label_1fabf8;
        case 0x1fabfcu: goto label_1fabfc;
        case 0x1fac00u: goto label_1fac00;
        case 0x1fac04u: goto label_1fac04;
        case 0x1fac08u: goto label_1fac08;
        case 0x1fac0cu: goto label_1fac0c;
        case 0x1fac10u: goto label_1fac10;
        case 0x1fac14u: goto label_1fac14;
        case 0x1fac18u: goto label_1fac18;
        case 0x1fac1cu: goto label_1fac1c;
        case 0x1fac20u: goto label_1fac20;
        case 0x1fac24u: goto label_1fac24;
        case 0x1fac28u: goto label_1fac28;
        case 0x1fac2cu: goto label_1fac2c;
        case 0x1fac30u: goto label_1fac30;
        case 0x1fac34u: goto label_1fac34;
        case 0x1fac38u: goto label_1fac38;
        case 0x1fac3cu: goto label_1fac3c;
        case 0x1fac40u: goto label_1fac40;
        case 0x1fac44u: goto label_1fac44;
        case 0x1fac48u: goto label_1fac48;
        case 0x1fac4cu: goto label_1fac4c;
        default: break;
    }

    ctx->pc = 0x1fa970u;

label_1fa970:
    // 0x1fa970: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1fa970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1fa974:
    // 0x1fa974: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fa974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fa978:
    // 0x1fa978: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fa978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fa97c:
    // 0x1fa97c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fa97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fa980:
    // 0x1fa980: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fa980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fa984:
    // 0x1fa984: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fa984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fa988:
    // 0x1fa988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fa988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fa98c:
    // 0x1fa98c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1fa98cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_1fa990:
    // 0x1fa990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fa994:
    // 0x1fa994: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1fa994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fa998:
    // 0x1fa998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa99c:
    // 0x1fa99c: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1fa99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1fa9a0:
    // 0x1fa9a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fa9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fa9a4:
    // 0x1fa9a4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1fa9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1fa9a8:
    // 0x1fa9a8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1fa9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fa9ac:
    // 0x1fa9ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1fa9b0:
    if (ctx->pc == 0x1FA9B0u) {
        ctx->pc = 0x1FA9B0u;
            // 0x1fa9b0: 0x24e7ea60  addiu       $a3, $a3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961760));
        ctx->pc = 0x1FA9B4u;
        goto label_1fa9b4;
    }
    ctx->pc = 0x1FA9ACu;
    {
        const bool branch_taken_0x1fa9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA9ACu;
            // 0x1fa9b0: 0x24e7ea60  addiu       $a3, $a3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9ac) {
            ctx->pc = 0x1FA9DCu;
            goto label_1fa9dc;
        }
    }
    ctx->pc = 0x1FA9B4u;
label_1fa9b4:
    // 0x1fa9b4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1fa9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1fa9b8:
    // 0x1fa9b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1fa9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1fa9bc:
    // 0x1fa9bc: 0x2442b0a8  addiu       $v0, $v0, -0x4F58
    ctx->pc = 0x1fa9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946984));
label_1fa9c0:
    // 0x1fa9c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fa9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fa9c4:
    // 0x1fa9c4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1fa9c8:
    // 0x1fa9c8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fa9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fa9cc:
    // 0x1fa9cc: 0x4008c803  .word       0x4008C803                   # mfc0        $t0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_perf);
label_1fa9d0:
    // 0x1fa9d0: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1fa9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1fa9d4:
    // 0x1fa9d4: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x1fa9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
label_1fa9d8:
    // 0x1fa9d8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1fa9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1fa9dc:
    // 0x1fa9dc: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x1fa9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
label_1fa9e0:
    // 0x1fa9e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fa9e4:
    // 0x1fa9e4: 0xafa60114  sw          $a2, 0x114($sp)
    ctx->pc = 0x1fa9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 6));
label_1fa9e8:
    // 0x1fa9e8: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1fa9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1fa9ec:
    // 0x1fa9ec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1fa9f0:
    // 0x1fa9f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1fa9f4:
    // 0x1fa9f4: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa9f8:
    // 0x1fa9f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1fa9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa9fc:
    // 0x1fa9fc: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x1fa9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1faa00:
    // 0x1faa00: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1faa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1faa04:
    // 0x1faa04: 0x24720030  addiu       $s2, $v1, 0x30
    ctx->pc = 0x1faa04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1faa08:
    // 0x1faa08: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1faa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1faa0c:
    // 0x1faa0c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1faa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1faa10:
    // 0x1faa10: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1faa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1faa14:
    // 0x1faa14: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1faa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1faa18:
    // 0x1faa18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1faa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1faa1c:
    // 0x1faa1c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1faa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1faa20:
    // 0x1faa20: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1faa20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1faa24:
    // 0x1faa24: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1faa24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1faa28:
    // 0x1faa28: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1faa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1faa2c:
    // 0x1faa2c: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1faa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1faa30:
    // 0x1faa30: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1faa30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1faa34:
    // 0x1faa34: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1faa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1faa38:
    // 0x1faa38: 0xe7ab0074  swc1        $f11, 0x74($sp)
    ctx->pc = 0x1faa38u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1faa3c:
    // 0x1faa3c: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1faa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1faa40:
    // 0x1faa40: 0xe7aa0078  swc1        $f10, 0x78($sp)
    ctx->pc = 0x1faa40u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1faa44:
    // 0x1faa44: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1faa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1faa48:
    // 0x1faa48: 0xe7a9007c  swc1        $f9, 0x7C($sp)
    ctx->pc = 0x1faa48u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1faa4c:
    // 0x1faa4c: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1faa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1faa50:
    // 0x1faa50: 0xe7a80080  swc1        $f8, 0x80($sp)
    ctx->pc = 0x1faa50u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1faa54:
    // 0x1faa54: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1faa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1faa58:
    // 0x1faa58: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x1faa58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1faa5c:
    // 0x1faa5c: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1faa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1faa60:
    // 0x1faa60: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x1faa60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1faa64:
    // 0x1faa64: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1faa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1faa68:
    // 0x1faa68: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x1faa68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1faa6c:
    // 0x1faa6c: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1faa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1faa70:
    // 0x1faa70: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1faa70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1faa74:
    // 0x1faa74: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1faa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1faa78:
    // 0x1faa78: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1faa78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1faa7c:
    // 0x1faa7c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1faa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1faa80:
    // 0x1faa80: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1faa80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1faa84:
    // 0x1faa84: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1faa84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1faa88:
    // 0x1faa88: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1faa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1faa8c:
    // 0x1faa8c: 0xc7ab0060  lwc1        $f11, 0x60($sp)
    ctx->pc = 0x1faa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1faa90:
    // 0x1faa90: 0xc7aa0070  lwc1        $f10, 0x70($sp)
    ctx->pc = 0x1faa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1faa94:
    // 0x1faa94: 0xc7a90090  lwc1        $f9, 0x90($sp)
    ctx->pc = 0x1faa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1faa98:
    // 0x1faa98: 0xc7a80084  lwc1        $f8, 0x84($sp)
    ctx->pc = 0x1faa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1faa9c:
    // 0x1faa9c: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x1faa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1faaa0:
    // 0x1faaa0: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x1faaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1faaa4:
    // 0x1faaa4: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x1faaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1faaa8:
    // 0x1faaa8: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x1faaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1faaac:
    // 0x1faaac: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1faaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1faab0:
    // 0x1faab0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1faab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1faab4:
    // 0x1faab4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1faab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1faab8:
    // 0x1faab8: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1faab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1faabc:
    // 0x1faabc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1faabcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1faac0:
    // 0x1faac0: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1faac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1faac4:
    // 0x1faac4: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1faac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1faac8:
    // 0x1faac8: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1faac8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1faacc:
    // 0x1faacc: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1faaccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1faad0:
    // 0x1faad0: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1faad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1faad4:
    // 0x1faad4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1faad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1faad8:
    // 0x1faad8: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1faad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1faadc:
    // 0x1faadc: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1faadcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1faae0:
    // 0x1faae0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1faae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1faae4:
    // 0x1faae4: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1faae4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1faae8:
    // 0x1faae8: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1faae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1faaec:
    // 0x1faaec: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1faaecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1faaf0:
    // 0x1faaf0: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1faaf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1faaf4:
    // 0x1faaf4: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1faaf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1faaf8:
    // 0x1faaf8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1faaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1faafc:
    // 0x1faafc: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1faafcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1fab00:
    // 0x1fab00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fab00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fab04:
    // 0x1fab04: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1fab04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1fab08:
    // 0x1fab08: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1fab08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_1fab0c:
    // 0x1fab0c: 0x501ffea  bgez        $t0, . + 4 + (-0x16 << 2)
label_1fab10:
    if (ctx->pc == 0x1FAB10u) {
        ctx->pc = 0x1FAB10u;
            // 0x1fab10: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->pc = 0x1FAB14u;
        goto label_1fab14;
    }
    ctx->pc = 0x1FAB0Cu;
    {
        const bool branch_taken_0x1fab0c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1FAB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB0Cu;
            // 0x1fab10: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab0c) {
            ctx->pc = 0x1FAAB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1faab8;
        }
    }
    ctx->pc = 0x1FAB14u;
label_1fab14:
    // 0x1fab14: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x1fab14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1fab18:
    // 0x1fab18: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1fab18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1fab1c:
    // 0x1fab1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fab20:
    // 0x1fab20: 0xc09ea24  jal         func_27A890
label_1fab24:
    if (ctx->pc == 0x1FAB24u) {
        ctx->pc = 0x1FAB24u;
            // 0x1fab24: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1FAB28u;
        goto label_1fab28;
    }
    ctx->pc = 0x1FAB20u;
    SET_GPR_U32(ctx, 31, 0x1FAB28u);
    ctx->pc = 0x1FAB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB20u;
            // 0x1fab24: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A890u;
    if (runtime->hasFunction(0x27A890u)) {
        auto targetFn = runtime->lookupFunction(0x27A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB28u; }
        if (ctx->pc != 0x1FAB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A890_0x27a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB28u; }
        if (ctx->pc != 0x1FAB28u) { return; }
    }
    ctx->pc = 0x1FAB28u;
label_1fab28:
    // 0x1fab28: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1fab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fab2c:
    // 0x1fab2c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1fab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fab30:
    // 0x1fab30: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1fab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fab34:
    // 0x1fab34: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1fab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fab38:
    // 0x1fab38: 0x46031140  add.s       $f5, $f2, $f3
    ctx->pc = 0x1fab38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1fab3c:
    // 0x1fab3c: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1fab3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1fab40:
    // 0x1fab40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fab40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fab44:
    // 0x1fab44: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
label_1fab48:
    if (ctx->pc == 0x1FAB48u) {
        ctx->pc = 0x1FAB48u;
            // 0x1fab48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB4Cu;
        goto label_1fab4c;
    }
    ctx->pc = 0x1FAB44u;
    {
        const bool branch_taken_0x1fab44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fab44) {
            ctx->pc = 0x1FAB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB44u;
            // 0x1fab48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FABCCu;
            goto label_1fabcc;
        }
    }
    ctx->pc = 0x1FAB4Cu;
label_1fab4c:
    // 0x1fab4c: 0x460119c1  sub.s       $f7, $f3, $f1
    ctx->pc = 0x1fab4cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1fab50:
    // 0x1fab50: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x1fab50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1fab54:
    // 0x1fab54: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1fab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fab58:
    // 0x1fab58: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1fab58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1fab5c:
    // 0x1fab5c: 0xc7a600a0  lwc1        $f6, 0xA0($sp)
    ctx->pc = 0x1fab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fab60:
    // 0x1fab60: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x1fab60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1fab64:
    // 0x1fab64: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x1fab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fab68:
    // 0x1fab68: 0x4606385c  madd.s      $f1, $f7, $f6
    ctx->pc = 0x1fab68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
label_1fab6c:
    // 0x1fab6c: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1fab6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1fab70:
    // 0x1fab70: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1fab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fab74:
    // 0x1fab74: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1fab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fab78:
    // 0x1fab78: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x1fab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fab7c:
    // 0x1fab7c: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x1fab7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1fab80:
    // 0x1fab80: 0x4604385c  madd.s      $f1, $f7, $f4
    ctx->pc = 0x1fab80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_1fab84:
    // 0x1fab84: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x1fab84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1fab88:
    // 0x1fab88: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1fab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fab8c:
    // 0x1fab8c: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x1fab8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1fab90:
    // 0x1fab90: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x1fab90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_1fab94:
    // 0x1fab94: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x1fab94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1fab98:
    // 0x1fab98: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1fab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fab9c:
    // 0x1fab9c: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x1fab9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1faba0:
    // 0x1faba0: 0x4602385c  madd.s      $f1, $f7, $f2
    ctx->pc = 0x1faba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_1faba4:
    // 0x1faba4: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x1faba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1faba8:
    // 0x1faba8: 0xe7a60100  swc1        $f6, 0x100($sp)
    ctx->pc = 0x1faba8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1fabac:
    // 0x1fabac: 0xe7a40104  swc1        $f4, 0x104($sp)
    ctx->pc = 0x1fabacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1fabb0:
    // 0x1fabb0: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1fabb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1fabb4:
    // 0x1fabb4: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x1fabb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1fabb8:
    // 0x1fabb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fabbc:
    if (ctx->pc == 0x1FABBCu) {
        ctx->pc = 0x1FABBCu;
            // 0x1fabbc: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->pc = 0x1FABC0u;
        goto label_1fabc0;
    }
    ctx->pc = 0x1FABB8u;
    {
        const bool branch_taken_0x1fabb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABB8u;
            // 0x1fabbc: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabb8) {
            ctx->pc = 0x1FABC8u;
            goto label_1fabc8;
        }
    }
    ctx->pc = 0x1FABC0u;
label_1fabc0:
    // 0x1fabc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fabc4:
    if (ctx->pc == 0x1FABC4u) {
        ctx->pc = 0x1FABC4u;
            // 0x1fabc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FABC8u;
        goto label_1fabc8;
    }
    ctx->pc = 0x1FABC0u;
    {
        const bool branch_taken_0x1fabc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABC0u;
            // 0x1fabc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabc0) {
            ctx->pc = 0x1FABCCu;
            goto label_1fabcc;
        }
    }
    ctx->pc = 0x1FABC8u;
label_1fabc8:
    // 0x1fabc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fabcc:
    // 0x1fabcc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1fabd0:
    if (ctx->pc == 0x1FABD0u) {
        ctx->pc = 0x1FABD4u;
        goto label_1fabd4;
    }
    ctx->pc = 0x1FABCCu;
    {
        const bool branch_taken_0x1fabcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabcc) {
            ctx->pc = 0x1FABE8u;
            goto label_1fabe8;
        }
    }
    ctx->pc = 0x1FABD4u;
label_1fabd4:
    // 0x1fabd4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1fabd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fabd8:
    // 0x1fabd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fabd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fabdc:
    // 0x1fabdc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fabdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fabe0:
    // 0x1fabe0: 0x320f809  jalr        $t9
label_1fabe4:
    if (ctx->pc == 0x1FABE4u) {
        ctx->pc = 0x1FABE4u;
            // 0x1fabe4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1FABE8u;
        goto label_1fabe8;
    }
    ctx->pc = 0x1FABE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FABE8u);
        ctx->pc = 0x1FABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABE0u;
            // 0x1fabe4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FABE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FABE8u; }
            if (ctx->pc != 0x1FABE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1FABE8u;
label_1fabe8:
    // 0x1fabe8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fabec:
    // 0x1fabec: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fabecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fabf0:
    // 0x1fabf0: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fabf4:
    // 0x1fabf4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fabf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fabf8:
    // 0x1fabf8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fabfc:
    // 0x1fabfc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fabfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fac00:
    // 0x1fac00: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fac04:
    if (ctx->pc == 0x1FAC04u) {
        ctx->pc = 0x1FAC04u;
            // 0x1fac04: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FAC08u;
        goto label_1fac08;
    }
    ctx->pc = 0x1FAC00u;
    {
        const bool branch_taken_0x1fac00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC00u;
            // 0x1fac04: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac00) {
            ctx->pc = 0x1FAC30u;
            goto label_1fac30;
        }
    }
    ctx->pc = 0x1FAC08u;
label_1fac08:
    // 0x1fac08: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fac0c:
    // 0x1fac0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fac10:
    // 0x1fac10: 0x2463b0b8  addiu       $v1, $v1, -0x4F48
    ctx->pc = 0x1fac10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947000));
label_1fac14:
    // 0x1fac14: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fac14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fac18:
    // 0x1fac18: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fac1c:
    // 0x1fac1c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fac20:
    // 0x1fac20: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fac20u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fac24:
    // 0x1fac24: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fac28:
    // 0x1fac28: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fac28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fac2c:
    // 0x1fac2c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fac30:
    // 0x1fac30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fac30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fac34:
    // 0x1fac34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fac34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fac38:
    // 0x1fac38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fac38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fac3c:
    // 0x1fac3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fac3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fac40:
    // 0x1fac40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fac40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fac44:
    // 0x1fac44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fac44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fac48:
    // 0x1fac48: 0x3e00008  jr          $ra
label_1fac4c:
    if (ctx->pc == 0x1FAC4Cu) {
        ctx->pc = 0x1FAC4Cu;
            // 0x1fac4c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1FAC50u;
        goto label_fallthrough_0x1fac48;
    }
    ctx->pc = 0x1FAC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC48u;
            // 0x1fac4c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fac48:
    ctx->pc = 0x1FAC50u;
}
