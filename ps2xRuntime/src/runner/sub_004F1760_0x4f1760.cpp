#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F1760
// Address: 0x4f1760 - 0x4f1930
void sub_004F1760_0x4f1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1760_0x4f1760");
#endif

    switch (ctx->pc) {
        case 0x4f1760u: goto label_4f1760;
        case 0x4f1764u: goto label_4f1764;
        case 0x4f1768u: goto label_4f1768;
        case 0x4f176cu: goto label_4f176c;
        case 0x4f1770u: goto label_4f1770;
        case 0x4f1774u: goto label_4f1774;
        case 0x4f1778u: goto label_4f1778;
        case 0x4f177cu: goto label_4f177c;
        case 0x4f1780u: goto label_4f1780;
        case 0x4f1784u: goto label_4f1784;
        case 0x4f1788u: goto label_4f1788;
        case 0x4f178cu: goto label_4f178c;
        case 0x4f1790u: goto label_4f1790;
        case 0x4f1794u: goto label_4f1794;
        case 0x4f1798u: goto label_4f1798;
        case 0x4f179cu: goto label_4f179c;
        case 0x4f17a0u: goto label_4f17a0;
        case 0x4f17a4u: goto label_4f17a4;
        case 0x4f17a8u: goto label_4f17a8;
        case 0x4f17acu: goto label_4f17ac;
        case 0x4f17b0u: goto label_4f17b0;
        case 0x4f17b4u: goto label_4f17b4;
        case 0x4f17b8u: goto label_4f17b8;
        case 0x4f17bcu: goto label_4f17bc;
        case 0x4f17c0u: goto label_4f17c0;
        case 0x4f17c4u: goto label_4f17c4;
        case 0x4f17c8u: goto label_4f17c8;
        case 0x4f17ccu: goto label_4f17cc;
        case 0x4f17d0u: goto label_4f17d0;
        case 0x4f17d4u: goto label_4f17d4;
        case 0x4f17d8u: goto label_4f17d8;
        case 0x4f17dcu: goto label_4f17dc;
        case 0x4f17e0u: goto label_4f17e0;
        case 0x4f17e4u: goto label_4f17e4;
        case 0x4f17e8u: goto label_4f17e8;
        case 0x4f17ecu: goto label_4f17ec;
        case 0x4f17f0u: goto label_4f17f0;
        case 0x4f17f4u: goto label_4f17f4;
        case 0x4f17f8u: goto label_4f17f8;
        case 0x4f17fcu: goto label_4f17fc;
        case 0x4f1800u: goto label_4f1800;
        case 0x4f1804u: goto label_4f1804;
        case 0x4f1808u: goto label_4f1808;
        case 0x4f180cu: goto label_4f180c;
        case 0x4f1810u: goto label_4f1810;
        case 0x4f1814u: goto label_4f1814;
        case 0x4f1818u: goto label_4f1818;
        case 0x4f181cu: goto label_4f181c;
        case 0x4f1820u: goto label_4f1820;
        case 0x4f1824u: goto label_4f1824;
        case 0x4f1828u: goto label_4f1828;
        case 0x4f182cu: goto label_4f182c;
        case 0x4f1830u: goto label_4f1830;
        case 0x4f1834u: goto label_4f1834;
        case 0x4f1838u: goto label_4f1838;
        case 0x4f183cu: goto label_4f183c;
        case 0x4f1840u: goto label_4f1840;
        case 0x4f1844u: goto label_4f1844;
        case 0x4f1848u: goto label_4f1848;
        case 0x4f184cu: goto label_4f184c;
        case 0x4f1850u: goto label_4f1850;
        case 0x4f1854u: goto label_4f1854;
        case 0x4f1858u: goto label_4f1858;
        case 0x4f185cu: goto label_4f185c;
        case 0x4f1860u: goto label_4f1860;
        case 0x4f1864u: goto label_4f1864;
        case 0x4f1868u: goto label_4f1868;
        case 0x4f186cu: goto label_4f186c;
        case 0x4f1870u: goto label_4f1870;
        case 0x4f1874u: goto label_4f1874;
        case 0x4f1878u: goto label_4f1878;
        case 0x4f187cu: goto label_4f187c;
        case 0x4f1880u: goto label_4f1880;
        case 0x4f1884u: goto label_4f1884;
        case 0x4f1888u: goto label_4f1888;
        case 0x4f188cu: goto label_4f188c;
        case 0x4f1890u: goto label_4f1890;
        case 0x4f1894u: goto label_4f1894;
        case 0x4f1898u: goto label_4f1898;
        case 0x4f189cu: goto label_4f189c;
        case 0x4f18a0u: goto label_4f18a0;
        case 0x4f18a4u: goto label_4f18a4;
        case 0x4f18a8u: goto label_4f18a8;
        case 0x4f18acu: goto label_4f18ac;
        case 0x4f18b0u: goto label_4f18b0;
        case 0x4f18b4u: goto label_4f18b4;
        case 0x4f18b8u: goto label_4f18b8;
        case 0x4f18bcu: goto label_4f18bc;
        case 0x4f18c0u: goto label_4f18c0;
        case 0x4f18c4u: goto label_4f18c4;
        case 0x4f18c8u: goto label_4f18c8;
        case 0x4f18ccu: goto label_4f18cc;
        case 0x4f18d0u: goto label_4f18d0;
        case 0x4f18d4u: goto label_4f18d4;
        case 0x4f18d8u: goto label_4f18d8;
        case 0x4f18dcu: goto label_4f18dc;
        case 0x4f18e0u: goto label_4f18e0;
        case 0x4f18e4u: goto label_4f18e4;
        case 0x4f18e8u: goto label_4f18e8;
        case 0x4f18ecu: goto label_4f18ec;
        case 0x4f18f0u: goto label_4f18f0;
        case 0x4f18f4u: goto label_4f18f4;
        case 0x4f18f8u: goto label_4f18f8;
        case 0x4f18fcu: goto label_4f18fc;
        case 0x4f1900u: goto label_4f1900;
        case 0x4f1904u: goto label_4f1904;
        case 0x4f1908u: goto label_4f1908;
        case 0x4f190cu: goto label_4f190c;
        case 0x4f1910u: goto label_4f1910;
        case 0x4f1914u: goto label_4f1914;
        case 0x4f1918u: goto label_4f1918;
        case 0x4f191cu: goto label_4f191c;
        case 0x4f1920u: goto label_4f1920;
        case 0x4f1924u: goto label_4f1924;
        case 0x4f1928u: goto label_4f1928;
        case 0x4f192cu: goto label_4f192c;
        default: break;
    }

    ctx->pc = 0x4f1760u;

label_4f1760:
    // 0x4f1760: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1764:
    // 0x4f1764: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4f1764u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4f1768:
    // 0x4f1768: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4f1768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4f176c:
    // 0x4f176c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f176cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1770:
    // 0x4f1770: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4f1770u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f1774:
    // 0x4f1774: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4f1774u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4f1778:
    // 0x4f1778: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f177c:
    // 0x4f177c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4f177cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4f1780:
    // 0x4f1780: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f1780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f1784:
    // 0x4f1784: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4f1784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4f1788:
    // 0x4f1788: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4f1788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4f178c:
    // 0x4f178c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4f178cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4f1790:
    // 0x4f1790: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4f1790u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4f1794:
    // 0x4f1794: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4f1794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4f1798:
    // 0x4f1798: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4f1798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4f179c:
    // 0x4f179c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f179cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f17a0:
    // 0x4f17a0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4f17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4f17a4:
    // 0x4f17a4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4f17a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4f17a8:
    // 0x4f17a8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4f17a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4f17ac:
    // 0x4f17ac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4f17acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4f17b0:
    // 0x4f17b0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4f17b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4f17b4:
    // 0x4f17b4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4f17b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4f17b8:
    // 0x4f17b8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4f17b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4f17bc:
    // 0x4f17bc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4f17bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4f17c0:
    // 0x4f17c0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4f17c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4f17c4:
    // 0x4f17c4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4f17c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4f17c8:
    // 0x4f17c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f17cc:
    // 0x4f17cc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4f17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4f17d0:
    // 0x4f17d0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4f17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4f17d4:
    // 0x4f17d4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4f17d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f17d8:
    // 0x4f17d8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4f17d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4f17dc:
    // 0x4f17dc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4f17dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4f17e0:
    // 0x4f17e0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4f17e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4f17e4:
    // 0x4f17e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f17e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f17e8:
    // 0x4f17e8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4f17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4f17ec:
    // 0x4f17ec: 0x3e00008  jr          $ra
label_4f17f0:
    if (ctx->pc == 0x4F17F0u) {
        ctx->pc = 0x4F17F0u;
            // 0x4f17f0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4F17F4u;
        goto label_4f17f4;
    }
    ctx->pc = 0x4F17ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F17F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F17ECu;
            // 0x4f17f0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F17F4u;
label_4f17f4:
    // 0x4f17f4: 0x0  nop
    ctx->pc = 0x4f17f4u;
    // NOP
label_4f17f8:
    // 0x4f17f8: 0x0  nop
    ctx->pc = 0x4f17f8u;
    // NOP
label_4f17fc:
    // 0x4f17fc: 0x0  nop
    ctx->pc = 0x4f17fcu;
    // NOP
label_4f1800:
    // 0x4f1800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f1800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f1804:
    // 0x4f1804: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f1804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f1808:
    // 0x4f1808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f1808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4f180c:
    // 0x4f180c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f1810:
    // 0x4f1810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f1810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f1814:
    // 0x4f1814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f1814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f1818:
    // 0x4f1818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f1818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f181c:
    // 0x4f181c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4f181cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f1820:
    // 0x4f1820: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4f1824:
    if (ctx->pc == 0x4F1824u) {
        ctx->pc = 0x4F1824u;
            // 0x4f1824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F1828u;
        goto label_4f1828;
    }
    ctx->pc = 0x4F1820u;
    {
        const bool branch_taken_0x4f1820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F1824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1820u;
            // 0x4f1824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1820) {
            ctx->pc = 0x4F1854u;
            goto label_4f1854;
        }
    }
    ctx->pc = 0x4F1828u;
label_4f1828:
    // 0x4f1828: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f1828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f182c:
    // 0x4f182c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4f1830:
    if (ctx->pc == 0x4F1830u) {
        ctx->pc = 0x4F1830u;
            // 0x4f1830: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F1834u;
        goto label_4f1834;
    }
    ctx->pc = 0x4F182Cu;
    {
        const bool branch_taken_0x4f182c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f182c) {
            ctx->pc = 0x4F1830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F182Cu;
            // 0x4f1830: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1848u;
            goto label_4f1848;
        }
    }
    ctx->pc = 0x4F1834u;
label_4f1834:
    // 0x4f1834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f1834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f1838:
    // 0x4f1838: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4f183c:
    if (ctx->pc == 0x4F183Cu) {
        ctx->pc = 0x4F1840u;
        goto label_4f1840;
    }
    ctx->pc = 0x4F1838u;
    {
        const bool branch_taken_0x4f1838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f1838) {
            ctx->pc = 0x4F1888u;
            goto label_4f1888;
        }
    }
    ctx->pc = 0x4F1840u;
label_4f1840:
    // 0x4f1840: 0x10000011  b           . + 4 + (0x11 << 2)
label_4f1844:
    if (ctx->pc == 0x4F1844u) {
        ctx->pc = 0x4F1848u;
        goto label_4f1848;
    }
    ctx->pc = 0x4F1840u;
    {
        const bool branch_taken_0x4f1840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1840) {
            ctx->pc = 0x4F1888u;
            goto label_4f1888;
        }
    }
    ctx->pc = 0x4F1848u;
label_4f1848:
    // 0x4f1848: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4f1848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4f184c:
    // 0x4f184c: 0x320f809  jalr        $t9
label_4f1850:
    if (ctx->pc == 0x4F1850u) {
        ctx->pc = 0x4F1854u;
        goto label_4f1854;
    }
    ctx->pc = 0x4F184Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F1854u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F1854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F1854u; }
            if (ctx->pc != 0x4F1854u) { return; }
        }
        }
    }
    ctx->pc = 0x4F1854u;
label_4f1854:
    // 0x4f1854: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4f1854u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4f1858:
    // 0x4f1858: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4f185c:
    if (ctx->pc == 0x4F185Cu) {
        ctx->pc = 0x4F1860u;
        goto label_4f1860;
    }
    ctx->pc = 0x4F1858u;
    {
        const bool branch_taken_0x4f1858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1858) {
            ctx->pc = 0x4F1888u;
            goto label_4f1888;
        }
    }
    ctx->pc = 0x4F1860u;
label_4f1860:
    // 0x4f1860: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f1860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1864:
    // 0x4f1864: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f1864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1868:
    // 0x4f1868: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4f1868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4f186c:
    // 0x4f186c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4f186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f1870:
    // 0x4f1870: 0xc0e3658  jal         func_38D960
label_4f1874:
    if (ctx->pc == 0x4F1874u) {
        ctx->pc = 0x4F1874u;
            // 0x4f1874: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4F1878u;
        goto label_4f1878;
    }
    ctx->pc = 0x4F1870u;
    SET_GPR_U32(ctx, 31, 0x4F1878u);
    ctx->pc = 0x4F1874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1870u;
            // 0x4f1874: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1878u; }
        if (ctx->pc != 0x4F1878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1878u; }
        if (ctx->pc != 0x4F1878u) { return; }
    }
    ctx->pc = 0x4F1878u;
label_4f1878:
    // 0x4f1878: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4f1878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4f187c:
    // 0x4f187c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4f187cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4f1880:
    // 0x4f1880: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4f1884:
    if (ctx->pc == 0x4F1884u) {
        ctx->pc = 0x4F1884u;
            // 0x4f1884: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4F1888u;
        goto label_4f1888;
    }
    ctx->pc = 0x4F1880u;
    {
        const bool branch_taken_0x4f1880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1880u;
            // 0x4f1884: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1880) {
            ctx->pc = 0x4F1868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f1868;
        }
    }
    ctx->pc = 0x4F1888u;
label_4f1888:
    // 0x4f1888: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f1888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f188c:
    // 0x4f188c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f188cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f1890:
    // 0x4f1890: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f1890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1894:
    // 0x4f1894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f1894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f1898:
    // 0x4f1898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f189c:
    // 0x4f189c: 0x3e00008  jr          $ra
label_4f18a0:
    if (ctx->pc == 0x4F18A0u) {
        ctx->pc = 0x4F18A0u;
            // 0x4f18a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4F18A4u;
        goto label_4f18a4;
    }
    ctx->pc = 0x4F189Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F18A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F189Cu;
            // 0x4f18a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F18A4u;
label_4f18a4:
    // 0x4f18a4: 0x0  nop
    ctx->pc = 0x4f18a4u;
    // NOP
label_4f18a8:
    // 0x4f18a8: 0x0  nop
    ctx->pc = 0x4f18a8u;
    // NOP
label_4f18ac:
    // 0x4f18ac: 0x0  nop
    ctx->pc = 0x4f18acu;
    // NOP
label_4f18b0:
    // 0x4f18b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f18b4:
    // 0x4f18b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4f18b8:
    // 0x4f18b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f18b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f18bc:
    // 0x4f18bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f18bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f18c0:
    // 0x4f18c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f18c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f18c4:
    // 0x4f18c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f18c8:
    // 0x4f18c8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4f18c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f18cc:
    // 0x4f18cc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4f18d0:
    if (ctx->pc == 0x4F18D0u) {
        ctx->pc = 0x4F18D0u;
            // 0x4f18d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F18D4u;
        goto label_4f18d4;
    }
    ctx->pc = 0x4F18CCu;
    {
        const bool branch_taken_0x4f18cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F18D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F18CCu;
            // 0x4f18d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f18cc) {
            ctx->pc = 0x4F1908u;
            goto label_4f1908;
        }
    }
    ctx->pc = 0x4F18D4u;
label_4f18d4:
    // 0x4f18d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f18d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f18d8:
    // 0x4f18d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f18d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f18dc:
    // 0x4f18dc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4f18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4f18e0:
    // 0x4f18e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4f18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f18e4:
    // 0x4f18e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f18e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f18e8:
    // 0x4f18e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f18e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f18ec:
    // 0x4f18ec: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4f18ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4f18f0:
    // 0x4f18f0: 0x320f809  jalr        $t9
label_4f18f4:
    if (ctx->pc == 0x4F18F4u) {
        ctx->pc = 0x4F18F8u;
        goto label_4f18f8;
    }
    ctx->pc = 0x4F18F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F18F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F18F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F18F8u; }
            if (ctx->pc != 0x4F18F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4F18F8u;
label_4f18f8:
    // 0x4f18f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4f18f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4f18fc:
    // 0x4f18fc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4f18fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4f1900:
    // 0x4f1900: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4f1904:
    if (ctx->pc == 0x4F1904u) {
        ctx->pc = 0x4F1904u;
            // 0x4f1904: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4F1908u;
        goto label_4f1908;
    }
    ctx->pc = 0x4F1900u;
    {
        const bool branch_taken_0x4f1900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1900u;
            // 0x4f1904: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1900) {
            ctx->pc = 0x4F18DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f18dc;
        }
    }
    ctx->pc = 0x4F1908u;
label_4f1908:
    // 0x4f1908: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f1908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f190c:
    // 0x4f190c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f190cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f1910:
    // 0x4f1910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f1910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1914:
    // 0x4f1914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f1914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f1918:
    // 0x4f1918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f191c:
    // 0x4f191c: 0x3e00008  jr          $ra
label_4f1920:
    if (ctx->pc == 0x4F1920u) {
        ctx->pc = 0x4F1920u;
            // 0x4f1920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4F1924u;
        goto label_4f1924;
    }
    ctx->pc = 0x4F191Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F191Cu;
            // 0x4f1920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1924u;
label_4f1924:
    // 0x4f1924: 0x0  nop
    ctx->pc = 0x4f1924u;
    // NOP
label_4f1928:
    // 0x4f1928: 0x0  nop
    ctx->pc = 0x4f1928u;
    // NOP
label_4f192c:
    // 0x4f192c: 0x0  nop
    ctx->pc = 0x4f192cu;
    // NOP
}
