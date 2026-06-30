#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F89E0
// Address: 0x1f89e0 - 0x1f8c70
void sub_001F89E0_0x1f89e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F89E0_0x1f89e0");
#endif

    switch (ctx->pc) {
        case 0x1f89e0u: goto label_1f89e0;
        case 0x1f89e4u: goto label_1f89e4;
        case 0x1f89e8u: goto label_1f89e8;
        case 0x1f89ecu: goto label_1f89ec;
        case 0x1f89f0u: goto label_1f89f0;
        case 0x1f89f4u: goto label_1f89f4;
        case 0x1f89f8u: goto label_1f89f8;
        case 0x1f89fcu: goto label_1f89fc;
        case 0x1f8a00u: goto label_1f8a00;
        case 0x1f8a04u: goto label_1f8a04;
        case 0x1f8a08u: goto label_1f8a08;
        case 0x1f8a0cu: goto label_1f8a0c;
        case 0x1f8a10u: goto label_1f8a10;
        case 0x1f8a14u: goto label_1f8a14;
        case 0x1f8a18u: goto label_1f8a18;
        case 0x1f8a1cu: goto label_1f8a1c;
        case 0x1f8a20u: goto label_1f8a20;
        case 0x1f8a24u: goto label_1f8a24;
        case 0x1f8a28u: goto label_1f8a28;
        case 0x1f8a2cu: goto label_1f8a2c;
        case 0x1f8a30u: goto label_1f8a30;
        case 0x1f8a34u: goto label_1f8a34;
        case 0x1f8a38u: goto label_1f8a38;
        case 0x1f8a3cu: goto label_1f8a3c;
        case 0x1f8a40u: goto label_1f8a40;
        case 0x1f8a44u: goto label_1f8a44;
        case 0x1f8a48u: goto label_1f8a48;
        case 0x1f8a4cu: goto label_1f8a4c;
        case 0x1f8a50u: goto label_1f8a50;
        case 0x1f8a54u: goto label_1f8a54;
        case 0x1f8a58u: goto label_1f8a58;
        case 0x1f8a5cu: goto label_1f8a5c;
        case 0x1f8a60u: goto label_1f8a60;
        case 0x1f8a64u: goto label_1f8a64;
        case 0x1f8a68u: goto label_1f8a68;
        case 0x1f8a6cu: goto label_1f8a6c;
        case 0x1f8a70u: goto label_1f8a70;
        case 0x1f8a74u: goto label_1f8a74;
        case 0x1f8a78u: goto label_1f8a78;
        case 0x1f8a7cu: goto label_1f8a7c;
        case 0x1f8a80u: goto label_1f8a80;
        case 0x1f8a84u: goto label_1f8a84;
        case 0x1f8a88u: goto label_1f8a88;
        case 0x1f8a8cu: goto label_1f8a8c;
        case 0x1f8a90u: goto label_1f8a90;
        case 0x1f8a94u: goto label_1f8a94;
        case 0x1f8a98u: goto label_1f8a98;
        case 0x1f8a9cu: goto label_1f8a9c;
        case 0x1f8aa0u: goto label_1f8aa0;
        case 0x1f8aa4u: goto label_1f8aa4;
        case 0x1f8aa8u: goto label_1f8aa8;
        case 0x1f8aacu: goto label_1f8aac;
        case 0x1f8ab0u: goto label_1f8ab0;
        case 0x1f8ab4u: goto label_1f8ab4;
        case 0x1f8ab8u: goto label_1f8ab8;
        case 0x1f8abcu: goto label_1f8abc;
        case 0x1f8ac0u: goto label_1f8ac0;
        case 0x1f8ac4u: goto label_1f8ac4;
        case 0x1f8ac8u: goto label_1f8ac8;
        case 0x1f8accu: goto label_1f8acc;
        case 0x1f8ad0u: goto label_1f8ad0;
        case 0x1f8ad4u: goto label_1f8ad4;
        case 0x1f8ad8u: goto label_1f8ad8;
        case 0x1f8adcu: goto label_1f8adc;
        case 0x1f8ae0u: goto label_1f8ae0;
        case 0x1f8ae4u: goto label_1f8ae4;
        case 0x1f8ae8u: goto label_1f8ae8;
        case 0x1f8aecu: goto label_1f8aec;
        case 0x1f8af0u: goto label_1f8af0;
        case 0x1f8af4u: goto label_1f8af4;
        case 0x1f8af8u: goto label_1f8af8;
        case 0x1f8afcu: goto label_1f8afc;
        case 0x1f8b00u: goto label_1f8b00;
        case 0x1f8b04u: goto label_1f8b04;
        case 0x1f8b08u: goto label_1f8b08;
        case 0x1f8b0cu: goto label_1f8b0c;
        case 0x1f8b10u: goto label_1f8b10;
        case 0x1f8b14u: goto label_1f8b14;
        case 0x1f8b18u: goto label_1f8b18;
        case 0x1f8b1cu: goto label_1f8b1c;
        case 0x1f8b20u: goto label_1f8b20;
        case 0x1f8b24u: goto label_1f8b24;
        case 0x1f8b28u: goto label_1f8b28;
        case 0x1f8b2cu: goto label_1f8b2c;
        case 0x1f8b30u: goto label_1f8b30;
        case 0x1f8b34u: goto label_1f8b34;
        case 0x1f8b38u: goto label_1f8b38;
        case 0x1f8b3cu: goto label_1f8b3c;
        case 0x1f8b40u: goto label_1f8b40;
        case 0x1f8b44u: goto label_1f8b44;
        case 0x1f8b48u: goto label_1f8b48;
        case 0x1f8b4cu: goto label_1f8b4c;
        case 0x1f8b50u: goto label_1f8b50;
        case 0x1f8b54u: goto label_1f8b54;
        case 0x1f8b58u: goto label_1f8b58;
        case 0x1f8b5cu: goto label_1f8b5c;
        case 0x1f8b60u: goto label_1f8b60;
        case 0x1f8b64u: goto label_1f8b64;
        case 0x1f8b68u: goto label_1f8b68;
        case 0x1f8b6cu: goto label_1f8b6c;
        case 0x1f8b70u: goto label_1f8b70;
        case 0x1f8b74u: goto label_1f8b74;
        case 0x1f8b78u: goto label_1f8b78;
        case 0x1f8b7cu: goto label_1f8b7c;
        case 0x1f8b80u: goto label_1f8b80;
        case 0x1f8b84u: goto label_1f8b84;
        case 0x1f8b88u: goto label_1f8b88;
        case 0x1f8b8cu: goto label_1f8b8c;
        case 0x1f8b90u: goto label_1f8b90;
        case 0x1f8b94u: goto label_1f8b94;
        case 0x1f8b98u: goto label_1f8b98;
        case 0x1f8b9cu: goto label_1f8b9c;
        case 0x1f8ba0u: goto label_1f8ba0;
        case 0x1f8ba4u: goto label_1f8ba4;
        case 0x1f8ba8u: goto label_1f8ba8;
        case 0x1f8bacu: goto label_1f8bac;
        case 0x1f8bb0u: goto label_1f8bb0;
        case 0x1f8bb4u: goto label_1f8bb4;
        case 0x1f8bb8u: goto label_1f8bb8;
        case 0x1f8bbcu: goto label_1f8bbc;
        case 0x1f8bc0u: goto label_1f8bc0;
        case 0x1f8bc4u: goto label_1f8bc4;
        case 0x1f8bc8u: goto label_1f8bc8;
        case 0x1f8bccu: goto label_1f8bcc;
        case 0x1f8bd0u: goto label_1f8bd0;
        case 0x1f8bd4u: goto label_1f8bd4;
        case 0x1f8bd8u: goto label_1f8bd8;
        case 0x1f8bdcu: goto label_1f8bdc;
        case 0x1f8be0u: goto label_1f8be0;
        case 0x1f8be4u: goto label_1f8be4;
        case 0x1f8be8u: goto label_1f8be8;
        case 0x1f8becu: goto label_1f8bec;
        case 0x1f8bf0u: goto label_1f8bf0;
        case 0x1f8bf4u: goto label_1f8bf4;
        case 0x1f8bf8u: goto label_1f8bf8;
        case 0x1f8bfcu: goto label_1f8bfc;
        case 0x1f8c00u: goto label_1f8c00;
        case 0x1f8c04u: goto label_1f8c04;
        case 0x1f8c08u: goto label_1f8c08;
        case 0x1f8c0cu: goto label_1f8c0c;
        case 0x1f8c10u: goto label_1f8c10;
        case 0x1f8c14u: goto label_1f8c14;
        case 0x1f8c18u: goto label_1f8c18;
        case 0x1f8c1cu: goto label_1f8c1c;
        case 0x1f8c20u: goto label_1f8c20;
        case 0x1f8c24u: goto label_1f8c24;
        case 0x1f8c28u: goto label_1f8c28;
        case 0x1f8c2cu: goto label_1f8c2c;
        case 0x1f8c30u: goto label_1f8c30;
        case 0x1f8c34u: goto label_1f8c34;
        case 0x1f8c38u: goto label_1f8c38;
        case 0x1f8c3cu: goto label_1f8c3c;
        case 0x1f8c40u: goto label_1f8c40;
        case 0x1f8c44u: goto label_1f8c44;
        case 0x1f8c48u: goto label_1f8c48;
        case 0x1f8c4cu: goto label_1f8c4c;
        case 0x1f8c50u: goto label_1f8c50;
        case 0x1f8c54u: goto label_1f8c54;
        case 0x1f8c58u: goto label_1f8c58;
        case 0x1f8c5cu: goto label_1f8c5c;
        case 0x1f8c60u: goto label_1f8c60;
        case 0x1f8c64u: goto label_1f8c64;
        case 0x1f8c68u: goto label_1f8c68;
        case 0x1f8c6cu: goto label_1f8c6c;
        default: break;
    }

    ctx->pc = 0x1f89e0u;

label_1f89e0:
    // 0x1f89e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f89e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1f89e4:
    // 0x1f89e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f89e8:
    // 0x1f89e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f89e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f89ec:
    // 0x1f89ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f89ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f89f0:
    // 0x1f89f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f89f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f89f4:
    // 0x1f89f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f89f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f89f8:
    // 0x1f89f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f89f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f89fc:
    // 0x1f89fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f89fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f8a00:
    // 0x1f8a00: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f8a04:
    // 0x1f8a04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f8a08:
    // 0x1f8a08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f8a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a0c:
    // 0x1f8a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f8a10:
    // 0x1f8a10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f8a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a14:
    // 0x1f8a14: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f8a18:
    // 0x1f8a18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f8a1c:
    // 0x1f8a1c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f8a20:
    // 0x1f8a20: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f8a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f8a24:
    // 0x1f8a24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f8a28:
    if (ctx->pc == 0x1F8A28u) {
        ctx->pc = 0x1F8A28u;
            // 0x1f8a28: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F8A2Cu;
        goto label_1f8a2c;
    }
    ctx->pc = 0x1F8A24u;
    {
        const bool branch_taken_0x1f8a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A24u;
            // 0x1f8a28: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a24) {
            ctx->pc = 0x1F8A54u;
            goto label_1f8a54;
        }
    }
    ctx->pc = 0x1F8A2Cu;
label_1f8a2c:
    // 0x1f8a2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f8a30:
    // 0x1f8a30: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f8a34:
    // 0x1f8a34: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x1f8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
label_1f8a38:
    // 0x1f8a38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f8a3c:
    // 0x1f8a3c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f8a40:
    // 0x1f8a40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f8a44:
    // 0x1f8a44: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f8a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f8a48:
    // 0x1f8a48: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f8a4c:
    // 0x1f8a4c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f8a50:
    // 0x1f8a50: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f8a54:
    // 0x1f8a54: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1f8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f8a58:
    // 0x1f8a58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8a5c:
    // 0x1f8a5c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1f8a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f8a60:
    // 0x1f8a60: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1f8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f8a64:
    // 0x1f8a64: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f8a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f8a68:
    // 0x1f8a68: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f8a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8a6c:
    // 0x1f8a6c: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x1f8a6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f8a70:
    // 0x1f8a70: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f8a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8a74:
    // 0x1f8a74: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1f8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f8a78:
    // 0x1f8a78: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f8a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8a7c:
    // 0x1f8a7c: 0x24910030  addiu       $s1, $a0, 0x30
    ctx->pc = 0x1f8a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1f8a80:
    // 0x1f8a80: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f8a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1f8a84:
    // 0x1f8a84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1f8a88:
    // 0x1f8a88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f8a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8a8c:
    // 0x1f8a8c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1f8a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f8a90:
    // 0x1f8a90: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1f8a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f8a94:
    // 0x1f8a94: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1f8a94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f8a98:
    // 0x1f8a98: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1f8a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1f8a9c:
    // 0x1f8a9c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f8a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f8aa0:
    // 0x1f8aa0: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x1f8aa0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f8aa4:
    // 0x1f8aa4: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1f8aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f8aa8:
    // 0x1f8aa8: 0xe7ab0084  swc1        $f11, 0x84($sp)
    ctx->pc = 0x1f8aa8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f8aac:
    // 0x1f8aac: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1f8aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f8ab0:
    // 0x1f8ab0: 0xe7aa0088  swc1        $f10, 0x88($sp)
    ctx->pc = 0x1f8ab0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f8ab4:
    // 0x1f8ab4: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1f8ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f8ab8:
    // 0x1f8ab8: 0xe7a9008c  swc1        $f9, 0x8C($sp)
    ctx->pc = 0x1f8ab8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f8abc:
    // 0x1f8abc: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1f8abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f8ac0:
    // 0x1f8ac0: 0xe7a80090  swc1        $f8, 0x90($sp)
    ctx->pc = 0x1f8ac0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f8ac4:
    // 0x1f8ac4: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1f8ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8ac8:
    // 0x1f8ac8: 0xe7a70094  swc1        $f7, 0x94($sp)
    ctx->pc = 0x1f8ac8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f8acc:
    // 0x1f8acc: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1f8accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8ad0:
    // 0x1f8ad0: 0xe7a60098  swc1        $f6, 0x98($sp)
    ctx->pc = 0x1f8ad0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f8ad4:
    // 0x1f8ad4: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1f8ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8ad8:
    // 0x1f8ad8: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x1f8ad8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f8adc:
    // 0x1f8adc: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1f8adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8ae0:
    // 0x1f8ae0: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x1f8ae0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f8ae4:
    // 0x1f8ae4: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1f8ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8ae8:
    // 0x1f8ae8: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x1f8ae8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f8aec:
    // 0x1f8aec: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f8aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8af0:
    // 0x1f8af0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x1f8af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f8af4:
    // 0x1f8af4: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x1f8af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1f8af8:
    // 0x1f8af8: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x1f8af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f8afc:
    // 0x1f8afc: 0xc7ab0070  lwc1        $f11, 0x70($sp)
    ctx->pc = 0x1f8afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f8b00:
    // 0x1f8b00: 0xc7aa0080  lwc1        $f10, 0x80($sp)
    ctx->pc = 0x1f8b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f8b04:
    // 0x1f8b04: 0xc7a900a0  lwc1        $f9, 0xA0($sp)
    ctx->pc = 0x1f8b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f8b08:
    // 0x1f8b08: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x1f8b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f8b0c:
    // 0x1f8b0c: 0xc7a70074  lwc1        $f7, 0x74($sp)
    ctx->pc = 0x1f8b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f8b10:
    // 0x1f8b10: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x1f8b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8b14:
    // 0x1f8b14: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x1f8b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8b18:
    // 0x1f8b18: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x1f8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8b1c:
    // 0x1f8b1c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1f8b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8b20:
    // 0x1f8b20: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1f8b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8b24:
    // 0x1f8b24: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1f8b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8b28:
    // 0x1f8b28: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1f8b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f8b2c:
    // 0x1f8b2c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f8b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1f8b30:
    // 0x1f8b30: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1f8b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f8b34:
    // 0x1f8b34: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1f8b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f8b38:
    // 0x1f8b38: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1f8b38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1f8b3c:
    // 0x1f8b3c: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1f8b3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1f8b40:
    // 0x1f8b40: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1f8b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1f8b44:
    // 0x1f8b44: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1f8b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1f8b48:
    // 0x1f8b48: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1f8b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1f8b4c:
    // 0x1f8b4c: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1f8b4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1f8b50:
    // 0x1f8b50: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f8b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f8b54:
    // 0x1f8b54: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1f8b54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1f8b58:
    // 0x1f8b58: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1f8b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1f8b5c:
    // 0x1f8b5c: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1f8b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1f8b60:
    // 0x1f8b60: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1f8b60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1f8b64:
    // 0x1f8b64: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1f8b64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1f8b68:
    // 0x1f8b68: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1f8b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1f8b6c:
    // 0x1f8b6c: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1f8b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1f8b70:
    // 0x1f8b70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f8b74:
    // 0x1f8b74: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1f8b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1f8b78:
    // 0x1f8b78: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1f8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1f8b7c:
    // 0x1f8b7c: 0x4c1ffea  bgez        $a2, . + 4 + (-0x16 << 2)
label_1f8b80:
    if (ctx->pc == 0x1F8B80u) {
        ctx->pc = 0x1F8B80u;
            // 0x1f8b80: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->pc = 0x1F8B84u;
        goto label_1f8b84;
    }
    ctx->pc = 0x1F8B7Cu;
    {
        const bool branch_taken_0x1f8b7c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1F8B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B7Cu;
            // 0x1f8b80: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b7c) {
            ctx->pc = 0x1F8B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8b28;
        }
    }
    ctx->pc = 0x1F8B84u;
label_1f8b84:
    // 0x1f8b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f8b88:
    // 0x1f8b88: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1f8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f8b8c:
    // 0x1f8b8c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1f8b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f8b90:
    // 0x1f8b90: 0xc09e998  jal         func_27A660
label_1f8b94:
    if (ctx->pc == 0x1F8B94u) {
        ctx->pc = 0x1F8B94u;
            // 0x1f8b94: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F8B98u;
        goto label_1f8b98;
    }
    ctx->pc = 0x1F8B90u;
    SET_GPR_U32(ctx, 31, 0x1F8B98u);
    ctx->pc = 0x1F8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B90u;
            // 0x1f8b94: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A660u;
    if (runtime->hasFunction(0x27A660u)) {
        auto targetFn = runtime->lookupFunction(0x27A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B98u; }
        if (ctx->pc != 0x1F8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A660_0x27a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B98u; }
        if (ctx->pc != 0x1F8B98u) { return; }
    }
    ctx->pc = 0x1F8B98u;
label_1f8b98:
    // 0x1f8b98: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x1f8b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8b9c:
    // 0x1f8b9c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1f8b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8ba0:
    // 0x1f8ba0: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x1f8ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8ba4:
    // 0x1f8ba4: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1f8ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8ba8:
    // 0x1f8ba8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f8bac:
    // 0x1f8bac: 0x46041841  sub.s       $f1, $f3, $f4
    ctx->pc = 0x1f8bacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_1f8bb0:
    // 0x1f8bb0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1f8bb0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1f8bb4:
    // 0x1f8bb4: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x1f8bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8bb8:
    // 0x1f8bb8: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x1f8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8bbc:
    // 0x1f8bbc: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1f8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8bc0:
    // 0x1f8bc0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1f8bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8bc4:
    // 0x1f8bc4: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x1f8bc4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_1f8bc8:
    // 0x1f8bc8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1f8bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1f8bcc:
    // 0x1f8bcc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f8bccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f8bd0:
    // 0x1f8bd0: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x1f8bd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_1f8bd4:
    // 0x1f8bd4: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x1f8bd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1f8bd8:
    // 0x1f8bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8bdc:
    // 0x1f8bdc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1f8be0:
    if (ctx->pc == 0x1F8BE0u) {
        ctx->pc = 0x1F8BE4u;
        goto label_1f8be4;
    }
    ctx->pc = 0x1F8BDCu;
    {
        const bool branch_taken_0x1f8bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8bdc) {
            ctx->pc = 0x1F8BFCu;
            goto label_1f8bfc;
        }
    }
    ctx->pc = 0x1F8BE4u;
label_1f8be4:
    // 0x1f8be4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f8be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f8be8:
    // 0x1f8be8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f8be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f8bec:
    // 0x1f8bec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f8becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f8bf0:
    // 0x1f8bf0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f8bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f8bf4:
    // 0x1f8bf4: 0x320f809  jalr        $t9
label_1f8bf8:
    if (ctx->pc == 0x1F8BF8u) {
        ctx->pc = 0x1F8BF8u;
            // 0x1f8bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BFCu;
        goto label_1f8bfc;
    }
    ctx->pc = 0x1F8BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F8BFCu);
        ctx->pc = 0x1F8BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BF4u;
            // 0x1f8bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F8BFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BFCu; }
            if (ctx->pc != 0x1F8BFCu) { return; }
        }
        }
    }
    ctx->pc = 0x1F8BFCu;
label_1f8bfc:
    // 0x1f8bfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f8c00:
    // 0x1f8c00: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f8c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f8c04:
    // 0x1f8c04: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f8c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f8c08:
    // 0x1f8c08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f8c0c:
    // 0x1f8c0c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f8c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f8c10:
    // 0x1f8c10: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f8c10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f8c14:
    // 0x1f8c14: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8c18:
    if (ctx->pc == 0x1F8C18u) {
        ctx->pc = 0x1F8C18u;
            // 0x1f8c18: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F8C1Cu;
        goto label_1f8c1c;
    }
    ctx->pc = 0x1F8C14u;
    {
        const bool branch_taken_0x1f8c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C14u;
            // 0x1f8c18: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c14) {
            ctx->pc = 0x1F8C44u;
            goto label_1f8c44;
        }
    }
    ctx->pc = 0x1F8C1Cu;
label_1f8c1c:
    // 0x1f8c1c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f8c20:
    // 0x1f8c20: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f8c24:
    // 0x1f8c24: 0x2463b010  addiu       $v1, $v1, -0x4FF0
    ctx->pc = 0x1f8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946832));
label_1f8c28:
    // 0x1f8c28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f8c2c:
    // 0x1f8c2c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f8c30:
    // 0x1f8c30: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f8c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f8c34:
    // 0x1f8c34: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f8c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f8c38:
    // 0x1f8c38: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f8c3c:
    // 0x1f8c3c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f8c40:
    // 0x1f8c40: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f8c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f8c44:
    // 0x1f8c44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f8c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f8c48:
    // 0x1f8c48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f8c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f8c4c:
    // 0x1f8c4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f8c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f8c50:
    // 0x1f8c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f8c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f8c54:
    // 0x1f8c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f8c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f8c58:
    // 0x1f8c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8c5c:
    // 0x1f8c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8c60:
    // 0x1f8c60: 0x3e00008  jr          $ra
label_1f8c64:
    if (ctx->pc == 0x1F8C64u) {
        ctx->pc = 0x1F8C64u;
            // 0x1f8c64: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1F8C68u;
        goto label_1f8c68;
    }
    ctx->pc = 0x1F8C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C60u;
            // 0x1f8c64: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8C68u;
label_1f8c68:
    // 0x1f8c68: 0x0  nop
    ctx->pc = 0x1f8c68u;
    // NOP
label_1f8c6c:
    // 0x1f8c6c: 0x0  nop
    ctx->pc = 0x1f8c6cu;
    // NOP
}
