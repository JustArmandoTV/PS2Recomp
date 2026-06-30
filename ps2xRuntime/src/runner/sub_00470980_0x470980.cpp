#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00470980
// Address: 0x470980 - 0x470dc0
void sub_00470980_0x470980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470980_0x470980");
#endif

    switch (ctx->pc) {
        case 0x470980u: goto label_470980;
        case 0x470984u: goto label_470984;
        case 0x470988u: goto label_470988;
        case 0x47098cu: goto label_47098c;
        case 0x470990u: goto label_470990;
        case 0x470994u: goto label_470994;
        case 0x470998u: goto label_470998;
        case 0x47099cu: goto label_47099c;
        case 0x4709a0u: goto label_4709a0;
        case 0x4709a4u: goto label_4709a4;
        case 0x4709a8u: goto label_4709a8;
        case 0x4709acu: goto label_4709ac;
        case 0x4709b0u: goto label_4709b0;
        case 0x4709b4u: goto label_4709b4;
        case 0x4709b8u: goto label_4709b8;
        case 0x4709bcu: goto label_4709bc;
        case 0x4709c0u: goto label_4709c0;
        case 0x4709c4u: goto label_4709c4;
        case 0x4709c8u: goto label_4709c8;
        case 0x4709ccu: goto label_4709cc;
        case 0x4709d0u: goto label_4709d0;
        case 0x4709d4u: goto label_4709d4;
        case 0x4709d8u: goto label_4709d8;
        case 0x4709dcu: goto label_4709dc;
        case 0x4709e0u: goto label_4709e0;
        case 0x4709e4u: goto label_4709e4;
        case 0x4709e8u: goto label_4709e8;
        case 0x4709ecu: goto label_4709ec;
        case 0x4709f0u: goto label_4709f0;
        case 0x4709f4u: goto label_4709f4;
        case 0x4709f8u: goto label_4709f8;
        case 0x4709fcu: goto label_4709fc;
        case 0x470a00u: goto label_470a00;
        case 0x470a04u: goto label_470a04;
        case 0x470a08u: goto label_470a08;
        case 0x470a0cu: goto label_470a0c;
        case 0x470a10u: goto label_470a10;
        case 0x470a14u: goto label_470a14;
        case 0x470a18u: goto label_470a18;
        case 0x470a1cu: goto label_470a1c;
        case 0x470a20u: goto label_470a20;
        case 0x470a24u: goto label_470a24;
        case 0x470a28u: goto label_470a28;
        case 0x470a2cu: goto label_470a2c;
        case 0x470a30u: goto label_470a30;
        case 0x470a34u: goto label_470a34;
        case 0x470a38u: goto label_470a38;
        case 0x470a3cu: goto label_470a3c;
        case 0x470a40u: goto label_470a40;
        case 0x470a44u: goto label_470a44;
        case 0x470a48u: goto label_470a48;
        case 0x470a4cu: goto label_470a4c;
        case 0x470a50u: goto label_470a50;
        case 0x470a54u: goto label_470a54;
        case 0x470a58u: goto label_470a58;
        case 0x470a5cu: goto label_470a5c;
        case 0x470a60u: goto label_470a60;
        case 0x470a64u: goto label_470a64;
        case 0x470a68u: goto label_470a68;
        case 0x470a6cu: goto label_470a6c;
        case 0x470a70u: goto label_470a70;
        case 0x470a74u: goto label_470a74;
        case 0x470a78u: goto label_470a78;
        case 0x470a7cu: goto label_470a7c;
        case 0x470a80u: goto label_470a80;
        case 0x470a84u: goto label_470a84;
        case 0x470a88u: goto label_470a88;
        case 0x470a8cu: goto label_470a8c;
        case 0x470a90u: goto label_470a90;
        case 0x470a94u: goto label_470a94;
        case 0x470a98u: goto label_470a98;
        case 0x470a9cu: goto label_470a9c;
        case 0x470aa0u: goto label_470aa0;
        case 0x470aa4u: goto label_470aa4;
        case 0x470aa8u: goto label_470aa8;
        case 0x470aacu: goto label_470aac;
        case 0x470ab0u: goto label_470ab0;
        case 0x470ab4u: goto label_470ab4;
        case 0x470ab8u: goto label_470ab8;
        case 0x470abcu: goto label_470abc;
        case 0x470ac0u: goto label_470ac0;
        case 0x470ac4u: goto label_470ac4;
        case 0x470ac8u: goto label_470ac8;
        case 0x470accu: goto label_470acc;
        case 0x470ad0u: goto label_470ad0;
        case 0x470ad4u: goto label_470ad4;
        case 0x470ad8u: goto label_470ad8;
        case 0x470adcu: goto label_470adc;
        case 0x470ae0u: goto label_470ae0;
        case 0x470ae4u: goto label_470ae4;
        case 0x470ae8u: goto label_470ae8;
        case 0x470aecu: goto label_470aec;
        case 0x470af0u: goto label_470af0;
        case 0x470af4u: goto label_470af4;
        case 0x470af8u: goto label_470af8;
        case 0x470afcu: goto label_470afc;
        case 0x470b00u: goto label_470b00;
        case 0x470b04u: goto label_470b04;
        case 0x470b08u: goto label_470b08;
        case 0x470b0cu: goto label_470b0c;
        case 0x470b10u: goto label_470b10;
        case 0x470b14u: goto label_470b14;
        case 0x470b18u: goto label_470b18;
        case 0x470b1cu: goto label_470b1c;
        case 0x470b20u: goto label_470b20;
        case 0x470b24u: goto label_470b24;
        case 0x470b28u: goto label_470b28;
        case 0x470b2cu: goto label_470b2c;
        case 0x470b30u: goto label_470b30;
        case 0x470b34u: goto label_470b34;
        case 0x470b38u: goto label_470b38;
        case 0x470b3cu: goto label_470b3c;
        case 0x470b40u: goto label_470b40;
        case 0x470b44u: goto label_470b44;
        case 0x470b48u: goto label_470b48;
        case 0x470b4cu: goto label_470b4c;
        case 0x470b50u: goto label_470b50;
        case 0x470b54u: goto label_470b54;
        case 0x470b58u: goto label_470b58;
        case 0x470b5cu: goto label_470b5c;
        case 0x470b60u: goto label_470b60;
        case 0x470b64u: goto label_470b64;
        case 0x470b68u: goto label_470b68;
        case 0x470b6cu: goto label_470b6c;
        case 0x470b70u: goto label_470b70;
        case 0x470b74u: goto label_470b74;
        case 0x470b78u: goto label_470b78;
        case 0x470b7cu: goto label_470b7c;
        case 0x470b80u: goto label_470b80;
        case 0x470b84u: goto label_470b84;
        case 0x470b88u: goto label_470b88;
        case 0x470b8cu: goto label_470b8c;
        case 0x470b90u: goto label_470b90;
        case 0x470b94u: goto label_470b94;
        case 0x470b98u: goto label_470b98;
        case 0x470b9cu: goto label_470b9c;
        case 0x470ba0u: goto label_470ba0;
        case 0x470ba4u: goto label_470ba4;
        case 0x470ba8u: goto label_470ba8;
        case 0x470bacu: goto label_470bac;
        case 0x470bb0u: goto label_470bb0;
        case 0x470bb4u: goto label_470bb4;
        case 0x470bb8u: goto label_470bb8;
        case 0x470bbcu: goto label_470bbc;
        case 0x470bc0u: goto label_470bc0;
        case 0x470bc4u: goto label_470bc4;
        case 0x470bc8u: goto label_470bc8;
        case 0x470bccu: goto label_470bcc;
        case 0x470bd0u: goto label_470bd0;
        case 0x470bd4u: goto label_470bd4;
        case 0x470bd8u: goto label_470bd8;
        case 0x470bdcu: goto label_470bdc;
        case 0x470be0u: goto label_470be0;
        case 0x470be4u: goto label_470be4;
        case 0x470be8u: goto label_470be8;
        case 0x470becu: goto label_470bec;
        case 0x470bf0u: goto label_470bf0;
        case 0x470bf4u: goto label_470bf4;
        case 0x470bf8u: goto label_470bf8;
        case 0x470bfcu: goto label_470bfc;
        case 0x470c00u: goto label_470c00;
        case 0x470c04u: goto label_470c04;
        case 0x470c08u: goto label_470c08;
        case 0x470c0cu: goto label_470c0c;
        case 0x470c10u: goto label_470c10;
        case 0x470c14u: goto label_470c14;
        case 0x470c18u: goto label_470c18;
        case 0x470c1cu: goto label_470c1c;
        case 0x470c20u: goto label_470c20;
        case 0x470c24u: goto label_470c24;
        case 0x470c28u: goto label_470c28;
        case 0x470c2cu: goto label_470c2c;
        case 0x470c30u: goto label_470c30;
        case 0x470c34u: goto label_470c34;
        case 0x470c38u: goto label_470c38;
        case 0x470c3cu: goto label_470c3c;
        case 0x470c40u: goto label_470c40;
        case 0x470c44u: goto label_470c44;
        case 0x470c48u: goto label_470c48;
        case 0x470c4cu: goto label_470c4c;
        case 0x470c50u: goto label_470c50;
        case 0x470c54u: goto label_470c54;
        case 0x470c58u: goto label_470c58;
        case 0x470c5cu: goto label_470c5c;
        case 0x470c60u: goto label_470c60;
        case 0x470c64u: goto label_470c64;
        case 0x470c68u: goto label_470c68;
        case 0x470c6cu: goto label_470c6c;
        case 0x470c70u: goto label_470c70;
        case 0x470c74u: goto label_470c74;
        case 0x470c78u: goto label_470c78;
        case 0x470c7cu: goto label_470c7c;
        case 0x470c80u: goto label_470c80;
        case 0x470c84u: goto label_470c84;
        case 0x470c88u: goto label_470c88;
        case 0x470c8cu: goto label_470c8c;
        case 0x470c90u: goto label_470c90;
        case 0x470c94u: goto label_470c94;
        case 0x470c98u: goto label_470c98;
        case 0x470c9cu: goto label_470c9c;
        case 0x470ca0u: goto label_470ca0;
        case 0x470ca4u: goto label_470ca4;
        case 0x470ca8u: goto label_470ca8;
        case 0x470cacu: goto label_470cac;
        case 0x470cb0u: goto label_470cb0;
        case 0x470cb4u: goto label_470cb4;
        case 0x470cb8u: goto label_470cb8;
        case 0x470cbcu: goto label_470cbc;
        case 0x470cc0u: goto label_470cc0;
        case 0x470cc4u: goto label_470cc4;
        case 0x470cc8u: goto label_470cc8;
        case 0x470cccu: goto label_470ccc;
        case 0x470cd0u: goto label_470cd0;
        case 0x470cd4u: goto label_470cd4;
        case 0x470cd8u: goto label_470cd8;
        case 0x470cdcu: goto label_470cdc;
        case 0x470ce0u: goto label_470ce0;
        case 0x470ce4u: goto label_470ce4;
        case 0x470ce8u: goto label_470ce8;
        case 0x470cecu: goto label_470cec;
        case 0x470cf0u: goto label_470cf0;
        case 0x470cf4u: goto label_470cf4;
        case 0x470cf8u: goto label_470cf8;
        case 0x470cfcu: goto label_470cfc;
        case 0x470d00u: goto label_470d00;
        case 0x470d04u: goto label_470d04;
        case 0x470d08u: goto label_470d08;
        case 0x470d0cu: goto label_470d0c;
        case 0x470d10u: goto label_470d10;
        case 0x470d14u: goto label_470d14;
        case 0x470d18u: goto label_470d18;
        case 0x470d1cu: goto label_470d1c;
        case 0x470d20u: goto label_470d20;
        case 0x470d24u: goto label_470d24;
        case 0x470d28u: goto label_470d28;
        case 0x470d2cu: goto label_470d2c;
        case 0x470d30u: goto label_470d30;
        case 0x470d34u: goto label_470d34;
        case 0x470d38u: goto label_470d38;
        case 0x470d3cu: goto label_470d3c;
        case 0x470d40u: goto label_470d40;
        case 0x470d44u: goto label_470d44;
        case 0x470d48u: goto label_470d48;
        case 0x470d4cu: goto label_470d4c;
        case 0x470d50u: goto label_470d50;
        case 0x470d54u: goto label_470d54;
        case 0x470d58u: goto label_470d58;
        case 0x470d5cu: goto label_470d5c;
        case 0x470d60u: goto label_470d60;
        case 0x470d64u: goto label_470d64;
        case 0x470d68u: goto label_470d68;
        case 0x470d6cu: goto label_470d6c;
        case 0x470d70u: goto label_470d70;
        case 0x470d74u: goto label_470d74;
        case 0x470d78u: goto label_470d78;
        case 0x470d7cu: goto label_470d7c;
        case 0x470d80u: goto label_470d80;
        case 0x470d84u: goto label_470d84;
        case 0x470d88u: goto label_470d88;
        case 0x470d8cu: goto label_470d8c;
        case 0x470d90u: goto label_470d90;
        case 0x470d94u: goto label_470d94;
        case 0x470d98u: goto label_470d98;
        case 0x470d9cu: goto label_470d9c;
        case 0x470da0u: goto label_470da0;
        case 0x470da4u: goto label_470da4;
        case 0x470da8u: goto label_470da8;
        case 0x470dacu: goto label_470dac;
        case 0x470db0u: goto label_470db0;
        case 0x470db4u: goto label_470db4;
        case 0x470db8u: goto label_470db8;
        case 0x470dbcu: goto label_470dbc;
        default: break;
    }

    ctx->pc = 0x470980u;

label_470980:
    // 0x470980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x470980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_470984:
    // 0x470984: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x470984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_470988:
    // 0x470988: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x470988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_47098c:
    // 0x47098c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x47098cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_470990:
    // 0x470990: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x470990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_470994:
    // 0x470994: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x470994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_470998:
    // 0x470998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x470998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47099c:
    // 0x47099c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x47099cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4709a0:
    // 0x4709a0: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x4709a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_4709a4:
    // 0x4709a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4709a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4709a8:
    // 0x4709a8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x4709a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4709ac:
    // 0x4709ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4709acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4709b0:
    // 0x4709b0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x4709b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4709b4:
    // 0x4709b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4709b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4709b8:
    // 0x4709b8: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x4709b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4709bc:
    // 0x4709bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4709bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4709c0:
    // 0x4709c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4709c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4709c4:
    // 0x4709c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4709c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4709c8:
    // 0x4709c8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x4709c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4709cc:
    // 0x4709cc: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x4709ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_4709d0:
    // 0x4709d0: 0x94630072  lhu         $v1, 0x72($v1)
    ctx->pc = 0x4709d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 114)));
label_4709d4:
    // 0x4709d4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x4709d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_4709d8:
    // 0x4709d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4709dc:
    if (ctx->pc == 0x4709DCu) {
        ctx->pc = 0x4709DCu;
            // 0x4709dc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4709E0u;
        goto label_4709e0;
    }
    ctx->pc = 0x4709D8u;
    {
        const bool branch_taken_0x4709d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4709DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4709D8u;
            // 0x4709dc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4709d8) {
            ctx->pc = 0x4709E8u;
            goto label_4709e8;
        }
    }
    ctx->pc = 0x4709E0u;
label_4709e0:
    // 0x4709e0: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_4709e4:
    if (ctx->pc == 0x4709E4u) {
        ctx->pc = 0x4709E4u;
            // 0x4709e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x4709E8u;
        goto label_4709e8;
    }
    ctx->pc = 0x4709E0u;
    {
        const bool branch_taken_0x4709e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4709E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4709E0u;
            // 0x4709e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4709e0) {
            ctx->pc = 0x470DA4u;
            goto label_470da4;
        }
    }
    ctx->pc = 0x4709E8u;
label_4709e8:
    // 0x4709e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4709e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4709ec:
    // 0x4709ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4709ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4709f0:
    // 0x4709f0: 0x8c633e30  lw          $v1, 0x3E30($v1)
    ctx->pc = 0x4709f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_4709f4:
    // 0x4709f4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_4709f8:
    if (ctx->pc == 0x4709F8u) {
        ctx->pc = 0x4709FCu;
        goto label_4709fc;
    }
    ctx->pc = 0x4709F4u;
    {
        const bool branch_taken_0x4709f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4709f4) {
            ctx->pc = 0x470A04u;
            goto label_470a04;
        }
    }
    ctx->pc = 0x4709FCu;
label_4709fc:
    // 0x4709fc: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_470a00:
    if (ctx->pc == 0x470A00u) {
        ctx->pc = 0x470A04u;
        goto label_470a04;
    }
    ctx->pc = 0x4709FCu;
    {
        const bool branch_taken_0x4709fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4709fc) {
            ctx->pc = 0x470DA0u;
            goto label_470da0;
        }
    }
    ctx->pc = 0x470A04u;
label_470a04:
    // 0x470a04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x470a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_470a08:
    // 0x470a08: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x470a08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_470a0c:
    // 0x470a0c: 0x24639764  addiu       $v1, $v1, -0x689C
    ctx->pc = 0x470a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940516));
label_470a10:
    // 0x470a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x470a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_470a14:
    // 0x470a14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x470a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_470a18:
    // 0x470a18: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x470a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_470a1c:
    // 0x470a1c: 0x506000e0  beql        $v1, $zero, . + 4 + (0xE0 << 2)
label_470a20:
    if (ctx->pc == 0x470A20u) {
        ctx->pc = 0x470A20u;
            // 0x470a20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470A24u;
        goto label_470a24;
    }
    ctx->pc = 0x470A1Cu;
    {
        const bool branch_taken_0x470a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x470a1c) {
            ctx->pc = 0x470A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470A1Cu;
            // 0x470a20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x470DA0u;
            goto label_470da0;
        }
    }
    ctx->pc = 0x470A24u;
label_470a24:
    // 0x470a24: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x470a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_470a28:
    // 0x470a28: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x470a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_470a2c:
    // 0x470a2c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x470a2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_470a30:
    // 0x470a30: 0x102000da  beqz        $at, . + 4 + (0xDA << 2)
label_470a34:
    if (ctx->pc == 0x470A34u) {
        ctx->pc = 0x470A38u;
        goto label_470a38;
    }
    ctx->pc = 0x470A30u;
    {
        const bool branch_taken_0x470a30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x470a30) {
            ctx->pc = 0x470D9Cu;
            goto label_470d9c;
        }
    }
    ctx->pc = 0x470A38u;
label_470a38:
    // 0x470a38: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x470a38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_470a3c:
    // 0x470a3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x470a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470a40:
    // 0x470a40: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x470a40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_470a44:
    // 0x470a44: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x470a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_470a48:
    // 0x470a48: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x470a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_470a4c:
    // 0x470a4c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_470a50:
    if (ctx->pc == 0x470A50u) {
        ctx->pc = 0x470A50u;
            // 0x470a50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470A54u;
        goto label_470a54;
    }
    ctx->pc = 0x470A4Cu;
    {
        const bool branch_taken_0x470a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x470A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470A4Cu;
            // 0x470a50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470a4c) {
            ctx->pc = 0x470A68u;
            goto label_470a68;
        }
    }
    ctx->pc = 0x470A54u;
label_470a54:
    // 0x470a54: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x470a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_470a58:
    // 0x470a58: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x470a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
label_470a5c:
    // 0x470a5c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x470a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_470a60:
    // 0x470a60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x470a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_470a64:
    // 0x470a64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x470a64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_470a68:
    // 0x470a68: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x470a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_470a6c:
    // 0x470a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x470a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470a70:
    // 0x470a70: 0x24e70820  addiu       $a3, $a3, 0x820
    ctx->pc = 0x470a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
label_470a74:
    // 0x470a74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x470a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_470a78:
    // 0x470a78: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x470a78u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_470a7c:
    // 0x470a7c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x470a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_470a80:
    // 0x470a80: 0x90c20070  lbu         $v0, 0x70($a2)
    ctx->pc = 0x470a80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
label_470a84:
    // 0x470a84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_470a88:
    if (ctx->pc == 0x470A88u) {
        ctx->pc = 0x470A8Cu;
        goto label_470a8c;
    }
    ctx->pc = 0x470A84u;
    {
        const bool branch_taken_0x470a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470a84) {
            ctx->pc = 0x470AC8u;
            goto label_470ac8;
        }
    }
    ctx->pc = 0x470A8Cu;
label_470a8c:
    // 0x470a8c: 0x1267000e  beq         $s3, $a3, . + 4 + (0xE << 2)
label_470a90:
    if (ctx->pc == 0x470A90u) {
        ctx->pc = 0x470A94u;
        goto label_470a94;
    }
    ctx->pc = 0x470A8Cu;
    {
        const bool branch_taken_0x470a8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x470a8c) {
            ctx->pc = 0x470AC8u;
            goto label_470ac8;
        }
    }
    ctx->pc = 0x470A94u;
label_470a94:
    // 0x470a94: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x470a94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_470a98:
    // 0x470a98: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x470a98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_470a9c:
    // 0x470a9c: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x470a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_470aa0:
    // 0x470aa0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x470aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_470aa4:
    // 0x470aa4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
label_470aa8:
    if (ctx->pc == 0x470AA8u) {
        ctx->pc = 0x470AACu;
        goto label_470aac;
    }
    ctx->pc = 0x470AA4u;
    {
        const bool branch_taken_0x470aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x470aa4) {
            ctx->pc = 0x470AB0u;
            goto label_470ab0;
        }
    }
    ctx->pc = 0x470AACu;
label_470aac:
    // 0x470aac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x470aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_470ab0:
    // 0x470ab0: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_470ab4:
    if (ctx->pc == 0x470AB4u) {
        ctx->pc = 0x470AB8u;
        goto label_470ab8;
    }
    ctx->pc = 0x470AB0u;
    {
        const bool branch_taken_0x470ab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x470ab0) {
            ctx->pc = 0x470AC8u;
            goto label_470ac8;
        }
    }
    ctx->pc = 0x470AB8u;
label_470ab8:
    // 0x470ab8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_470abc:
    if (ctx->pc == 0x470ABCu) {
        ctx->pc = 0x470AC0u;
        goto label_470ac0;
    }
    ctx->pc = 0x470AB8u;
    {
        const bool branch_taken_0x470ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470ab8) {
            ctx->pc = 0x470AC8u;
            goto label_470ac8;
        }
    }
    ctx->pc = 0x470AC0u;
label_470ac0:
    // 0x470ac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x470ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_470ac4:
    // 0x470ac4: 0x0  nop
    ctx->pc = 0x470ac4u;
    // NOP
label_470ac8:
    // 0x470ac8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x470ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_470acc:
    // 0x470acc: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x470accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_470ad0:
    // 0x470ad0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x470ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_470ad4:
    // 0x470ad4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_470ad8:
    if (ctx->pc == 0x470AD8u) {
        ctx->pc = 0x470AD8u;
            // 0x470ad8: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->pc = 0x470ADCu;
        goto label_470adc;
    }
    ctx->pc = 0x470AD4u;
    {
        const bool branch_taken_0x470ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470AD4u;
            // 0x470ad8: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470ad4) {
            ctx->pc = 0x470A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470a80;
        }
    }
    ctx->pc = 0x470ADCu;
label_470adc:
    // 0x470adc: 0x56400035  bnel        $s2, $zero, . + 4 + (0x35 << 2)
label_470ae0:
    if (ctx->pc == 0x470AE0u) {
        ctx->pc = 0x470AE0u;
            // 0x470ae0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x470AE4u;
        goto label_470ae4;
    }
    ctx->pc = 0x470ADCu;
    {
        const bool branch_taken_0x470adc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x470adc) {
            ctx->pc = 0x470AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470ADCu;
            // 0x470ae0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x470BB4u;
            goto label_470bb4;
        }
    }
    ctx->pc = 0x470AE4u;
label_470ae4:
    // 0x470ae4: 0xc11bb74  jal         func_46EDD0
label_470ae8:
    if (ctx->pc == 0x470AE8u) {
        ctx->pc = 0x470AECu;
        goto label_470aec;
    }
    ctx->pc = 0x470AE4u;
    SET_GPR_U32(ctx, 31, 0x470AECu);
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470AECu; }
        if (ctx->pc != 0x470AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470AECu; }
        if (ctx->pc != 0x470AECu) { return; }
    }
    ctx->pc = 0x470AECu;
label_470aec:
    // 0x470aec: 0xc11bb70  jal         func_46EDC0
label_470af0:
    if (ctx->pc == 0x470AF0u) {
        ctx->pc = 0x470AF0u;
            // 0x470af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470AF4u;
        goto label_470af4;
    }
    ctx->pc = 0x470AECu;
    SET_GPR_U32(ctx, 31, 0x470AF4u);
    ctx->pc = 0x470AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470AECu;
            // 0x470af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470AF4u; }
        if (ctx->pc != 0x470AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470AF4u; }
        if (ctx->pc != 0x470AF4u) { return; }
    }
    ctx->pc = 0x470AF4u;
label_470af4:
    // 0x470af4: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x470af4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_470af8:
    // 0x470af8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x470af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470afc:
    // 0x470afc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x470afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_470b00:
    // 0x470b00: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x470b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
label_470b04:
    // 0x470b04: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x470b04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_470b08:
    // 0x470b08: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_470b0c:
    if (ctx->pc == 0x470B0Cu) {
        ctx->pc = 0x470B0Cu;
            // 0x470b0c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x470B10u;
        goto label_470b10;
    }
    ctx->pc = 0x470B08u;
    {
        const bool branch_taken_0x470b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x470B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470B08u;
            // 0x470b0c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b08) {
            ctx->pc = 0x470BA4u;
            goto label_470ba4;
        }
    }
    ctx->pc = 0x470B10u;
label_470b10:
    // 0x470b10: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x470b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_470b14:
    // 0x470b14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x470b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_470b18:
    // 0x470b18: 0x2484f050  addiu       $a0, $a0, -0xFB0
    ctx->pc = 0x470b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963280));
label_470b1c:
    // 0x470b1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x470b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_470b20:
    // 0x470b20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x470b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_470b24:
    // 0x470b24: 0x600008  jr          $v1
label_470b28:
    if (ctx->pc == 0x470B28u) {
        ctx->pc = 0x470B2Cu;
        goto label_470b2c;
    }
    ctx->pc = 0x470B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x470B2Cu: goto label_470b2c;
            case 0x470B40u: goto label_470b40;
            case 0x470B50u: goto label_470b50;
            case 0x470B60u: goto label_470b60;
            case 0x470B70u: goto label_470b70;
            case 0x470B80u: goto label_470b80;
            case 0x470B94u: goto label_470b94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x470B2Cu;
label_470b2c:
    // 0x470b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x470b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470b30:
    // 0x470b30: 0xc11c418  jal         func_471060
label_470b34:
    if (ctx->pc == 0x470B34u) {
        ctx->pc = 0x470B34u;
            // 0x470b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470B38u;
        goto label_470b38;
    }
    ctx->pc = 0x470B30u;
    SET_GPR_U32(ctx, 31, 0x470B38u);
    ctx->pc = 0x470B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470B30u;
            // 0x470b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B38u; }
        if (ctx->pc != 0x470B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B38u; }
        if (ctx->pc != 0x470B38u) { return; }
    }
    ctx->pc = 0x470B38u;
label_470b38:
    // 0x470b38: 0x1000001a  b           . + 4 + (0x1A << 2)
label_470b3c:
    if (ctx->pc == 0x470B3Cu) {
        ctx->pc = 0x470B3Cu;
            // 0x470b3c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x470B40u;
        goto label_470b40;
    }
    ctx->pc = 0x470B38u;
    {
        const bool branch_taken_0x470b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470B38u;
            // 0x470b3c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b38) {
            ctx->pc = 0x470BA4u;
            goto label_470ba4;
        }
    }
    ctx->pc = 0x470B40u;
label_470b40:
    // 0x470b40: 0xc11c418  jal         func_471060
label_470b44:
    if (ctx->pc == 0x470B44u) {
        ctx->pc = 0x470B44u;
            // 0x470b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470B48u;
        goto label_470b48;
    }
    ctx->pc = 0x470B40u;
    SET_GPR_U32(ctx, 31, 0x470B48u);
    ctx->pc = 0x470B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470B40u;
            // 0x470b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B48u; }
        if (ctx->pc != 0x470B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B48u; }
        if (ctx->pc != 0x470B48u) { return; }
    }
    ctx->pc = 0x470B48u;
label_470b48:
    // 0x470b48: 0x10000016  b           . + 4 + (0x16 << 2)
label_470b4c:
    if (ctx->pc == 0x470B4Cu) {
        ctx->pc = 0x470B4Cu;
            // 0x470b4c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x470B50u;
        goto label_470b50;
    }
    ctx->pc = 0x470B48u;
    {
        const bool branch_taken_0x470b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470B48u;
            // 0x470b4c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b48) {
            ctx->pc = 0x470BA4u;
            goto label_470ba4;
        }
    }
    ctx->pc = 0x470B50u;
label_470b50:
    // 0x470b50: 0xc11c418  jal         func_471060
label_470b54:
    if (ctx->pc == 0x470B54u) {
        ctx->pc = 0x470B54u;
            // 0x470b54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470B58u;
        goto label_470b58;
    }
    ctx->pc = 0x470B50u;
    SET_GPR_U32(ctx, 31, 0x470B58u);
    ctx->pc = 0x470B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470B50u;
            // 0x470b54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B58u; }
        if (ctx->pc != 0x470B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B58u; }
        if (ctx->pc != 0x470B58u) { return; }
    }
    ctx->pc = 0x470B58u;
label_470b58:
    // 0x470b58: 0x10000012  b           . + 4 + (0x12 << 2)
label_470b5c:
    if (ctx->pc == 0x470B5Cu) {
        ctx->pc = 0x470B5Cu;
            // 0x470b5c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x470B60u;
        goto label_470b60;
    }
    ctx->pc = 0x470B58u;
    {
        const bool branch_taken_0x470b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470B58u;
            // 0x470b5c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b58) {
            ctx->pc = 0x470BA4u;
            goto label_470ba4;
        }
    }
    ctx->pc = 0x470B60u;
label_470b60:
    // 0x470b60: 0xc11c418  jal         func_471060
label_470b64:
    if (ctx->pc == 0x470B64u) {
        ctx->pc = 0x470B64u;
            // 0x470b64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470B68u;
        goto label_470b68;
    }
    ctx->pc = 0x470B60u;
    SET_GPR_U32(ctx, 31, 0x470B68u);
    ctx->pc = 0x470B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470B60u;
            // 0x470b64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B68u; }
        if (ctx->pc != 0x470B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B68u; }
        if (ctx->pc != 0x470B68u) { return; }
    }
    ctx->pc = 0x470B68u;
label_470b68:
    // 0x470b68: 0x1000000e  b           . + 4 + (0xE << 2)
label_470b6c:
    if (ctx->pc == 0x470B6Cu) {
        ctx->pc = 0x470B6Cu;
            // 0x470b6c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x470B70u;
        goto label_470b70;
    }
    ctx->pc = 0x470B68u;
    {
        const bool branch_taken_0x470b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470B68u;
            // 0x470b6c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b68) {
            ctx->pc = 0x470BA4u;
            goto label_470ba4;
        }
    }
    ctx->pc = 0x470B70u;
label_470b70:
    // 0x470b70: 0xc11c418  jal         func_471060
label_470b74:
    if (ctx->pc == 0x470B74u) {
        ctx->pc = 0x470B74u;
            // 0x470b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470B78u;
        goto label_470b78;
    }
    ctx->pc = 0x470B70u;
    SET_GPR_U32(ctx, 31, 0x470B78u);
    ctx->pc = 0x470B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470B70u;
            // 0x470b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B78u; }
        if (ctx->pc != 0x470B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B78u; }
        if (ctx->pc != 0x470B78u) { return; }
    }
    ctx->pc = 0x470B78u;
label_470b78:
    // 0x470b78: 0x1000000a  b           . + 4 + (0xA << 2)
label_470b7c:
    if (ctx->pc == 0x470B7Cu) {
        ctx->pc = 0x470B7Cu;
            // 0x470b7c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x470B80u;
        goto label_470b80;
    }
    ctx->pc = 0x470B78u;
    {
        const bool branch_taken_0x470b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470B78u;
            // 0x470b7c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b78) {
            ctx->pc = 0x470BA4u;
            goto label_470ba4;
        }
    }
    ctx->pc = 0x470B80u;
label_470b80:
    // 0x470b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x470b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470b84:
    // 0x470b84: 0xc11c418  jal         func_471060
label_470b88:
    if (ctx->pc == 0x470B88u) {
        ctx->pc = 0x470B88u;
            // 0x470b88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x470B8Cu;
        goto label_470b8c;
    }
    ctx->pc = 0x470B84u;
    SET_GPR_U32(ctx, 31, 0x470B8Cu);
    ctx->pc = 0x470B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470B84u;
            // 0x470b88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B8Cu; }
        if (ctx->pc != 0x470B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470B8Cu; }
        if (ctx->pc != 0x470B8Cu) { return; }
    }
    ctx->pc = 0x470B8Cu;
label_470b8c:
    // 0x470b8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_470b90:
    if (ctx->pc == 0x470B90u) {
        ctx->pc = 0x470B90u;
            // 0x470b90: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x470B94u;
        goto label_470b94;
    }
    ctx->pc = 0x470B8Cu;
    {
        const bool branch_taken_0x470b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470B8Cu;
            // 0x470b90: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470b8c) {
            ctx->pc = 0x470BA4u;
            goto label_470ba4;
        }
    }
    ctx->pc = 0x470B94u;
label_470b94:
    // 0x470b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x470b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470b98:
    // 0x470b98: 0xc11c418  jal         func_471060
label_470b9c:
    if (ctx->pc == 0x470B9Cu) {
        ctx->pc = 0x470B9Cu;
            // 0x470b9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x470BA0u;
        goto label_470ba0;
    }
    ctx->pc = 0x470B98u;
    SET_GPR_U32(ctx, 31, 0x470BA0u);
    ctx->pc = 0x470B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470B98u;
            // 0x470b9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471060u;
    if (runtime->hasFunction(0x471060u)) {
        auto targetFn = runtime->lookupFunction(0x471060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470BA0u; }
        if (ctx->pc != 0x470BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471060_0x471060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470BA0u; }
        if (ctx->pc != 0x470BA0u) { return; }
    }
    ctx->pc = 0x470BA0u;
label_470ba0:
    // 0x470ba0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x470ba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470ba4:
    // 0x470ba4: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
label_470ba8:
    if (ctx->pc == 0x470BA8u) {
        ctx->pc = 0x470BACu;
        goto label_470bac;
    }
    ctx->pc = 0x470BA4u;
    {
        const bool branch_taken_0x470ba4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x470ba4) {
            ctx->pc = 0x470BB0u;
            goto label_470bb0;
        }
    }
    ctx->pc = 0x470BACu;
label_470bac:
    // 0x470bac: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x470bacu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_470bb0:
    // 0x470bb0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x470bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_470bb4:
    // 0x470bb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x470bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_470bb8:
    // 0x470bb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_470bbc:
    if (ctx->pc == 0x470BBCu) {
        ctx->pc = 0x470BC0u;
        goto label_470bc0;
    }
    ctx->pc = 0x470BB8u;
    {
        const bool branch_taken_0x470bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470bb8) {
            ctx->pc = 0x470BECu;
            goto label_470bec;
        }
    }
    ctx->pc = 0x470BC0u;
label_470bc0:
    // 0x470bc0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x470bc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_470bc4:
    // 0x470bc4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x470bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_470bc8:
    // 0x470bc8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x470bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_470bcc:
    // 0x470bcc: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_470bd0:
    if (ctx->pc == 0x470BD0u) {
        ctx->pc = 0x470BD0u;
            // 0x470bd0: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x470BD4u;
        goto label_470bd4;
    }
    ctx->pc = 0x470BCCu;
    {
        const bool branch_taken_0x470bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x470bcc) {
            ctx->pc = 0x470BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470BCCu;
            // 0x470bd0: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x470BECu;
            goto label_470bec;
        }
    }
    ctx->pc = 0x470BD4u;
label_470bd4:
    // 0x470bd4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x470bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_470bd8:
    // 0x470bd8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_470bdc:
    if (ctx->pc == 0x470BDCu) {
        ctx->pc = 0x470BE0u;
        goto label_470be0;
    }
    ctx->pc = 0x470BD8u;
    {
        const bool branch_taken_0x470bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x470bd8) {
            ctx->pc = 0x470BE8u;
            goto label_470be8;
        }
    }
    ctx->pc = 0x470BE0u;
label_470be0:
    // 0x470be0: 0x10000002  b           . + 4 + (0x2 << 2)
label_470be4:
    if (ctx->pc == 0x470BE4u) {
        ctx->pc = 0x470BE8u;
        goto label_470be8;
    }
    ctx->pc = 0x470BE0u;
    {
        const bool branch_taken_0x470be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470be0) {
            ctx->pc = 0x470BECu;
            goto label_470bec;
        }
    }
    ctx->pc = 0x470BE8u;
label_470be8:
    // 0x470be8: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x470be8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_470bec:
    // 0x470bec: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
label_470bf0:
    if (ctx->pc == 0x470BF0u) {
        ctx->pc = 0x470BF4u;
        goto label_470bf4;
    }
    ctx->pc = 0x470BECu;
    {
        const bool branch_taken_0x470bec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x470bec) {
            ctx->pc = 0x470C30u;
            goto label_470c30;
        }
    }
    ctx->pc = 0x470BF4u;
label_470bf4:
    // 0x470bf4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x470bf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_470bf8:
    // 0x470bf8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x470bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_470bfc:
    // 0x470bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x470bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470c00:
    // 0x470c00: 0x2484e990  addiu       $a0, $a0, -0x1670
    ctx->pc = 0x470c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_470c04:
    // 0x470c04: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x470c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_470c08:
    // 0x470c08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x470c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_470c0c:
    // 0x470c0c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_470c10:
    if (ctx->pc == 0x470C10u) {
        ctx->pc = 0x470C10u;
            // 0x470c10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x470C14u;
        goto label_470c14;
    }
    ctx->pc = 0x470C0Cu;
    {
        const bool branch_taken_0x470c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x470c0c) {
            ctx->pc = 0x470C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470C0Cu;
            // 0x470c10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x470C1Cu;
            goto label_470c1c;
        }
    }
    ctx->pc = 0x470C14u;
label_470c14:
    // 0x470c14: 0x1000003b  b           . + 4 + (0x3B << 2)
label_470c18:
    if (ctx->pc == 0x470C18u) {
        ctx->pc = 0x470C18u;
            // 0x470c18: 0xa2850001  sb          $a1, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x470C1Cu;
        goto label_470c1c;
    }
    ctx->pc = 0x470C14u;
    {
        const bool branch_taken_0x470c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470C14u;
            // 0x470c18: 0xa2850001  sb          $a1, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470c14) {
            ctx->pc = 0x470D04u;
            goto label_470d04;
        }
    }
    ctx->pc = 0x470C1Cu;
label_470c1c:
    // 0x470c1c: 0x28a20013  slti        $v0, $a1, 0x13
    ctx->pc = 0x470c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)19) ? 1 : 0);
label_470c20:
    // 0x470c20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_470c24:
    if (ctx->pc == 0x470C24u) {
        ctx->pc = 0x470C24u;
            // 0x470c24: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x470C28u;
        goto label_470c28;
    }
    ctx->pc = 0x470C20u;
    {
        const bool branch_taken_0x470c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470C20u;
            // 0x470c24: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470c20) {
            ctx->pc = 0x470C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470c08;
        }
    }
    ctx->pc = 0x470C28u;
label_470c28:
    // 0x470c28: 0x10000037  b           . + 4 + (0x37 << 2)
label_470c2c:
    if (ctx->pc == 0x470C2Cu) {
        ctx->pc = 0x470C2Cu;
            // 0x470c2c: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x470C30u;
        goto label_470c30;
    }
    ctx->pc = 0x470C28u;
    {
        const bool branch_taken_0x470c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470C28u;
            // 0x470c2c: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470c28) {
            ctx->pc = 0x470D08u;
            goto label_470d08;
        }
    }
    ctx->pc = 0x470C30u;
label_470c30:
    // 0x470c30: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x470c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_470c34:
    // 0x470c34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x470c34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470c38:
    // 0x470c38: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x470c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_470c3c:
    // 0x470c3c: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x470c3cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_470c40:
    // 0x470c40: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x470c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_470c44:
    // 0x470c44: 0x24a50820  addiu       $a1, $a1, 0x820
    ctx->pc = 0x470c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
label_470c48:
    // 0x470c48: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x470c48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_470c4c:
    // 0x470c4c: 0x3164001f  andi        $a0, $t3, 0x1F
    ctx->pc = 0x470c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)31);
label_470c50:
    // 0x470c50: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x470c50u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_470c54:
    // 0x470c54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x470c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470c58:
    // 0x470c58: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x470c58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_470c5c:
    // 0x470c5c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x470c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_470c60:
    // 0x470c60: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x470c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_470c64:
    // 0x470c64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x470c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_470c68:
    // 0x470c68: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x470c68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_470c6c:
    // 0x470c6c: 0xa28b0001  sb          $t3, 0x1($s4)
    ctx->pc = 0x470c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 11));
label_470c70:
    // 0x470c70: 0x91420070  lbu         $v0, 0x70($t2)
    ctx->pc = 0x470c70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 112)));
label_470c74:
    // 0x470c74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_470c78:
    if (ctx->pc == 0x470C78u) {
        ctx->pc = 0x470C7Cu;
        goto label_470c7c;
    }
    ctx->pc = 0x470C74u;
    {
        const bool branch_taken_0x470c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470c74) {
            ctx->pc = 0x470CB8u;
            goto label_470cb8;
        }
    }
    ctx->pc = 0x470C7Cu;
label_470c7c:
    // 0x470c7c: 0x1269000e  beq         $s3, $t1, . + 4 + (0xE << 2)
label_470c80:
    if (ctx->pc == 0x470C80u) {
        ctx->pc = 0x470C84u;
        goto label_470c84;
    }
    ctx->pc = 0x470C7Cu;
    {
        const bool branch_taken_0x470c7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 9));
        if (branch_taken_0x470c7c) {
            ctx->pc = 0x470CB8u;
            goto label_470cb8;
        }
    }
    ctx->pc = 0x470C84u;
label_470c84:
    // 0x470c84: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x470c84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_470c88:
    // 0x470c88: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x470c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_470c8c:
    // 0x470c8c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x470c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_470c90:
    // 0x470c90: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x470c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_470c94:
    // 0x470c94: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
label_470c98:
    if (ctx->pc == 0x470C98u) {
        ctx->pc = 0x470C9Cu;
        goto label_470c9c;
    }
    ctx->pc = 0x470C94u;
    {
        const bool branch_taken_0x470c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x470c94) {
            ctx->pc = 0x470CA0u;
            goto label_470ca0;
        }
    }
    ctx->pc = 0x470C9Cu;
label_470c9c:
    // 0x470c9c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x470c9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470ca0:
    // 0x470ca0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_470ca4:
    if (ctx->pc == 0x470CA4u) {
        ctx->pc = 0x470CA8u;
        goto label_470ca8;
    }
    ctx->pc = 0x470CA0u;
    {
        const bool branch_taken_0x470ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x470ca0) {
            ctx->pc = 0x470CB8u;
            goto label_470cb8;
        }
    }
    ctx->pc = 0x470CA8u;
label_470ca8:
    // 0x470ca8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_470cac:
    if (ctx->pc == 0x470CACu) {
        ctx->pc = 0x470CB0u;
        goto label_470cb0;
    }
    ctx->pc = 0x470CA8u;
    {
        const bool branch_taken_0x470ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470ca8) {
            ctx->pc = 0x470CB8u;
            goto label_470cb8;
        }
    }
    ctx->pc = 0x470CB0u;
label_470cb0:
    // 0x470cb0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x470cb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470cb4:
    // 0x470cb4: 0x0  nop
    ctx->pc = 0x470cb4u;
    // NOP
label_470cb8:
    // 0x470cb8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x470cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_470cbc:
    // 0x470cbc: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x470cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_470cc0:
    // 0x470cc0: 0x254a005c  addiu       $t2, $t2, 0x5C
    ctx->pc = 0x470cc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
label_470cc4:
    // 0x470cc4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_470cc8:
    if (ctx->pc == 0x470CC8u) {
        ctx->pc = 0x470CC8u;
            // 0x470cc8: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x470CCCu;
        goto label_470ccc;
    }
    ctx->pc = 0x470CC4u;
    {
        const bool branch_taken_0x470cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470CC4u;
            // 0x470cc8: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470cc4) {
            ctx->pc = 0x470C70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470c70;
        }
    }
    ctx->pc = 0x470CCCu;
label_470ccc:
    // 0x470ccc: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
label_470cd0:
    if (ctx->pc == 0x470CD0u) {
        ctx->pc = 0x470CD4u;
        goto label_470cd4;
    }
    ctx->pc = 0x470CCCu;
    {
        const bool branch_taken_0x470ccc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x470ccc) {
            ctx->pc = 0x470CE8u;
            goto label_470ce8;
        }
    }
    ctx->pc = 0x470CD4u;
label_470cd4:
    // 0x470cd4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x470cd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_470cd8:
    // 0x470cd8: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x470cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
label_470cdc:
    // 0x470cdc: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_470ce0:
    if (ctx->pc == 0x470CE0u) {
        ctx->pc = 0x470CE0u;
            // 0x470ce0: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x470CE4u;
        goto label_470ce4;
    }
    ctx->pc = 0x470CDCu;
    {
        const bool branch_taken_0x470cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470cdc) {
            ctx->pc = 0x470CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470CDCu;
            // 0x470ce0: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x470C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470c4c;
        }
    }
    ctx->pc = 0x470CE4u;
label_470ce4:
    // 0x470ce4: 0x0  nop
    ctx->pc = 0x470ce4u;
    // NOP
label_470ce8:
    // 0x470ce8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x470ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_470cec:
    // 0x470cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x470cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_470cf0:
    // 0x470cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x470cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470cf4:
    // 0x470cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x470cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470cf8:
    // 0x470cf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x470cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470cfc:
    // 0x470cfc: 0xc11c370  jal         func_470DC0
label_470d00:
    if (ctx->pc == 0x470D00u) {
        ctx->pc = 0x470D00u;
            // 0x470d00: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x470D04u;
        goto label_470d04;
    }
    ctx->pc = 0x470CFCu;
    SET_GPR_U32(ctx, 31, 0x470D04u);
    ctx->pc = 0x470D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470CFCu;
            // 0x470d00: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x470DC0u;
    if (runtime->hasFunction(0x470DC0u)) {
        auto targetFn = runtime->lookupFunction(0x470DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470D04u; }
        if (ctx->pc != 0x470D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00470DC0_0x470dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470D04u; }
        if (ctx->pc != 0x470D04u) { return; }
    }
    ctx->pc = 0x470D04u;
label_470d04:
    // 0x470d04: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x470d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_470d08:
    // 0x470d08: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x470d08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_470d0c:
    // 0x470d0c: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x470d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_470d10:
    // 0x470d10: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x470d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_470d14:
    // 0x470d14: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x470d14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_470d18:
    // 0x470d18: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x470d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_470d1c:
    // 0x470d1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x470d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_470d20:
    // 0x470d20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x470d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470d24:
    // 0x470d24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x470d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_470d28:
    // 0x470d28: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x470d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_470d2c:
    // 0x470d2c: 0x320f809  jalr        $t9
label_470d30:
    if (ctx->pc == 0x470D30u) {
        ctx->pc = 0x470D30u;
            // 0x470d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470D34u;
        goto label_470d34;
    }
    ctx->pc = 0x470D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x470D34u);
        ctx->pc = 0x470D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470D2Cu;
            // 0x470d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x470D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x470D34u; }
            if (ctx->pc != 0x470D34u) { return; }
        }
        }
    }
    ctx->pc = 0x470D34u;
label_470d34:
    // 0x470d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x470d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470d38:
    // 0x470d38: 0xa262007c  sb          $v0, 0x7C($s3)
    ctx->pc = 0x470d38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 124), (uint8_t)GPR_U32(ctx, 2));
label_470d3c:
    // 0x470d3c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x470d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_470d40:
    // 0x470d40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x470d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_470d44:
    // 0x470d44: 0xc123848  jal         func_48E120
label_470d48:
    if (ctx->pc == 0x470D48u) {
        ctx->pc = 0x470D48u;
            // 0x470d48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x470D4Cu;
        goto label_470d4c;
    }
    ctx->pc = 0x470D44u;
    SET_GPR_U32(ctx, 31, 0x470D4Cu);
    ctx->pc = 0x470D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470D44u;
            // 0x470d48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470D4Cu; }
        if (ctx->pc != 0x470D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470D4Cu; }
        if (ctx->pc != 0x470D4Cu) { return; }
    }
    ctx->pc = 0x470D4Cu;
label_470d4c:
    // 0x470d4c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x470d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_470d50:
    // 0x470d50: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x470d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_470d54:
    // 0x470d54: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x470d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_470d58:
    // 0x470d58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x470d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_470d5c:
    // 0x470d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x470d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470d60:
    // 0x470d60: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x470d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_470d64:
    // 0x470d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x470d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470d68:
    // 0x470d68: 0xa4460046  sh          $a2, 0x46($v0)
    ctx->pc = 0x470d68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 6));
label_470d6c:
    // 0x470d6c: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x470d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_470d70:
    // 0x470d70: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x470d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_470d74:
    // 0x470d74: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x470d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_470d78:
    // 0x470d78: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x470d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_470d7c:
    // 0x470d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x470d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470d80:
    // 0x470d80: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x470d80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_470d84:
    // 0x470d84: 0xa6800004  sh          $zero, 0x4($s4)
    ctx->pc = 0x470d84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 0));
label_470d88:
    // 0x470d88: 0xa6830006  sh          $v1, 0x6($s4)
    ctx->pc = 0x470d88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
label_470d8c:
    // 0x470d8c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x470d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_470d90:
    // 0x470d90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x470d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_470d94:
    // 0x470d94: 0xc073234  jal         func_1CC8D0
label_470d98:
    if (ctx->pc == 0x470D98u) {
        ctx->pc = 0x470D98u;
            // 0x470d98: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x470D9Cu;
        goto label_470d9c;
    }
    ctx->pc = 0x470D94u;
    SET_GPR_U32(ctx, 31, 0x470D9Cu);
    ctx->pc = 0x470D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470D94u;
            // 0x470d98: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470D9Cu; }
        if (ctx->pc != 0x470D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470D9Cu; }
        if (ctx->pc != 0x470D9Cu) { return; }
    }
    ctx->pc = 0x470D9Cu;
label_470d9c:
    // 0x470d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x470d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_470da0:
    // 0x470da0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x470da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_470da4:
    // 0x470da4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x470da4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_470da8:
    // 0x470da8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x470da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_470dac:
    // 0x470dac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x470dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_470db0:
    // 0x470db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x470db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_470db4:
    // 0x470db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x470db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_470db8:
    // 0x470db8: 0x3e00008  jr          $ra
label_470dbc:
    if (ctx->pc == 0x470DBCu) {
        ctx->pc = 0x470DBCu;
            // 0x470dbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x470DC0u;
        goto label_fallthrough_0x470db8;
    }
    ctx->pc = 0x470DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x470DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470DB8u;
            // 0x470dbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x470db8:
    ctx->pc = 0x470DC0u;
}
