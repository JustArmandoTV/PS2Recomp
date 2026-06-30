#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1870
// Address: 0x1e1870 - 0x1e1ba0
void sub_001E1870_0x1e1870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1870_0x1e1870");
#endif

    switch (ctx->pc) {
        case 0x1e1870u: goto label_1e1870;
        case 0x1e1874u: goto label_1e1874;
        case 0x1e1878u: goto label_1e1878;
        case 0x1e187cu: goto label_1e187c;
        case 0x1e1880u: goto label_1e1880;
        case 0x1e1884u: goto label_1e1884;
        case 0x1e1888u: goto label_1e1888;
        case 0x1e188cu: goto label_1e188c;
        case 0x1e1890u: goto label_1e1890;
        case 0x1e1894u: goto label_1e1894;
        case 0x1e1898u: goto label_1e1898;
        case 0x1e189cu: goto label_1e189c;
        case 0x1e18a0u: goto label_1e18a0;
        case 0x1e18a4u: goto label_1e18a4;
        case 0x1e18a8u: goto label_1e18a8;
        case 0x1e18acu: goto label_1e18ac;
        case 0x1e18b0u: goto label_1e18b0;
        case 0x1e18b4u: goto label_1e18b4;
        case 0x1e18b8u: goto label_1e18b8;
        case 0x1e18bcu: goto label_1e18bc;
        case 0x1e18c0u: goto label_1e18c0;
        case 0x1e18c4u: goto label_1e18c4;
        case 0x1e18c8u: goto label_1e18c8;
        case 0x1e18ccu: goto label_1e18cc;
        case 0x1e18d0u: goto label_1e18d0;
        case 0x1e18d4u: goto label_1e18d4;
        case 0x1e18d8u: goto label_1e18d8;
        case 0x1e18dcu: goto label_1e18dc;
        case 0x1e18e0u: goto label_1e18e0;
        case 0x1e18e4u: goto label_1e18e4;
        case 0x1e18e8u: goto label_1e18e8;
        case 0x1e18ecu: goto label_1e18ec;
        case 0x1e18f0u: goto label_1e18f0;
        case 0x1e18f4u: goto label_1e18f4;
        case 0x1e18f8u: goto label_1e18f8;
        case 0x1e18fcu: goto label_1e18fc;
        case 0x1e1900u: goto label_1e1900;
        case 0x1e1904u: goto label_1e1904;
        case 0x1e1908u: goto label_1e1908;
        case 0x1e190cu: goto label_1e190c;
        case 0x1e1910u: goto label_1e1910;
        case 0x1e1914u: goto label_1e1914;
        case 0x1e1918u: goto label_1e1918;
        case 0x1e191cu: goto label_1e191c;
        case 0x1e1920u: goto label_1e1920;
        case 0x1e1924u: goto label_1e1924;
        case 0x1e1928u: goto label_1e1928;
        case 0x1e192cu: goto label_1e192c;
        case 0x1e1930u: goto label_1e1930;
        case 0x1e1934u: goto label_1e1934;
        case 0x1e1938u: goto label_1e1938;
        case 0x1e193cu: goto label_1e193c;
        case 0x1e1940u: goto label_1e1940;
        case 0x1e1944u: goto label_1e1944;
        case 0x1e1948u: goto label_1e1948;
        case 0x1e194cu: goto label_1e194c;
        case 0x1e1950u: goto label_1e1950;
        case 0x1e1954u: goto label_1e1954;
        case 0x1e1958u: goto label_1e1958;
        case 0x1e195cu: goto label_1e195c;
        case 0x1e1960u: goto label_1e1960;
        case 0x1e1964u: goto label_1e1964;
        case 0x1e1968u: goto label_1e1968;
        case 0x1e196cu: goto label_1e196c;
        case 0x1e1970u: goto label_1e1970;
        case 0x1e1974u: goto label_1e1974;
        case 0x1e1978u: goto label_1e1978;
        case 0x1e197cu: goto label_1e197c;
        case 0x1e1980u: goto label_1e1980;
        case 0x1e1984u: goto label_1e1984;
        case 0x1e1988u: goto label_1e1988;
        case 0x1e198cu: goto label_1e198c;
        case 0x1e1990u: goto label_1e1990;
        case 0x1e1994u: goto label_1e1994;
        case 0x1e1998u: goto label_1e1998;
        case 0x1e199cu: goto label_1e199c;
        case 0x1e19a0u: goto label_1e19a0;
        case 0x1e19a4u: goto label_1e19a4;
        case 0x1e19a8u: goto label_1e19a8;
        case 0x1e19acu: goto label_1e19ac;
        case 0x1e19b0u: goto label_1e19b0;
        case 0x1e19b4u: goto label_1e19b4;
        case 0x1e19b8u: goto label_1e19b8;
        case 0x1e19bcu: goto label_1e19bc;
        case 0x1e19c0u: goto label_1e19c0;
        case 0x1e19c4u: goto label_1e19c4;
        case 0x1e19c8u: goto label_1e19c8;
        case 0x1e19ccu: goto label_1e19cc;
        case 0x1e19d0u: goto label_1e19d0;
        case 0x1e19d4u: goto label_1e19d4;
        case 0x1e19d8u: goto label_1e19d8;
        case 0x1e19dcu: goto label_1e19dc;
        case 0x1e19e0u: goto label_1e19e0;
        case 0x1e19e4u: goto label_1e19e4;
        case 0x1e19e8u: goto label_1e19e8;
        case 0x1e19ecu: goto label_1e19ec;
        case 0x1e19f0u: goto label_1e19f0;
        case 0x1e19f4u: goto label_1e19f4;
        case 0x1e19f8u: goto label_1e19f8;
        case 0x1e19fcu: goto label_1e19fc;
        case 0x1e1a00u: goto label_1e1a00;
        case 0x1e1a04u: goto label_1e1a04;
        case 0x1e1a08u: goto label_1e1a08;
        case 0x1e1a0cu: goto label_1e1a0c;
        case 0x1e1a10u: goto label_1e1a10;
        case 0x1e1a14u: goto label_1e1a14;
        case 0x1e1a18u: goto label_1e1a18;
        case 0x1e1a1cu: goto label_1e1a1c;
        case 0x1e1a20u: goto label_1e1a20;
        case 0x1e1a24u: goto label_1e1a24;
        case 0x1e1a28u: goto label_1e1a28;
        case 0x1e1a2cu: goto label_1e1a2c;
        case 0x1e1a30u: goto label_1e1a30;
        case 0x1e1a34u: goto label_1e1a34;
        case 0x1e1a38u: goto label_1e1a38;
        case 0x1e1a3cu: goto label_1e1a3c;
        case 0x1e1a40u: goto label_1e1a40;
        case 0x1e1a44u: goto label_1e1a44;
        case 0x1e1a48u: goto label_1e1a48;
        case 0x1e1a4cu: goto label_1e1a4c;
        case 0x1e1a50u: goto label_1e1a50;
        case 0x1e1a54u: goto label_1e1a54;
        case 0x1e1a58u: goto label_1e1a58;
        case 0x1e1a5cu: goto label_1e1a5c;
        case 0x1e1a60u: goto label_1e1a60;
        case 0x1e1a64u: goto label_1e1a64;
        case 0x1e1a68u: goto label_1e1a68;
        case 0x1e1a6cu: goto label_1e1a6c;
        case 0x1e1a70u: goto label_1e1a70;
        case 0x1e1a74u: goto label_1e1a74;
        case 0x1e1a78u: goto label_1e1a78;
        case 0x1e1a7cu: goto label_1e1a7c;
        case 0x1e1a80u: goto label_1e1a80;
        case 0x1e1a84u: goto label_1e1a84;
        case 0x1e1a88u: goto label_1e1a88;
        case 0x1e1a8cu: goto label_1e1a8c;
        case 0x1e1a90u: goto label_1e1a90;
        case 0x1e1a94u: goto label_1e1a94;
        case 0x1e1a98u: goto label_1e1a98;
        case 0x1e1a9cu: goto label_1e1a9c;
        case 0x1e1aa0u: goto label_1e1aa0;
        case 0x1e1aa4u: goto label_1e1aa4;
        case 0x1e1aa8u: goto label_1e1aa8;
        case 0x1e1aacu: goto label_1e1aac;
        case 0x1e1ab0u: goto label_1e1ab0;
        case 0x1e1ab4u: goto label_1e1ab4;
        case 0x1e1ab8u: goto label_1e1ab8;
        case 0x1e1abcu: goto label_1e1abc;
        case 0x1e1ac0u: goto label_1e1ac0;
        case 0x1e1ac4u: goto label_1e1ac4;
        case 0x1e1ac8u: goto label_1e1ac8;
        case 0x1e1accu: goto label_1e1acc;
        case 0x1e1ad0u: goto label_1e1ad0;
        case 0x1e1ad4u: goto label_1e1ad4;
        case 0x1e1ad8u: goto label_1e1ad8;
        case 0x1e1adcu: goto label_1e1adc;
        case 0x1e1ae0u: goto label_1e1ae0;
        case 0x1e1ae4u: goto label_1e1ae4;
        case 0x1e1ae8u: goto label_1e1ae8;
        case 0x1e1aecu: goto label_1e1aec;
        case 0x1e1af0u: goto label_1e1af0;
        case 0x1e1af4u: goto label_1e1af4;
        case 0x1e1af8u: goto label_1e1af8;
        case 0x1e1afcu: goto label_1e1afc;
        case 0x1e1b00u: goto label_1e1b00;
        case 0x1e1b04u: goto label_1e1b04;
        case 0x1e1b08u: goto label_1e1b08;
        case 0x1e1b0cu: goto label_1e1b0c;
        case 0x1e1b10u: goto label_1e1b10;
        case 0x1e1b14u: goto label_1e1b14;
        case 0x1e1b18u: goto label_1e1b18;
        case 0x1e1b1cu: goto label_1e1b1c;
        case 0x1e1b20u: goto label_1e1b20;
        case 0x1e1b24u: goto label_1e1b24;
        case 0x1e1b28u: goto label_1e1b28;
        case 0x1e1b2cu: goto label_1e1b2c;
        case 0x1e1b30u: goto label_1e1b30;
        case 0x1e1b34u: goto label_1e1b34;
        case 0x1e1b38u: goto label_1e1b38;
        case 0x1e1b3cu: goto label_1e1b3c;
        case 0x1e1b40u: goto label_1e1b40;
        case 0x1e1b44u: goto label_1e1b44;
        case 0x1e1b48u: goto label_1e1b48;
        case 0x1e1b4cu: goto label_1e1b4c;
        case 0x1e1b50u: goto label_1e1b50;
        case 0x1e1b54u: goto label_1e1b54;
        case 0x1e1b58u: goto label_1e1b58;
        case 0x1e1b5cu: goto label_1e1b5c;
        case 0x1e1b60u: goto label_1e1b60;
        case 0x1e1b64u: goto label_1e1b64;
        case 0x1e1b68u: goto label_1e1b68;
        case 0x1e1b6cu: goto label_1e1b6c;
        case 0x1e1b70u: goto label_1e1b70;
        case 0x1e1b74u: goto label_1e1b74;
        case 0x1e1b78u: goto label_1e1b78;
        case 0x1e1b7cu: goto label_1e1b7c;
        case 0x1e1b80u: goto label_1e1b80;
        case 0x1e1b84u: goto label_1e1b84;
        case 0x1e1b88u: goto label_1e1b88;
        case 0x1e1b8cu: goto label_1e1b8c;
        case 0x1e1b90u: goto label_1e1b90;
        case 0x1e1b94u: goto label_1e1b94;
        case 0x1e1b98u: goto label_1e1b98;
        case 0x1e1b9cu: goto label_1e1b9c;
        default: break;
    }

    ctx->pc = 0x1e1870u;

label_1e1870:
    // 0x1e1870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e1870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e1874:
    // 0x1e1874: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e1874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e1878:
    // 0x1e1878: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e1878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e187c:
    // 0x1e187c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e1880:
    // 0x1e1880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1884:
    // 0x1e1884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1888:
    // 0x1e1888: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e188c:
    // 0x1e188c: 0x12200092  beqz        $s1, . + 4 + (0x92 << 2)
label_1e1890:
    if (ctx->pc == 0x1E1890u) {
        ctx->pc = 0x1E1890u;
            // 0x1e1890: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1894u;
        goto label_1e1894;
    }
    ctx->pc = 0x1E188Cu;
    {
        const bool branch_taken_0x1e188c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E188Cu;
            // 0x1e1890: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e188c) {
            ctx->pc = 0x1E1AD8u;
            goto label_1e1ad8;
        }
    }
    ctx->pc = 0x1E1894u;
label_1e1894:
    // 0x1e1894: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e1894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e1898:
    // 0x1e1898: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e189c:
    // 0x1e189c: 0x2463cf40  addiu       $v1, $v1, -0x30C0
    ctx->pc = 0x1e189cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954816));
label_1e18a0:
    // 0x1e18a0: 0x2442cf68  addiu       $v0, $v0, -0x3098
    ctx->pc = 0x1e18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954856));
label_1e18a4:
    // 0x1e18a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e18a8:
    // 0x1e18a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1e18ac:
    // 0x1e18ac: 0x8e221198  lw          $v0, 0x1198($s1)
    ctx->pc = 0x1e18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
label_1e18b0:
    // 0x1e18b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e18b4:
    if (ctx->pc == 0x1E18B4u) {
        ctx->pc = 0x1E18B4u;
            // 0x1e18b4: 0x8e230e38  lw          $v1, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->pc = 0x1E18B8u;
        goto label_1e18b8;
    }
    ctx->pc = 0x1E18B0u;
    {
        const bool branch_taken_0x1e18b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e18b0) {
            ctx->pc = 0x1E18B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18B0u;
            // 0x1e18b4: 0x8e230e38  lw          $v1, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E18C4u;
            goto label_1e18c4;
        }
    }
    ctx->pc = 0x1E18B8u;
label_1e18b8:
    // 0x1e18b8: 0xc074a08  jal         func_1D2820
label_1e18bc:
    if (ctx->pc == 0x1E18BCu) {
        ctx->pc = 0x1E18BCu;
            // 0x1e18bc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1E18C0u;
        goto label_1e18c0;
    }
    ctx->pc = 0x1E18B8u;
    SET_GPR_U32(ctx, 31, 0x1E18C0u);
    ctx->pc = 0x1E18BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18B8u;
            // 0x1e18bc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2820u;
    if (runtime->hasFunction(0x1D2820u)) {
        auto targetFn = runtime->lookupFunction(0x1D2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18C0u; }
        if (ctx->pc != 0x1E18C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2820_0x1d2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18C0u; }
        if (ctx->pc != 0x1E18C0u) { return; }
    }
    ctx->pc = 0x1E18C0u;
label_1e18c0:
    // 0x1e18c0: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x1e18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_1e18c4:
    // 0x1e18c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e18c8:
    // 0x1e18c8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_1e18cc:
    if (ctx->pc == 0x1E18CCu) {
        ctx->pc = 0x1E18CCu;
            // 0x1e18cc: 0x8e240d60  lw          $a0, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->pc = 0x1E18D0u;
        goto label_1e18d0;
    }
    ctx->pc = 0x1E18C8u;
    {
        const bool branch_taken_0x1e18c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e18c8) {
            ctx->pc = 0x1E18CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18C8u;
            // 0x1e18cc: 0x8e240d60  lw          $a0, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E18E0u;
            goto label_1e18e0;
        }
    }
    ctx->pc = 0x1E18D0u;
label_1e18d0:
    // 0x1e18d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e18d4:
    // 0x1e18d4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1e18d8:
    if (ctx->pc == 0x1E18D8u) {
        ctx->pc = 0x1E18D8u;
            // 0x1e18d8: 0x8e240d68  lw          $a0, 0xD68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
        ctx->pc = 0x1E18DCu;
        goto label_1e18dc;
    }
    ctx->pc = 0x1E18D4u;
    {
        const bool branch_taken_0x1e18d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e18d4) {
            ctx->pc = 0x1E18D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18D4u;
            // 0x1e18d8: 0x8e240d68  lw          $a0, 0xD68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E18FCu;
            goto label_1e18fc;
        }
    }
    ctx->pc = 0x1E18DCu;
label_1e18dc:
    // 0x1e18dc: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x1e18dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_1e18e0:
    // 0x1e18e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e18e4:
    if (ctx->pc == 0x1E18E4u) {
        ctx->pc = 0x1E18E8u;
        goto label_1e18e8;
    }
    ctx->pc = 0x1E18E0u;
    {
        const bool branch_taken_0x1e18e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e18e0) {
            ctx->pc = 0x1E18F8u;
            goto label_1e18f8;
        }
    }
    ctx->pc = 0x1E18E8u;
label_1e18e8:
    // 0x1e18e8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e18e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e18ec:
    // 0x1e18ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e18ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e18f0:
    // 0x1e18f0: 0x320f809  jalr        $t9
label_1e18f4:
    if (ctx->pc == 0x1E18F4u) {
        ctx->pc = 0x1E18F4u;
            // 0x1e18f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E18F8u;
        goto label_1e18f8;
    }
    ctx->pc = 0x1E18F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E18F8u);
        ctx->pc = 0x1E18F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18F0u;
            // 0x1e18f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E18F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E18F8u; }
            if (ctx->pc != 0x1E18F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E18F8u;
label_1e18f8:
    // 0x1e18f8: 0x8e240d68  lw          $a0, 0xD68($s1)
    ctx->pc = 0x1e18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
label_1e18fc:
    // 0x1e18fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e1900:
    if (ctx->pc == 0x1E1900u) {
        ctx->pc = 0x1E1900u;
            // 0x1e1900: 0x8e240d64  lw          $a0, 0xD64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
        ctx->pc = 0x1E1904u;
        goto label_1e1904;
    }
    ctx->pc = 0x1E18FCu;
    {
        const bool branch_taken_0x1e18fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e18fc) {
            ctx->pc = 0x1E1900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18FCu;
            // 0x1e1900: 0x8e240d64  lw          $a0, 0xD64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1918u;
            goto label_1e1918;
        }
    }
    ctx->pc = 0x1E1904u;
label_1e1904:
    // 0x1e1904: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e1904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e1908:
    // 0x1e1908: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e190c:
    // 0x1e190c: 0x320f809  jalr        $t9
label_1e1910:
    if (ctx->pc == 0x1E1910u) {
        ctx->pc = 0x1E1910u;
            // 0x1e1910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1914u;
        goto label_1e1914;
    }
    ctx->pc = 0x1E190Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1914u);
        ctx->pc = 0x1E1910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E190Cu;
            // 0x1e1910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1914u; }
            if (ctx->pc != 0x1E1914u) { return; }
        }
        }
    }
    ctx->pc = 0x1E1914u;
label_1e1914:
    // 0x1e1914: 0x8e240d64  lw          $a0, 0xD64($s1)
    ctx->pc = 0x1e1914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
label_1e1918:
    // 0x1e1918: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e191c:
    if (ctx->pc == 0x1E191Cu) {
        ctx->pc = 0x1E191Cu;
            // 0x1e191c: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x1E1920u;
        goto label_1e1920;
    }
    ctx->pc = 0x1E1918u;
    {
        const bool branch_taken_0x1e1918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1918) {
            ctx->pc = 0x1E191Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1918u;
            // 0x1e191c: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1934u;
            goto label_1e1934;
        }
    }
    ctx->pc = 0x1E1920u;
label_1e1920:
    // 0x1e1920: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e1920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e1924:
    // 0x1e1924: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1928:
    // 0x1e1928: 0x320f809  jalr        $t9
label_1e192c:
    if (ctx->pc == 0x1E192Cu) {
        ctx->pc = 0x1E192Cu;
            // 0x1e192c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1930u;
        goto label_1e1930;
    }
    ctx->pc = 0x1E1928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1930u);
        ctx->pc = 0x1E192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1928u;
            // 0x1e192c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1930u; }
            if (ctx->pc != 0x1E1930u) { return; }
        }
        }
    }
    ctx->pc = 0x1E1930u;
label_1e1930:
    // 0x1e1930: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x1e1930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_1e1934:
    // 0x1e1934: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e1938:
    if (ctx->pc == 0x1E1938u) {
        ctx->pc = 0x1E1938u;
            // 0x1e1938: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x1E193Cu;
        goto label_1e193c;
    }
    ctx->pc = 0x1E1934u;
    {
        const bool branch_taken_0x1e1934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1934) {
            ctx->pc = 0x1E1938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1934u;
            // 0x1e1938: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1950u;
            goto label_1e1950;
        }
    }
    ctx->pc = 0x1E193Cu;
label_1e193c:
    // 0x1e193c: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x1e193cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1e1940:
    // 0x1e1940: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1944:
    // 0x1e1944: 0x320f809  jalr        $t9
label_1e1948:
    if (ctx->pc == 0x1E1948u) {
        ctx->pc = 0x1E1948u;
            // 0x1e1948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E194Cu;
        goto label_1e194c;
    }
    ctx->pc = 0x1E1944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E194Cu);
        ctx->pc = 0x1E1948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1944u;
            // 0x1e1948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E194Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E194Cu; }
            if (ctx->pc != 0x1E194Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E194Cu;
label_1e194c:
    // 0x1e194c: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x1e194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_1e1950:
    // 0x1e1950: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e1954:
    if (ctx->pc == 0x1E1954u) {
        ctx->pc = 0x1E1954u;
            // 0x1e1954: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x1E1958u;
        goto label_1e1958;
    }
    ctx->pc = 0x1E1950u;
    {
        const bool branch_taken_0x1e1950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1950) {
            ctx->pc = 0x1E1954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1950u;
            // 0x1e1954: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E196Cu;
            goto label_1e196c;
        }
    }
    ctx->pc = 0x1E1958u;
label_1e1958:
    // 0x1e1958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e195c:
    // 0x1e195c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e195cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1960:
    // 0x1e1960: 0x320f809  jalr        $t9
label_1e1964:
    if (ctx->pc == 0x1E1964u) {
        ctx->pc = 0x1E1964u;
            // 0x1e1964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1968u;
        goto label_1e1968;
    }
    ctx->pc = 0x1E1960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1968u);
        ctx->pc = 0x1E1964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1960u;
            // 0x1e1964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1968u; }
            if (ctx->pc != 0x1E1968u) { return; }
        }
        }
    }
    ctx->pc = 0x1E1968u;
label_1e1968:
    // 0x1e1968: 0x8e240d74  lw          $a0, 0xD74($s1)
    ctx->pc = 0x1e1968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1e196c:
    // 0x1e196c: 0xc0b6e94  jal         func_2DBA50
label_1e1970:
    if (ctx->pc == 0x1E1970u) {
        ctx->pc = 0x1E1970u;
            // 0x1e1970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1974u;
        goto label_1e1974;
    }
    ctx->pc = 0x1E196Cu;
    SET_GPR_U32(ctx, 31, 0x1E1974u);
    ctx->pc = 0x1E1970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E196Cu;
            // 0x1e1970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA50u;
    if (runtime->hasFunction(0x2DBA50u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1974u; }
        if (ctx->pc != 0x1E1974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA50_0x2dba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1974u; }
        if (ctx->pc != 0x1E1974u) { return; }
    }
    ctx->pc = 0x1E1974u;
label_1e1974:
    // 0x1e1974: 0x8e240d78  lw          $a0, 0xD78($s1)
    ctx->pc = 0x1e1974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_1e1978:
    // 0x1e1978: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e197c:
    if (ctx->pc == 0x1E197Cu) {
        ctx->pc = 0x1E197Cu;
            // 0x1e197c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
        ctx->pc = 0x1E1980u;
        goto label_1e1980;
    }
    ctx->pc = 0x1E1978u;
    {
        const bool branch_taken_0x1e1978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1978) {
            ctx->pc = 0x1E197Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1978u;
            // 0x1e197c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1994u;
            goto label_1e1994;
        }
    }
    ctx->pc = 0x1E1980u;
label_1e1980:
    // 0x1e1980: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1984:
    // 0x1e1984: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1988:
    // 0x1e1988: 0x320f809  jalr        $t9
label_1e198c:
    if (ctx->pc == 0x1E198Cu) {
        ctx->pc = 0x1E198Cu;
            // 0x1e198c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1990u;
        goto label_1e1990;
    }
    ctx->pc = 0x1E1988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1990u);
        ctx->pc = 0x1E198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1988u;
            // 0x1e198c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1990u; }
            if (ctx->pc != 0x1E1990u) { return; }
        }
        }
    }
    ctx->pc = 0x1E1990u;
label_1e1990:
    // 0x1e1990: 0x8e240550  lw          $a0, 0x550($s1)
    ctx->pc = 0x1e1990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_1e1994:
    // 0x1e1994: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e1998:
    if (ctx->pc == 0x1E1998u) {
        ctx->pc = 0x1E1998u;
            // 0x1e1998: 0x26221150  addiu       $v0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->pc = 0x1E199Cu;
        goto label_1e199c;
    }
    ctx->pc = 0x1E1994u;
    {
        const bool branch_taken_0x1e1994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1994) {
            ctx->pc = 0x1E1998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1994u;
            // 0x1e1998: 0x26221150  addiu       $v0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E19B0u;
            goto label_1e19b0;
        }
    }
    ctx->pc = 0x1E199Cu;
label_1e199c:
    // 0x1e199c: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x1e199cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1e19a0:
    // 0x1e19a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e19a4:
    // 0x1e19a4: 0x320f809  jalr        $t9
label_1e19a8:
    if (ctx->pc == 0x1E19A8u) {
        ctx->pc = 0x1E19A8u;
            // 0x1e19a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E19ACu;
        goto label_1e19ac;
    }
    ctx->pc = 0x1E19A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E19ACu);
        ctx->pc = 0x1E19A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19A4u;
            // 0x1e19a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E19ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E19ACu; }
            if (ctx->pc != 0x1E19ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1E19ACu;
label_1e19ac:
    // 0x1e19ac: 0x26221150  addiu       $v0, $s1, 0x1150
    ctx->pc = 0x1e19acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
label_1e19b0:
    // 0x1e19b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1e19b4:
    if (ctx->pc == 0x1E19B4u) {
        ctx->pc = 0x1E19B4u;
            // 0x1e19b4: 0x26250d80  addiu       $a1, $s1, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3456));
        ctx->pc = 0x1E19B8u;
        goto label_1e19b8;
    }
    ctx->pc = 0x1E19B0u;
    {
        const bool branch_taken_0x1e19b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19b0) {
            ctx->pc = 0x1E19B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19B0u;
            // 0x1e19b4: 0x26250d80  addiu       $a1, $s1, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3456));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E19C8u;
            goto label_1e19c8;
        }
    }
    ctx->pc = 0x1E19B8u;
label_1e19b8:
    // 0x1e19b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e19bc:
    // 0x1e19bc: 0x2442d008  addiu       $v0, $v0, -0x2FF8
    ctx->pc = 0x1e19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
label_1e19c0:
    // 0x1e19c0: 0xae221150  sw          $v0, 0x1150($s1)
    ctx->pc = 0x1e19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4432), GPR_U32(ctx, 2));
label_1e19c4:
    // 0x1e19c4: 0x26250d80  addiu       $a1, $s1, 0xD80
    ctx->pc = 0x1e19c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3456));
label_1e19c8:
    // 0x1e19c8: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_1e19cc:
    if (ctx->pc == 0x1E19CCu) {
        ctx->pc = 0x1E19CCu;
            // 0x1e19cc: 0x26220bc0  addiu       $v0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->pc = 0x1E19D0u;
        goto label_1e19d0;
    }
    ctx->pc = 0x1E19C8u;
    {
        const bool branch_taken_0x1e19c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19c8) {
            ctx->pc = 0x1E19CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19C8u;
            // 0x1e19cc: 0x26220bc0  addiu       $v0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1A0Cu;
            goto label_1e1a0c;
        }
    }
    ctx->pc = 0x1E19D0u;
label_1e19d0:
    // 0x1e19d0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_1e19d4:
    if (ctx->pc == 0x1E19D4u) {
        ctx->pc = 0x1E19D8u;
        goto label_1e19d8;
    }
    ctx->pc = 0x1E19D0u;
    {
        const bool branch_taken_0x1e19d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19d0) {
            ctx->pc = 0x1E1A08u;
            goto label_1e1a08;
        }
    }
    ctx->pc = 0x1E19D8u;
label_1e19d8:
    // 0x1e19d8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1e19dc:
    if (ctx->pc == 0x1E19DCu) {
        ctx->pc = 0x1E19E0u;
        goto label_1e19e0;
    }
    ctx->pc = 0x1E19D8u;
    {
        const bool branch_taken_0x1e19d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19d8) {
            ctx->pc = 0x1E1A08u;
            goto label_1e1a08;
        }
    }
    ctx->pc = 0x1E19E0u;
label_1e19e0:
    // 0x1e19e0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1e19e4:
    if (ctx->pc == 0x1E19E4u) {
        ctx->pc = 0x1E19E8u;
        goto label_1e19e8;
    }
    ctx->pc = 0x1E19E0u;
    {
        const bool branch_taken_0x1e19e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19e0) {
            ctx->pc = 0x1E1A08u;
            goto label_1e1a08;
        }
    }
    ctx->pc = 0x1E19E8u;
label_1e19e8:
    // 0x1e19e8: 0x26220d8c  addiu       $v0, $s1, 0xD8C
    ctx->pc = 0x1e19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3468));
label_1e19ec:
    // 0x1e19ec: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1e19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1e19f0:
    // 0x1e19f0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1e19f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1e19f4:
    // 0x1e19f4: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1e19f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e19f8:
    // 0x1e19f8: 0x8e220d90  lw          $v0, 0xD90($s1)
    ctx->pc = 0x1e19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3472)));
label_1e19fc:
    // 0x1e19fc: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x1e19fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1e1a00:
    // 0x1e1a00: 0xc05827c  jal         func_1609F0
label_1e1a04:
    if (ctx->pc == 0x1E1A04u) {
        ctx->pc = 0x1E1A04u;
            // 0x1e1a04: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1A08u;
        goto label_1e1a08;
    }
    ctx->pc = 0x1E1A00u;
    SET_GPR_U32(ctx, 31, 0x1E1A08u);
    ctx->pc = 0x1E1A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A00u;
            // 0x1e1a04: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A08u; }
        if (ctx->pc != 0x1E1A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A08u; }
        if (ctx->pc != 0x1E1A08u) { return; }
    }
    ctx->pc = 0x1E1A08u;
label_1e1a08:
    // 0x1e1a08: 0x26220bc0  addiu       $v0, $s1, 0xBC0
    ctx->pc = 0x1e1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
label_1e1a0c:
    // 0x1e1a0c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1e1a10:
    if (ctx->pc == 0x1E1A10u) {
        ctx->pc = 0x1E1A10u;
            // 0x1e1a10: 0x26220a50  addiu       $v0, $s1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
        ctx->pc = 0x1E1A14u;
        goto label_1e1a14;
    }
    ctx->pc = 0x1E1A0Cu;
    {
        const bool branch_taken_0x1e1a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a0c) {
            ctx->pc = 0x1E1A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A0Cu;
            // 0x1e1a10: 0x26220a50  addiu       $v0, $s1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1A40u;
            goto label_1e1a40;
        }
    }
    ctx->pc = 0x1E1A14u;
label_1e1a14:
    // 0x1e1a14: 0x8e240bd4  lw          $a0, 0xBD4($s1)
    ctx->pc = 0x1e1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3028)));
label_1e1a18:
    // 0x1e1a18: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1e1a1c:
    if (ctx->pc == 0x1E1A1Cu) {
        ctx->pc = 0x1E1A1Cu;
            // 0x1e1a1c: 0xae200bd4  sw          $zero, 0xBD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3028), GPR_U32(ctx, 0));
        ctx->pc = 0x1E1A20u;
        goto label_1e1a20;
    }
    ctx->pc = 0x1E1A18u;
    {
        const bool branch_taken_0x1e1a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a18) {
            ctx->pc = 0x1E1A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A18u;
            // 0x1e1a1c: 0xae200bd4  sw          $zero, 0xBD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1A3Cu;
            goto label_1e1a3c;
        }
    }
    ctx->pc = 0x1E1A20u;
label_1e1a20:
    // 0x1e1a20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e1a24:
    if (ctx->pc == 0x1E1A24u) {
        ctx->pc = 0x1E1A28u;
        goto label_1e1a28;
    }
    ctx->pc = 0x1E1A20u;
    {
        const bool branch_taken_0x1e1a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a20) {
            ctx->pc = 0x1E1A38u;
            goto label_1e1a38;
        }
    }
    ctx->pc = 0x1E1A28u;
label_1e1a28:
    // 0x1e1a28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1a2c:
    // 0x1e1a2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1a30:
    // 0x1e1a30: 0x320f809  jalr        $t9
label_1e1a34:
    if (ctx->pc == 0x1E1A34u) {
        ctx->pc = 0x1E1A34u;
            // 0x1e1a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1A38u;
        goto label_1e1a38;
    }
    ctx->pc = 0x1E1A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1A38u);
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A30u;
            // 0x1e1a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A38u; }
            if (ctx->pc != 0x1E1A38u) { return; }
        }
        }
    }
    ctx->pc = 0x1E1A38u;
label_1e1a38:
    // 0x1e1a38: 0xae200bd4  sw          $zero, 0xBD4($s1)
    ctx->pc = 0x1e1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3028), GPR_U32(ctx, 0));
label_1e1a3c:
    // 0x1e1a3c: 0x26220a50  addiu       $v0, $s1, 0xA50
    ctx->pc = 0x1e1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_1e1a40:
    // 0x1e1a40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1e1a44:
    if (ctx->pc == 0x1E1A44u) {
        ctx->pc = 0x1E1A48u;
        goto label_1e1a48;
    }
    ctx->pc = 0x1E1A40u;
    {
        const bool branch_taken_0x1e1a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a40) {
            ctx->pc = 0x1E1A80u;
            goto label_1e1a80;
        }
    }
    ctx->pc = 0x1E1A48u;
label_1e1a48:
    // 0x1e1a48: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1e1a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e1a4c:
    // 0x1e1a4c: 0x26330a58  addiu       $s3, $s1, 0xA58
    ctx->pc = 0x1e1a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 2648));
label_1e1a50:
    // 0x1e1a50: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1e1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e1a54:
    // 0x1e1a54: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1e1a58:
    if (ctx->pc == 0x1E1A58u) {
        ctx->pc = 0x1E1A5Cu;
        goto label_1e1a5c;
    }
    ctx->pc = 0x1E1A54u;
    {
        const bool branch_taken_0x1e1a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a54) {
            ctx->pc = 0x1E1A70u;
            goto label_1e1a70;
        }
    }
    ctx->pc = 0x1E1A5Cu;
label_1e1a5c:
    // 0x1e1a5c: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x1e1a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1e1a60:
    // 0x1e1a60: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e1a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e1a64:
    // 0x1e1a64: 0x320f809  jalr        $t9
label_1e1a68:
    if (ctx->pc == 0x1E1A68u) {
        ctx->pc = 0x1E1A68u;
            // 0x1e1a68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1A6Cu;
        goto label_1e1a6c;
    }
    ctx->pc = 0x1E1A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1A6Cu);
        ctx->pc = 0x1E1A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A64u;
            // 0x1e1a68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1A6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A6Cu; }
            if (ctx->pc != 0x1E1A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E1A6Cu;
label_1e1a6c:
    // 0x1e1a6c: 0x0  nop
    ctx->pc = 0x1e1a6cu;
    // NOP
label_1e1a70:
    // 0x1e1a70: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e1a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e1a74:
    // 0x1e1a74: 0x1e40fff6  bgtz        $s2, . + 4 + (-0xA << 2)
label_1e1a78:
    if (ctx->pc == 0x1E1A78u) {
        ctx->pc = 0x1E1A78u;
            // 0x1e1a78: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x1E1A7Cu;
        goto label_1e1a7c;
    }
    ctx->pc = 0x1E1A74u;
    {
        const bool branch_taken_0x1e1a74 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1E1A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A74u;
            // 0x1e1a78: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a74) {
            ctx->pc = 0x1E1A50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e1a50;
        }
    }
    ctx->pc = 0x1E1A7Cu;
label_1e1a7c:
    // 0x1e1a7c: 0x0  nop
    ctx->pc = 0x1e1a7cu;
    // NOP
label_1e1a80:
    // 0x1e1a80: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x1e1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_1e1a84:
    // 0x1e1a84: 0xc142cb4  jal         func_50B2D0
label_1e1a88:
    if (ctx->pc == 0x1E1A88u) {
        ctx->pc = 0x1E1A88u;
            // 0x1e1a88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1E1A8Cu;
        goto label_1e1a8c;
    }
    ctx->pc = 0x1E1A84u;
    SET_GPR_U32(ctx, 31, 0x1E1A8Cu);
    ctx->pc = 0x1E1A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A84u;
            // 0x1e1a88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B2D0u;
    if (runtime->hasFunction(0x50B2D0u)) {
        auto targetFn = runtime->lookupFunction(0x50B2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A8Cu; }
        if (ctx->pc != 0x1E1A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B2D0_0x50b2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A8Cu; }
        if (ctx->pc != 0x1E1A8Cu) { return; }
    }
    ctx->pc = 0x1E1A8Cu;
label_1e1a8c:
    // 0x1e1a8c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1e1a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1e1a90:
    // 0x1e1a90: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1e1a94:
    if (ctx->pc == 0x1E1A94u) {
        ctx->pc = 0x1E1A98u;
        goto label_1e1a98;
    }
    ctx->pc = 0x1E1A90u;
    {
        const bool branch_taken_0x1e1a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a90) {
            ctx->pc = 0x1E1AACu;
            goto label_1e1aac;
        }
    }
    ctx->pc = 0x1E1A98u;
label_1e1a98:
    // 0x1e1a98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1a9c:
    // 0x1e1a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1aa0:
    // 0x1e1aa0: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x1e1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_1e1aa4:
    // 0x1e1aa4: 0xc057a68  jal         func_15E9A0
label_1e1aa8:
    if (ctx->pc == 0x1E1AA8u) {
        ctx->pc = 0x1E1AA8u;
            // 0x1e1aa8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1E1AACu;
        goto label_1e1aac;
    }
    ctx->pc = 0x1E1AA4u;
    SET_GPR_U32(ctx, 31, 0x1E1AACu);
    ctx->pc = 0x1E1AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AA4u;
            // 0x1e1aa8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AACu; }
        if (ctx->pc != 0x1E1AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AACu; }
        if (ctx->pc != 0x1E1AACu) { return; }
    }
    ctx->pc = 0x1E1AACu;
label_1e1aac:
    // 0x1e1aac: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_1e1ab0:
    if (ctx->pc == 0x1E1AB0u) {
        ctx->pc = 0x1E1AB0u;
            // 0x1e1ab0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1E1AB4u;
        goto label_1e1ab4;
    }
    ctx->pc = 0x1E1AACu;
    {
        const bool branch_taken_0x1e1aac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1aac) {
            ctx->pc = 0x1E1AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AACu;
            // 0x1e1ab0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1AC4u;
            goto label_1e1ac4;
        }
    }
    ctx->pc = 0x1E1AB4u;
label_1e1ab4:
    // 0x1e1ab4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e1ab8:
    // 0x1e1ab8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x1e1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_1e1abc:
    // 0x1e1abc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1ac0:
    // 0x1e1ac0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e1ac4:
    // 0x1e1ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1ac8:
    // 0x1e1ac8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1e1acc:
    if (ctx->pc == 0x1E1ACCu) {
        ctx->pc = 0x1E1ACCu;
            // 0x1e1acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AD0u;
        goto label_1e1ad0;
    }
    ctx->pc = 0x1E1AC8u;
    {
        const bool branch_taken_0x1e1ac8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e1ac8) {
            ctx->pc = 0x1E1ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AC8u;
            // 0x1e1acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1ADCu;
            goto label_1e1adc;
        }
    }
    ctx->pc = 0x1E1AD0u;
label_1e1ad0:
    // 0x1e1ad0: 0xc0400a8  jal         func_1002A0
label_1e1ad4:
    if (ctx->pc == 0x1E1AD4u) {
        ctx->pc = 0x1E1AD4u;
            // 0x1e1ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AD8u;
        goto label_1e1ad8;
    }
    ctx->pc = 0x1E1AD0u;
    SET_GPR_U32(ctx, 31, 0x1E1AD8u);
    ctx->pc = 0x1E1AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AD0u;
            // 0x1e1ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AD8u; }
        if (ctx->pc != 0x1E1AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AD8u; }
        if (ctx->pc != 0x1E1AD8u) { return; }
    }
    ctx->pc = 0x1E1AD8u;
label_1e1ad8:
    // 0x1e1ad8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1adc:
    // 0x1e1adc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e1adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1ae0:
    // 0x1e1ae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e1ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1ae4:
    // 0x1e1ae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e1ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1ae8:
    // 0x1e1ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1aec:
    // 0x1e1aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1af0:
    // 0x1e1af0: 0x3e00008  jr          $ra
label_1e1af4:
    if (ctx->pc == 0x1E1AF4u) {
        ctx->pc = 0x1E1AF4u;
            // 0x1e1af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E1AF8u;
        goto label_1e1af8;
    }
    ctx->pc = 0x1E1AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AF0u;
            // 0x1e1af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1AF8u;
label_1e1af8:
    // 0x1e1af8: 0x0  nop
    ctx->pc = 0x1e1af8u;
    // NOP
label_1e1afc:
    // 0x1e1afc: 0x0  nop
    ctx->pc = 0x1e1afcu;
    // NOP
label_1e1b00:
    // 0x1e1b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1b04:
    // 0x1e1b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1b08:
    // 0x1e1b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1b0c:
    // 0x1e1b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b10:
    // 0x1e1b10: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1e1b14:
    if (ctx->pc == 0x1E1B14u) {
        ctx->pc = 0x1E1B14u;
            // 0x1e1b14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B18u;
        goto label_1e1b18;
    }
    ctx->pc = 0x1E1B10u;
    {
        const bool branch_taken_0x1e1b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b10) {
            ctx->pc = 0x1E1B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B10u;
            // 0x1e1b14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1B3Cu;
            goto label_1e1b3c;
        }
    }
    ctx->pc = 0x1E1B18u;
label_1e1b18:
    // 0x1e1b18: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e1b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e1b1c:
    // 0x1e1b1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e1b20:
    // 0x1e1b20: 0x2463cfc0  addiu       $v1, $v1, -0x3040
    ctx->pc = 0x1e1b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954944));
label_1e1b24:
    // 0x1e1b24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1b24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1b28:
    // 0x1e1b28: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1e1b2c:
    if (ctx->pc == 0x1E1B2Cu) {
        ctx->pc = 0x1E1B2Cu;
            // 0x1e1b2c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x1E1B30u;
        goto label_1e1b30;
    }
    ctx->pc = 0x1E1B28u;
    {
        const bool branch_taken_0x1e1b28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B28u;
            // 0x1e1b2c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b28) {
            ctx->pc = 0x1E1B38u;
            goto label_1e1b38;
        }
    }
    ctx->pc = 0x1E1B30u;
label_1e1b30:
    // 0x1e1b30: 0xc0400a8  jal         func_1002A0
label_1e1b34:
    if (ctx->pc == 0x1E1B34u) {
        ctx->pc = 0x1E1B38u;
        goto label_1e1b38;
    }
    ctx->pc = 0x1E1B30u;
    SET_GPR_U32(ctx, 31, 0x1E1B38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B38u; }
        if (ctx->pc != 0x1E1B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B38u; }
        if (ctx->pc != 0x1E1B38u) { return; }
    }
    ctx->pc = 0x1E1B38u;
label_1e1b38:
    // 0x1e1b38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b3c:
    // 0x1e1b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1b40:
    // 0x1e1b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1b44:
    // 0x1e1b44: 0x3e00008  jr          $ra
label_1e1b48:
    if (ctx->pc == 0x1E1B48u) {
        ctx->pc = 0x1E1B48u;
            // 0x1e1b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E1B4Cu;
        goto label_1e1b4c;
    }
    ctx->pc = 0x1E1B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B44u;
            // 0x1e1b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1B4Cu;
label_1e1b4c:
    // 0x1e1b4c: 0x0  nop
    ctx->pc = 0x1e1b4cu;
    // NOP
label_1e1b50:
    // 0x1e1b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1b54:
    // 0x1e1b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1b58:
    // 0x1e1b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1b5c:
    // 0x1e1b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b60:
    // 0x1e1b60: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1e1b64:
    if (ctx->pc == 0x1E1B64u) {
        ctx->pc = 0x1E1B64u;
            // 0x1e1b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B68u;
        goto label_1e1b68;
    }
    ctx->pc = 0x1E1B60u;
    {
        const bool branch_taken_0x1e1b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b60) {
            ctx->pc = 0x1E1B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B60u;
            // 0x1e1b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1B8Cu;
            goto label_1e1b8c;
        }
    }
    ctx->pc = 0x1E1B68u;
label_1e1b68:
    // 0x1e1b68: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e1b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e1b6c:
    // 0x1e1b6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e1b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e1b70:
    // 0x1e1b70: 0x24634690  addiu       $v1, $v1, 0x4690
    ctx->pc = 0x1e1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18064));
label_1e1b74:
    // 0x1e1b74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e1b78:
    // 0x1e1b78: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1e1b7c:
    if (ctx->pc == 0x1E1B7Cu) {
        ctx->pc = 0x1E1B7Cu;
            // 0x1e1b7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1E1B80u;
        goto label_1e1b80;
    }
    ctx->pc = 0x1E1B78u;
    {
        const bool branch_taken_0x1e1b78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B78u;
            // 0x1e1b7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b78) {
            ctx->pc = 0x1E1B88u;
            goto label_1e1b88;
        }
    }
    ctx->pc = 0x1E1B80u;
label_1e1b80:
    // 0x1e1b80: 0xc0400a8  jal         func_1002A0
label_1e1b84:
    if (ctx->pc == 0x1E1B84u) {
        ctx->pc = 0x1E1B88u;
        goto label_1e1b88;
    }
    ctx->pc = 0x1E1B80u;
    SET_GPR_U32(ctx, 31, 0x1E1B88u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B88u; }
        if (ctx->pc != 0x1E1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B88u; }
        if (ctx->pc != 0x1E1B88u) { return; }
    }
    ctx->pc = 0x1E1B88u;
label_1e1b88:
    // 0x1e1b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b8c:
    // 0x1e1b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1b90:
    // 0x1e1b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1b94:
    // 0x1e1b94: 0x3e00008  jr          $ra
label_1e1b98:
    if (ctx->pc == 0x1E1B98u) {
        ctx->pc = 0x1E1B98u;
            // 0x1e1b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E1B9Cu;
        goto label_1e1b9c;
    }
    ctx->pc = 0x1E1B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B94u;
            // 0x1e1b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1B9Cu;
label_1e1b9c:
    // 0x1e1b9c: 0x0  nop
    ctx->pc = 0x1e1b9cu;
    // NOP
}
